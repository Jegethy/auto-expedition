local Config = {
    -- Friendly name of the dungeon to run. Change this value and restart the
    -- mod/game. The resolver is intentionally runtime-based so a future in-game
    -- selector can change SelectedDungeon without changing main.lua.
    SelectedDungeon = "Desert",

    -- Available expedition choices. The values are Palworld's internal row
    -- names; use the friendly keys above when choosing a dungeon.
    DungeonIDs = {
        Grass = "Dungeon_Grass",
        Forest = "Dungeon_Forest",
        Volcano = "Dungeon_Volcano",
        Desert = "Dungeon_Desert",
        Snow = "Dungeon_Snow",
        Sakurajima = "Dungeon_Sakurajima",
        DarkIsland = "Dungeon_DarkIsland",
        SkyIsland = "Dungeon_SkyIsland",
        WorldTree = "Dungeon_WorldTree",

        GrassHard = "Dungeon_GrassHard",
        ForestHard = "Dungeon_ForestHard",
        VolcanoHard = "Dungeon_VolcanoHard",
        DesertHard = "Dungeon_DesertHard",
        SnowHard = "Dungeon_SnowHard",
        SakurajimaHard = "Dungeon_SakurajimaHard",
        DarkIslandHard = "Dungeon_DarkIslandHard",
        SkyIslandHard = "Dungeon_SkyIslandHard",
        WorldTreeHard = "Dungeon_WorldTreeHard",
    },

    -- Backward-compatible fallback for older configs or a custom row name.
    TargetExpeditionID = "Dungeon_Grass",

    -- Main polling interval and the delay between replicated station requests.
    CheckInterval = 10000,
    StartDelay = 1500,
    ActionDelay = 750,

    -- A failed request is retried a few times, then the station is left alone
    -- until the next cooldown so the mod cannot spam the server.
    MaxRequestRetries = 3,
    MaxCollectionRetries = 3,
    RetryCooldown = 30000,

    -- When enabled, expedition reward items are routed into a base storage
    -- container. Set false to leave rewards in the expedition reward container.
    EnableEasyBulkStorage = true,
    StorageReadyDelay = 500,
    StorageFinishDelay = 1000,

    -- Debug logging:
    --   DebugEnabled: master switch for in-depth instrumentation.
    --   DebugWarmupMs: delay debug tracing after script init to avoid
    --                  world-load replication churn crashes in UE4SS.
    --   DebugVerbose: includes per-phase scheduling and retry details.
    --   DebugSlotDetails: includes per-slot move details during reward routing.
    --   DebugLoopHeartbeat: logs each polling loop, even without state changes.
    DebugEnabled = false,
    DebugWarmupMs = 30000,
    DebugVerbose = false,
    DebugSlotDetails = false,
    DebugLoopHeartbeat = false,
}

function Config.GetTargetExpeditionID()
    return Config.DungeonIDs[Config.SelectedDungeon] or Config.TargetExpeditionID
end

return Config
