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
local stationSnapshots = {}
local debugStartClock = os.clock() + (math.max(0, tonumber(Config.DebugWarmupMs) or 0) / 1000)
local debugWarmupNotified = false

local function log(message, ...)
    if select("#", ...) > 0 then
        message = string.format(message, ...)
    end
    print("[AutoExpedition] " .. tostring(message))
end

local function debugEnabled()
    if Config.DebugEnabled ~= true then return false end

    local ready = os.clock() >= debugStartClock
    if ready and not debugWarmupNotified then
        debugWarmupNotified = true
        print("[AutoExpedition][Debug] Debug tracing is now active.")
    end
    return ready
end

local function debugVerbose()
    return Config.DebugEnabled == true and Config.DebugVerbose == true
end

local function debugSlotsEnabled()
    return Config.DebugEnabled == true and Config.DebugSlotDetails == true
end

local function debugHeartbeatEnabled()
    return Config.DebugEnabled == true and Config.DebugLoopHeartbeat == true
end

local function dlog(message, ...)
    if not debugEnabled() then return end

    local function safeArg(any)
        local kind = type(any)
        if kind == "nil" then return "nil" end
        if kind == "boolean" or kind == "number" or kind == "string" then
            return tostring(any)
        end
        if kind == "table" then return "<table>" end
        return string.format("<%s>", kind)
    end

    if select("#", ...) > 0 then
        local packed = {}
        for i = 1, select("#", ...) do
            packed[i] = safeArg(select(i, ...))
        end

        local ok, formatted = pcall(function()
            return string.format(message, table.unpack(packed))
        end)
        if ok then
            message = formatted
        else
            message = tostring(message) .. " [debug-format-failed]"
        end
    end

    print("[AutoExpedition][Debug] " .. tostring(message))
end

local function shortValue(any)
    local kind = type(any)
    if kind == "nil" then return "nil" end
    if kind == "boolean" or kind == "number" or kind == "string" then
        return tostring(any)
    end
    if kind == "table" then return "<table>" end
    return string.format("<%s>", kind)
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
    local started = os.clock()
    if debugEnabled() then
        dlog("RPC attempt: %s", label)
    end

    local ok, result = pcall(callback)
    if not ok then
        local errorText = shortValue(result)
        log("%s failed: %s", label, errorText)
        dlog("RPC failure: %s (elapsed=%.4fs)", label, os.clock() - started)
        return false, nil
    end

    if debugEnabled() then
        dlog("RPC success: %s (elapsed=%.4fs, return=%s)", label, os.clock() - started, shortValue(result))
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

local function setPhase(workflow, newPhase, reason)
    local oldPhase = workflow.phase
    workflow.phase = newPhase
    if debugEnabled() and oldPhase ~= newPhase then
        dlog(
            "Workflow %s phase: %s -> %s (%s)",
            tostring(workflow.key),
            tostring(oldPhase),
            tostring(newPhase),
            tostring(reason or "no reason")
        )
    end
end

local function retryTime()
    return os.time() + math.max(1, math.ceil((Config.RetryCooldown or 30000) / 1000))
end

local function workflowFor(key)
    local workflow = workflows[key]
    if not workflow then
        workflow = { key = key, phase = nil, nextTry = 0 }
        workflows[key] = workflow
        dlog("Created workflow for station %s", tostring(key))
    end
    return workflow
end

local function clearWorkflow(key, cooldown)
    local workflow = workflowFor(key)
    if debugEnabled() then
        dlog(
            "Clearing workflow %s (phase=%s attempts=%s cooldown=%s)",
            tostring(key),
            tostring(workflow.phase),
            tostring(workflow.attempts),
            tostring(cooldown)
        )
    end
    workflow.phase = nil
    workflow.ui = nil
    workflow.attempts = nil
    workflow.slotIds = nil
    workflow.storageTargetContainerId = nil
    workflow.storageSlotMoves = nil
    workflow.baseCampId = nil
    workflow.inventorySnapshot = nil
    workflow.rewardDirectAttempted = nil
    workflow.inventoryFallbackNeeded = nil
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

