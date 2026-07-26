-- AutoExpedition
--
-- The expedition station has two different models:
--
--   PalMapObjectCharacterTeamMissionModel       replicated/concrete model
--   PalUIMapObjectCharacterTeamMissionModel    local UI model
--
-- RequestSelectMission, RequestSelectAuto, and RequestStartMission belong to
-- the UI model.  The old version found the concrete model and then swallowed
-- the resulting errors, which made every dispatch message a false positive.

local Config = require("config")
local UEHelpers = require("UEHelpers")

local STATE = {
    None = 0,
    Ready = 1,
    InProgress = 2,
    Reward = 3,
}

local workflows = {}
local loopStarted = false
local loggedReasons = {}
local baseCampUtility = nil
local workflowStep
local schedule

local function log(message, ...)
    if select("#", ...) > 0 then
        message = string.format(message, ...)
    end
    print("[AutoExpedition] " .. tostring(message))
end

local function unwrap(value)
    if value == nil then return nil end
    local ok, unwrapped = pcall(function() return value:get() end)
    return ok and unwrapped or value
end

local function valid(object)
    object = unwrap(object)
    if object == nil then return false end
    local ok, result = pcall(function() return object:IsValid() end)
    return ok and result == true
end

local function invoke(label, callback)
    local ok, result = pcall(callback)
    if not ok then
        log("%s failed: %s", label, tostring(result))
        return false, nil
    end
    return true, result
end

local function value(callback)
    local ok, result = pcall(callback)
    return ok and result or nil
end

local function targetExpeditionID()
    local configured = value(function()
        return Config.GetTargetExpeditionID and Config.GetTargetExpeditionID()
    end)
    if type(configured) == "string" and configured ~= "" then return configured end
    return Config.TargetExpeditionID
end

local function guidString(guid)
    guid = unwrap(guid)
    if guid == nil then return nil end

    local text = value(function() return guid:ToString() end)
    if text ~= nil then return tostring(text) end

    local formatted = value(function()
        return string.format("%08X-%08X-%08X-%08X", guid.A, guid.B, guid.C, guid.D)
    end)
    return formatted and tostring(formatted) or nil
end

local function stateOf(model)
    local state = value(function() return model.State end)
    return tonumber(state)
end

local function modelKey(model)
    return guidString(value(function() return model.InstanceId end))
        or guidString(value(function() return model:GetInstanceId() end))
        or tostring(model)
end

local function stateName(state)
    for name, number in pairs(STATE) do
        if state == number then return name end
    end
    return tostring(state)
end

local function retryTime()
    return os.time() + math.max(1, math.ceil((Config.RetryCooldown or 30000) / 1000))
end

local function workflowFor(key)
    local workflow = workflows[key]
    if not workflow then
        workflow = { key = key, phase = nil, nextTry = 0 }
        workflows[key] = workflow
    end
    return workflow
end

local function clearWorkflow(key, cooldown)
    local workflow = workflowFor(key)
    workflow.phase = nil
    workflow.ui = nil
    workflow.nextTry = cooldown and retryTime() or 0
end

local function logOnce(key, message, ...)
    local marker = key .. ":" .. message
    if loggedReasons[marker] then return end
    loggedReasons[marker] = true
    log(message, ...)
end

local function getController()
    local controller = value(function() return UEHelpers.GetPlayerController() end)
    if valid(controller) then return controller end

    controller = value(function() return FindFirstOf("PalPlayerController") end)
    return valid(controller) and controller or nil
end

local function getPlayerState(controller)
    local state = value(function() return controller:GetPalPlayerState() end)
    return valid(state) and state or nil
end

local function getPlayerId(controller)
    local state = getPlayerState(controller)
    if not state then return nil end
    return tonumber(value(function() return state:GetPlayerId() end))
end

local function getInventory(controller)
    local state = getPlayerState(controller)
    if not state then return nil end
    local inventory = value(function() return state:GetInventoryData() end)
    return valid(inventory) and inventory or nil
end

local function getItemContainerManager(context)
    local utility = value(function()
        return StaticFindObject("/Script/Pal.Default__PalUtility")
    end)
    if not valid(utility) then return nil end

    local manager = value(function() return utility:GetItemContainerManager(context) end)
    return valid(manager) and manager or nil
end

local function getContainer(context, containerId)
    if containerId == nil then return nil end
    local manager = getItemContainerManager(context)
    if not manager then return nil end
    local container = value(function() return manager:GetContainer(containerId) end)
    return valid(container) and container or nil
end

local function getSlots(container)
    local slots = value(function() return container.ItemSlotArray end)
    return slots
end

local function slotId(slot)
    local id = value(function() return slot:GetSlotId() end)
    return id
end

local function slotKey(slot)
    local index = tonumber(value(function() return slot.SlotIndex end))
    local containerId = value(function() return slot.ContainerId end)
    local guid = guidString(value(function() return containerId.ID end))
    if index == nil then return nil end
    return tostring(guid or containerId or "unknown") .. ":" .. tostring(index)
end

local function slotCount(slot)
    return tonumber(value(function() return slot.StackCount end)) or 0
end

local function filledSlotCount(container)
    local slots = getSlots(container)
    if not slots then return 0 end

    local count = 0
    pcall(function()
        for index = 1, #slots do
            local slot = unwrap(slots[index])
            if valid(slot) and slotCount(slot) > 0 then count = count + 1 end
        end
    end)
    return count
end

local function snapshotInventory(controller)
    local inventory = getInventory(controller)
    if not inventory then return nil end

    local info = value(function() return inventory.MyInventoryInfo end)
    local commonId = value(function() return info.CommonContainerId end)
    local container = getContainer(controller, commonId)
    if not container then return nil end

    local snapshot = { containerId = commonId, slots = {} }
    local slots = getSlots(container)
    if slots then
        pcall(function()
            for index = 1, #slots do
                local slot = unwrap(slots[index])
                if valid(slot) and slotCount(slot) > 0 then
                    local key = slotKey(slot)
                    if key then
                        snapshot.slots[key] = {
                            count = slotCount(slot),
                        }
                    end
                end
            end
        end)
    end
    return snapshot
end