local function getContainerId(container)
    if not valid(container) then return nil end

    local id = value(function() return container:GetId() end)
    if id == nil then id = value(function() return container.ID end) end
    return id
end

local function getNetworkItemComponent(context)
    local utility = value(function()
        return StaticFindObject("/Script/Pal.Default__PalUtility")
    end)
    if not valid(utility) then return nil end

    local transmitter = value(function() return utility:GetNetworkTransmitter(context) end)
    if not valid(transmitter) then return nil end

    local item = value(function() return transmitter:GetItem() end)
    return valid(item) and item or nil
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

local function filledSlotIds(container)
    local slots = getSlots(container)
    local result = {}
    if not slots then return result end

    pcall(function()
        for index = 1, #slots do
            local slot = unwrap(slots[index])
            if valid(slot) and slotCount(slot) > 0 then
                local id = slotId(slot)
                if id then result[#result + 1] = id end
            end
        end
    end)

    return result
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

local function sameGuid(left, right)
    local leftText = guidString(left)
    local rightText = guidString(right)
    if leftText == nil or rightText == nil then return false end
    return leftText == rightText
end

local function getRewardContainer(model)
    local module = value(function() return model:GetItemContainerModule() end)
    if not valid(module) then
        dlog("Reward container module missing for station %s", tostring(modelKey(model)))
        return nil, nil
    end

    local container = value(function() return module:GetContainer() end)
    if not valid(container) then
        container = value(function() return module.TargetContainer end)
    end
    if not valid(container) then
        dlog("Reward container object missing for station %s", tostring(modelKey(model)))
        return nil, nil
    end

    local id = value(function() return module:GetContainerId() end)
    if id == nil then id = value(function() return container:GetId() end) end
    if id == nil then id = value(function() return container.ID end) end
    if debugVerbose() then
        dlog("Resolved reward container for station %s (containerId=%s)", tostring(modelKey(model)), shortValue(id))
    end
    return container, id
end

local function buildSlotMoves(container)
    local moves = {}
    local slots = getSlots(container)
    if not slots then return moves end

    pcall(function()
        for index = 1, #slots do
            local slot = unwrap(slots[index])
            if valid(slot) then
                local count = slotCount(slot)
                local id = slotId(slot)
                if id ~= nil and count > 0 then
                    moves[#moves + 1] = {
                        SlotId = id,
                        Num = count,
                    }
                    if debugSlotsEnabled() then
                        local itemName = value(function() return slot.ItemId.StaticId end)
                            or value(function() return slot:GetItemId().StaticId end)
                            or "unknown"
                        dlog(
                            "Slot move prepared: index=%d count=%d item=%s slotId=%s",
                            index,
                            count,
                            tostring(itemName),
                            shortValue(id)
                        )
                    end
                end
            end
        end
    end)

    if debugEnabled() then
        local totalCount = 0
        for _, move in ipairs(moves) do
            totalCount = totalCount + (tonumber(move.Num) or 0)
        end
        dlog("Prepared %d slot move(s), total stack count=%d", #moves, totalCount)
    end

    return moves
end

local function getStorageTargetContainerId(model)
    local candidateClassNames = {
        "PalMapObjectGuildChestModel",
        "PalMapObjectItemChestModel",
        "PalMapObjectGlobalPalStorageModel",
    }

    local fallbackContainerId = nil

    for _, className in ipairs(candidateClassNames) do
        local candidates = value(function()
            return FindAllOf(className)
        end) or {}

        if debugVerbose() then
            dlog("Scanning %d candidates of class %s", #candidates, tostring(className))
        end

        for _, candidate in ipairs(candidates) do
            if valid(candidate) then
                local candidateKey = modelKey(candidate)
                local candidateInstanceId = value(function() return candidate:GetInstanceId() end)
                    or value(function() return candidate:GetModelInstanceId() end)
                local access = value(function() return candidate:GetItemChestContainerAccess() end)
                if not valid(access) then
                    access = value(function() return candidate:GetItemContainerAccess() end)
                end

                if valid(access) then
                    local container = value(function()
                        return access:GetItemContainer_ItemContainerAccessInterface()
                    end)
                    local containerId = getContainerId(container)
                    if containerId ~= nil then
                        local ownerId = value(function() return container.OwnerMapObjectInstanceId end)
                        local ownerMatches = ownerId ~= nil and candidateInstanceId ~= nil and sameGuid(ownerId, candidateInstanceId)

                        if ownerMatches then
                            dlog(
                                "Selected storage target: class=%s station=%s owner=%s containerId=%s",
                                tostring(className),
                                tostring(candidateKey),
                                shortValue(ownerId),
                                shortValue(containerId)
                            )
                            return containerId
                        end

                        if fallbackContainerId == nil then
                            fallbackContainerId = containerId
                            dlog(
                                "Queued fallback storage target: class=%s station=%s owner=%s containerId=%s",
                                tostring(className),
                                tostring(candidateKey),
                                shortValue(ownerId),
                                shortValue(containerId)
                            )
                        end
                    else
                        dlog("Container access found but no container id for class=%s station=%s", tostring(className), tostring(candidateKey))
                    end
                elseif debugVerbose() then
                    dlog("Candidate has no valid container access: class=%s station=%s", tostring(className), tostring(candidateKey))
                end
            end
        end
    end

    if fallbackContainerId ~= nil then
        dlog("Using fallback storage target container %s for station %s", shortValue(fallbackContainerId), tostring(modelKey(model)))
        return fallbackContainerId
    end

    dlog("No base storage target container matched station %s", tostring(modelKey(model)))
    return nil
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

    if debugVerbose() then
        dlog("UI model matching for station %s found %d candidate(s)", tostring(key), #candidates)
    end

    local targetKey = modelKey(model)
    for _, candidate in ipairs(candidates) do
        if modelKey(candidate) == targetKey then
            return candidate
        end
    end

    local targetBaseCampId = getBaseCampId(model)
    if targetBaseCampId ~= nil then
        for _, candidate in ipairs(candidates) do
            if getBaseCampId(candidate) == targetBaseCampId then
                return candidate
            end
        end
    end

    if #candidates == 1 then return candidates[1] end
    if #candidates == 0 then
        logOnce(key, "No expedition UI model is loaded; waiting for the station menu to replicate.")
        return nil
    end

    if #candidates > 1 then
        dlog("Found multiple expedition UI models; falling back to the first valid candidate for station %s", tostring(key))
        return candidates[1]
    end
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
    if debugVerbose() then
        dlog(
            "Scheduling workflow step for station %s in %dms (phase=%s state=%s)",
            tostring(key),
            tonumber(delay or Config.ActionDelay) or 0,
            tostring(workflows[key] and workflows[key].phase or nil),
            tostring(stateName(stateOf(model)))
        )
    end

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
        dlog("Bulk storage disabled by config; skipping for station %s", tostring(key))
        setPhase(workflow, "wait_state", "bulk storage disabled")
        schedule(key, model, Config.StorageFinishDelay)
        return
    end

    dlog("Preparing bulk storage operation for station %s", tostring(key))

    local container = value(function() return getRewardContainer(model) end)
    if not container then
        logOnce(key, "Reward container is unavailable; cannot route loot to base storage yet.")
        setPhase(workflow, "wait_state", "reward container unavailable")
        schedule(key, model, Config.StorageFinishDelay)
        return
    end

    local storageTargetContainerId = getStorageTargetContainerId(model)
    if storageTargetContainerId == nil then
        logOnce(key, "No eligible base storage chest is loaded yet; waiting to move loot into storage.")
        setPhase(workflow, "wait_state", "storage target unavailable")
        schedule(key, model, Config.StorageFinishDelay)
        return
    end

    local slotMoves = buildSlotMoves(container)
    if #slotMoves == 0 then
        dlog("Reward container had no movable slots for station %s", tostring(key))
        setPhase(workflow, "wait_state", "no slot moves")
        schedule(key, model, Config.StorageFinishDelay)
        return
    end

    workflow.storageTargetContainerId = storageTargetContainerId
    workflow.storageSlotMoves = slotMoves
    setPhase(workflow, "storage_ready", "slot moves prepared")
    schedule(key, model, Config.StorageReadyDelay)
end

workflowStep = function(model, key, workflow)
    local currentState = stateOf(model)
    if currentState == nil then return end

    if debugVerbose() then
        dlog(
            "workflowStep station=%s phase=%s state=%s attempts=%s",
            tostring(key),
            tostring(workflow.phase),
            tostring(stateName(currentState)),
            tostring(workflow.attempts)
        )
    end

    if workflow.phase == "select" then
        if not valid(workflow.ui) then
            logOnce(key, "Expedition UI model closed before auto-assign; waiting for the station menu again.")
            clearWorkflow(key, true)
            return
        end

        local ok = invoke("start expedition UI replication", function()
            return workflow.ui:RequestStartReplication()
        end)
        if not ok then
            clearWorkflow(key, true)
            return
        end

        setPhase(workflow, "ui_ready", "expedition UI replication requested")
        workflow.attempts = 0
        schedule(key, model)
        return
    end

    if workflow.phase == "ui_ready" then
        if not valid(workflow.ui) then
            logOnce(key, "Expedition UI model closed before it could finish replicating; waiting for the station menu again.")
            clearWorkflow(key, true)
            return
        end

        local hasAssignInfo = value(function() return workflow.ui:IsExistAssignInfo() end)
        if hasAssignInfo ~= true then
            workflow.attempts = (workflow.attempts or 0) + 1
            if workflow.attempts > Config.MaxRequestRetries then
                log("Expedition UI did not report assigned info after %d attempts; dispatch was not started.", Config.MaxRequestRetries)
                clearWorkflow(key, true)
                return
            end
            schedule(key, model, Config.AutoAssignDelay)
            return
        end

        local ok = invoke("auto-assign expedition party", function()
            return workflow.ui:RequestSelectAuto()
        end)
        if not ok then
            clearWorkflow(key, true)
            return
        end
        setPhase(workflow, "auto", "auto-assign request sent")
        workflow.attempts = 0
        schedule(key, model, Config.AutoAssignDelay)
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
                schedule(key, model, Config.AutoAssignDelay)
                return
            end

            invoke("start expedition", function()
                return workflow.ui:RequestStartMission()
            end)
            setPhase(workflow, "start", "start mission request sent")
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
        schedule(key, model, Config.AutoAssignDelay)
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
            setPhase(workflow, "wait_state", "reward container already empty")
            workflow.attempts = 0
            schedule(key, model, Config.StorageFinishDelay)
            return
        end

        beginBulkStorage(model, key, workflow)
        if workflow.phase ~= "storage_ready" then
            workflow.attempts = (workflow.attempts or 0) + 1
            if workflow.attempts > Config.MaxCollectionRetries then
                log("Expedition loot is still present after %d collection requests; leaving the station in Reward state.", Config.MaxCollectionRetries)
                clearWorkflow(key, true)
            else
                schedule(key, model)
            end
        end
        return
    end

    if workflow.phase == "storage_ready" then
        local controller = getController()
        if not controller then
            logOnce(key, "Easy Bulk Storage was prepared, but the local player controller is no longer available.")
            setPhase(workflow, "wait_state", "controller unavailable")
            schedule(key, model, Config.StorageFinishDelay)
            return
        end

        local networkItem = getNetworkItemComponent(controller)
        if not valid(networkItem) then
            logOnce(key, "Easy Bulk Storage was prepared, but the network item component is no longer available.")
            setPhase(workflow, "wait_state", "network item component unavailable")
            schedule(key, model, Config.StorageFinishDelay)
            return
        end

        if workflow.storageTargetContainerId == nil or workflow.storageSlotMoves == nil or #workflow.storageSlotMoves == 0 then
            dlog("storage_ready has incomplete payload for station %s; target=%s slots=%s", tostring(key), shortValue(workflow.storageTargetContainerId), shortValue(workflow.storageSlotMoves))
            setPhase(workflow, "wait_state", "incomplete storage payload")
            schedule(key, model, Config.StorageFinishDelay)
            return
        end

        local requestId = value(function() return model:GetInstanceId() end)
            or value(function() return model.InstanceId end)
        if debugEnabled() then
            dlog(
                "Storage move request: station=%s targetContainer=%s slotMoves=%d requestId=%s",
                tostring(key),
                shortValue(workflow.storageTargetContainerId),
                #workflow.storageSlotMoves,
                shortValue(requestId)
            )
        end

        invoke("move expedition loot to base storage", function()
            return networkItem:RequestMoveToContainer_ToServer(
                requestId,
                workflow.storageTargetContainerId,
                workflow.storageSlotMoves
            )
        end)
        setPhase(workflow, "storage_done", "storage move request sent")
        schedule(key, model, Config.StorageFinishDelay)
        return
    end

    if workflow.phase == "storage_done" then
        setPhase(workflow, "wait_state", "waiting for reward-state reconciliation")
        workflow.attempts = 0
        schedule(key, model, Config.StorageFinishDelay)
        return
    end

    if workflow.phase == "wait_state" then
        if currentState == STATE.Reward then
            local container = getRewardContainer(model)
            if container and filledSlotCount(container) > 0 then
                setPhase(workflow, "collect", "reward items still present")
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

    if debugVerbose() then
        dlog("No phase handler matched for station=%s phase=%s", tostring(key), tostring(workflow.phase))
    end
end

local function startDispatch(model, key, workflow)
    dlog("Dispatch check for station %s (state=%s)", tostring(key), tostring(stateName(stateOf(model))))

    local ui = getUiModelFor(model, key)
    if not ui then
        -- Mission selection is exposed safely by the local UI model. The
        -- concrete model's TargetMissionId is an FName and must not be read or
        -- written directly from Lua on affected UE4SS builds.
        workflow.nextTry = retryTime()
        dlog("Dispatch delayed for station %s: no matching UI model yet", tostring(key))
        return
    end

    workflow.ui = ui
    setPhase(workflow, "ui_ready", "dispatch started")
    workflow.attempts = 0
    local ok = invoke("start expedition UI replication", function()
        return ui:RequestStartReplication()
    end)
    if not ok then
        clearWorkflow(key, true)
        return
    end
    schedule(key, model)
end

local function startCollection(model, key, workflow)
    dlog("Collection check for station %s (state=%s)", tostring(key), tostring(stateName(stateOf(model))))

    local container = getRewardContainer(model)
    if not container then
        logOnce(key, "Reward state is active, but the expedition reward container is not available yet.")
        workflow.nextTry = retryTime()
        return
    end

    if filledSlotCount(container) == 0 then
        setPhase(workflow, "wait_state", "reward container empty")
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
    if debugVerbose() then
        dlog("Captured inventory snapshot for station %s before collection", tostring(key))
    end
    setPhase(workflow, "collect", "reward container has loot")
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

    if debugHeartbeatEnabled() then
        dlog("Loop heartbeat: discovered %d expedition station model(s)", #models)
    end

    for _, model in ipairs(models) do
        if valid(model) then
            local key = modelKey(model)
            local workflow = workflowFor(key)
            local currentState = stateOf(model)

            local snapshot = tostring(stateName(currentState)) .. "|" .. tostring(workflow.phase) .. "|" .. tostring(workflow.attempts)
            if stationSnapshots[key] ~= snapshot then
                stationSnapshots[key] = snapshot
                dlog(
                    "Station snapshot: key=%s state=%s phase=%s attempts=%s nextTry=%s",
                    tostring(key),
                    tostring(stateName(currentState)),
                    tostring(workflow.phase),
                    tostring(workflow.attempts),
                    tostring(workflow.nextTry)
                )
            end

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
    dlog(
        "Hook fired: ServerAcknowledgePossession (config: DebugEnabled=%s DebugVerbose=%s DebugSlotDetails=%s DebugLoopHeartbeat=%s)",
        tostring(Config.DebugEnabled),
        tostring(Config.DebugVerbose),
        tostring(Config.DebugSlotDetails),
        tostring(Config.DebugLoopHeartbeat)
    )
    ExecuteWithDelay(Config.StartDelay, function()
        dumpMissionInfo()
        log("Automated expedition loop started.")
        ProcessExpeditionLoop()
    end)
end)