local function changedInventorySlots(controller, snapshot)
    local result = {}
    if not snapshot or not snapshot.slots then return result end
    local inventory = getInventory(controller)
    if not inventory then return result end

    local info = value(function() return inventory.MyInventoryInfo end)
    local commonId = value(function() return info.CommonContainerId end)
    local container = getContainer(controller, commonId)
    local slots = container and getSlots(container) or nil
    if not slots then return result end

    pcall(function()
        for index = 1, #slots do
            local slot = unwrap(slots[index])
            if valid(slot) and slotCount(slot) > 0 then
                local key = slotKey(slot)
                local before = snapshot and snapshot.slots[key] or nil
                local after = slotCount(slot)
                if before == nil or after > before.count then
                    local id = slotId(slot)
                    if id then result[#result + 1] = id end
                end
            end
        end
    end)
    return result
end

local function getBaseCampId(model)
    local baseCamp = value(function() return model:GetBaseCampModelBelongTo() end)
    if not valid(baseCamp) then return nil end

    local id = value(function() return baseCamp:GetId() end)
    if id ~= nil then return id end
    return value(function() return baseCamp.ID end)
end

local function getRewardContainer(model)
    local module = value(function() return model:GetItemContainerModule() end)
    if not valid(module) then return nil, nil end

    local container = value(function() return module:GetContainer() end)
    if not valid(container) then
        container = value(function() return module.TargetContainer end)
    end
    if not valid(container) then return nil, nil end

    local id = value(function() return module:GetContainerId() end)
    if id == nil then id = value(function() return container:GetId() end) end
    if id == nil then id = value(function() return container.ID end) end
    return container, id
end

local function getUiModels()
    local models = value(function()
        return FindAllOf("PalUIMapObjectCharacterTeamMissionModel")
    end)
    return models or {}
end

local function getUiModelFor(model, key)
    local candidates = {}
    for _, candidate in ipairs(getUiModels()) do
        if valid(candidate) then candidates[#candidates + 1] = candidate end
    end

    if #candidates == 1 then return candidates[1] end
    if #candidates == 0 then
        logOnce(key, "No expedition UI model is loaded; waiting for the station menu to replicate.")
        return nil
    end

    -- GetConcreteModelInstanceId uses an out parameter. Calling it without a
    -- destination is unsafe on some UE4SS Lua builds, so do not guess when
    -- more than one station menu exists.
    logOnce(key, "Found %d expedition UI models; waiting until one station menu remains open.", #candidates)
    return nil
end

local function assignedCount(model)
    local assigned = value(function() return model.AssignedInfo end)
    local items = value(function() return assigned.RepInfoArray.Items end)
    if not items then return 0 end

    local count = 0
    pcall(function()
        items:ForEach(function(_, element)
            if unwrap(element) ~= nil then count = count + 1 end
        end)
    end)
    if count == 0 then
        count = tonumber(value(function() return #items end)) or 0
    end
    return count
end

schedule = function(key, model, delay)
    ExecuteWithDelay(delay or Config.ActionDelay, function()
        if valid(model) then
            local workflow = workflows[key]
            if workflow then
                workflowStep(model, key, workflow)
            end
        end
    end)
end

local function beginBulkStorage(model, key, workflow)
    if Config.EnableEasyBulkStorage == false then
        workflow.phase = "wait_state"
        schedule(key, model, Config.StorageFinishDelay)
        return
    end

    local controller = getController()
    local baseCampId = getBaseCampId(model)
    if not controller or baseCampId == nil then
        logOnce(key, "Cannot run Easy Bulk Storage yet: player controller or expedition base camp is unavailable.")
        workflow.phase = "wait_state"
        schedule(key, model, Config.StorageFinishDelay)
        return
    end

    local slotIds = changedInventorySlots(controller, workflow.inventorySnapshot)
    if #slotIds == 0 then
        log("Reward container emptied, but no newly filled inventory slots were found; nothing to bulk-store.")
        workflow.phase = "wait_state"
        schedule(key, model, Config.StorageFinishDelay)
        return
    end

    if not valid(baseCampUtility) then
        baseCampUtility = value(function()
            return StaticFindObject("/Script/Pal.Default__PalBaseCampUtility")
        end)
    end
    if not valid(baseCampUtility) then
        logOnce(key, "PalBaseCampUtility is unavailable; loot was collected but could not be sent to base storage.")
        workflow.phase = "wait_state"
        schedule(key, model, Config.StorageFinishDelay)
        return
    end

    invoke("start Easy Bulk Storage replication", function()
        return baseCampUtility:RequestStartReplicateLocalPlayerBaseCampItemStackInfo(controller)
    end)

    workflow.phase = "storage_ready"
    workflow.slotIds = slotIds
    workflow.baseCampId = baseCampId
    schedule(key, model, Config.StorageReadyDelay)
end

local function collectExpeditionLoot(inventory, containerId)
    local methodNames = {
        "RequestMoveItemToInventoryFromTargetContainer_ToServer",
        "RequestMoveItemFromTargetContainerToInventory_ToServer",
        "RequestFillSlotToInventoryFromTargetContainer_ToServer",
    }

    for _, methodName in ipairs(methodNames) do
        local method = value(function() return inventory[methodName] end)
        if type(method) == "function" then
            local ok = invoke("collect expedition loot via " .. methodName, function()
                return method(inventory, containerId)
            end)
            if ok then return true end
        end
    end

    return false
end

workflowStep = function(model, key, workflow)
    local currentState = stateOf(model)
    if currentState == nil then return end

    if workflow.phase == "select" then
        if not valid(workflow.ui) then
            logOnce(key, "Expedition UI model closed before auto-assign; waiting for the station menu again.")
            clearWorkflow(key, true)
            return
        end

        local ok = invoke("auto-assign expedition party", function()
            return workflow.ui:RequestSelectAuto()
        end)
        if not ok then
            clearWorkflow(key, true)
            return
        end
        workflow.phase = "auto"
        workflow.attempts = 0
        schedule(key, model)
        return
    end

    if workflow.phase == "auto" then
        if currentState == STATE.InProgress then
            log("Expedition started successfully: %s", targetExpeditionID())
            clearWorkflow(key, false)
            return
        end

        local count = assignedCount(model)
        if count > 0 then
            local canStart = value(function() return workflow.ui:CanStartMission() end)
            if canStart == false then
                workflow.attempts = (workflow.attempts or 0) + 1
                if workflow.attempts > Config.MaxRequestRetries then
                    log("Auto-assign selected %d Pal(s), but the station still reports that the mission cannot start.", count)
                    clearWorkflow(key, true)
                    return
                end
                invoke("retry auto-assign expedition party", function()
                    return workflow.ui:RequestSelectAuto()
                end)
                schedule(key, model)
                return
            end

            invoke("start expedition", function()
                return workflow.ui:RequestStartMission()
            end)
            workflow.phase = "start"
            workflow.attempts = 0
            schedule(key, model)
            return
        end

        workflow.attempts = (workflow.attempts or 0) + 1
        if workflow.attempts > Config.MaxRequestRetries then
            log("Auto-assign did not produce a party after %d attempts; mission was not started.", Config.MaxRequestRetries)
            clearWorkflow(key, true)
            return
        end
        invoke("retry auto-assign expedition party", function()
            return workflow.ui:RequestSelectAuto()
        end)
        schedule(key, model)
        return
    end

    if workflow.phase == "start" then
        if currentState == STATE.InProgress then
            log("Expedition started successfully: %s", targetExpeditionID())
            clearWorkflow(key, false)
            return
        end

        workflow.attempts = (workflow.attempts or 0) + 1
        if workflow.attempts > Config.MaxRequestRetries then
            log("Start request did not change station state; current state is %s.", stateName(currentState))
            clearWorkflow(key, true)
            return
        end
        invoke("retry start expedition", function()
            return workflow.ui:RequestStartMission()
        end)
        schedule(key, model)
        return
    end

    if workflow.phase == "collect" then
        local container = getRewardContainer(model)
        if not container then
            logOnce(key, "Reward state is active, but the expedition reward container is not available yet.")
            workflow.attempts = (workflow.attempts or 0) + 1
            if workflow.attempts > Config.MaxCollectionRetries then
                clearWorkflow(key, true)
            else
                schedule(key, model)
            end
            return
        end

        if filledSlotCount(container) == 0 then
            beginBulkStorage(model, key, workflow)
            return
        end

        local controller = getController()
        local inventory = controller and getInventory(controller) or nil
        local _, containerId = getRewardContainer(model)
        if not inventory or containerId == nil then
            logOnce(key, "Cannot collect expedition loot yet: player inventory or reward container ID is unavailable.")
            schedule(key, model)
            return
        end

        if not collectExpeditionLoot(inventory, containerId) then
            logOnce(key, "No supported loot transfer RPC was available for the expedition reward container.")
        end
        workflow.phase = "collect"
        workflow.attempts = (workflow.attempts or 0) + 1
        if workflow.attempts > Config.MaxCollectionRetries then
            log("Expedition loot is still present after %d collection requests; leaving the station in Reward state.", Config.MaxCollectionRetries)
            clearWorkflow(key, true)
        else
            schedule(key, model)
        end
        return
    end

    if workflow.phase == "storage_ready" then
        local controller = getController()
        if not controller then
            logOnce(key, "Easy Bulk Storage was prepared, but the local player controller is no longer available.")
            workflow.phase = "wait_state"
            schedule(key, model, Config.StorageFinishDelay)
            return
        end
        invoke("Easy Bulk Storage", function()
            return baseCampUtility:RequestMoveInventoryItemToBaseCamp(
                controller,
                workflow.baseCampId,
                workflow.slotIds,
                true
            )
        end)
        workflow.phase = "storage_done"
        schedule(key, model, Config.StorageFinishDelay)
        return
    end

    if workflow.phase == "storage_done" then
        local controller = getController()
        if not controller then
            workflow.phase = "wait_state"
            schedule(key, model, Config.StorageFinishDelay)
            return
        end
        invoke("finish Easy Bulk Storage replication", function()
            return baseCampUtility:RequestEndReplicateLocalPlayerBaseCampItemStackInfo(controller)
        end)
        workflow.phase = "wait_state"
        workflow.attempts = 0
        schedule(key, model, Config.StorageFinishDelay)
        return
    end

    if workflow.phase == "wait_state" then
        if currentState == STATE.Reward then
            local container = getRewardContainer(model)
            if container and filledSlotCount(container) > 0 then
                workflow.phase = "collect"
                workflow.attempts = 0
                schedule(key, model)
                return
            end
            workflow.attempts = (workflow.attempts or 0) + 1
            if workflow.attempts <= Config.MaxCollectionRetries then
                schedule(key, model)
                return
            end
            logOnce(key, "Loot is empty, but the station remains in Reward state; waiting for the game to finish its reward transition.")
            clearWorkflow(key, true)
            return
        end
        clearWorkflow(key, false)
        return
    end
end

local function startDispatch(model, key, workflow)
    local ui = getUiModelFor(model, key)
    if not ui then
        -- Mission selection is exposed safely by the local UI model. The
        -- concrete model's TargetMissionId is an FName and must not be read or
        -- written directly from Lua on affected UE4SS builds.
        workflow.nextTry = 0
        return
    end

    workflow.ui = ui
    workflow.phase = "select"
    workflow.attempts = 0
    local ok = invoke("select expedition " .. targetExpeditionID(), function()
        return ui:RequestSelectMission(targetExpeditionID())
    end)
    if not ok then
        clearWorkflow(key, true)
        return
    end
    schedule(key, model)
end

local function startCollection(model, key, workflow)
    local container = getRewardContainer(model)
    if not container then
        logOnce(key, "Reward state is active, but the expedition reward container is not available yet.")
        workflow.nextTry = retryTime()
        return
    end

    if filledSlotCount(container) == 0 then
        workflow.phase = "wait_state"
        workflow.attempts = 0
        schedule(key, model, Config.StorageFinishDelay)
        return
    end

    local controller = getController()
    if not controller then
        logOnce(key, "Cannot collect expedition loot because no local player controller is available.")
        workflow.nextTry = retryTime()
        return
    end

    workflow.inventorySnapshot = snapshotInventory(controller)
    workflow.phase = "collect"
    workflow.attempts = 0
    workflowStep(model, key, workflow)
end

local function dumpMissionInfo()
    local models = value(function()
        return FindAllOf("PalMapObjectCharacterTeamMissionModel")
    end) or {}
    local found = 0
    for _, model in ipairs(models) do
        if valid(model) then
            found = found + 1
            log("Station %s: state=%s assigned=%d", modelKey(model), stateName(stateOf(model)), assignedCount(model))
        end
    end
    if found == 0 then
        log("No expedition station model is loaded yet; waiting for the station/base to replicate.")
    end
end

function ProcessExpeditionLoop()
    local models = value(function()
        return FindAllOf("PalMapObjectCharacterTeamMissionModel")
    end) or {}

    for _, model in ipairs(models) do
        if valid(model) then
            local key = modelKey(model)
            local workflow = workflowFor(key)
            local currentState = stateOf(model)

            if workflow.phase == nil and os.time() >= (workflow.nextTry or 0) then
                if currentState == STATE.Reward then
                    startCollection(model, key, workflow)
                elseif currentState == STATE.Ready or currentState == STATE.None then
                    startDispatch(model, key, workflow)
                end
            end
        end
    end

    ExecuteWithDelay(Config.CheckInterval, ProcessExpeditionLoop)
end

RegisterHook("/Script/Engine.PlayerController:ServerAcknowledgePossession", function()
    if loopStarted then return end
    loopStarted = true
    ExecuteWithDelay(Config.StartDelay, function()
        dumpMissionInfo()
        log("Automated expedition loop started.")
        ProcessExpeditionLoop()
    end)
end)
