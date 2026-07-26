#ifndef UE4SS_SDK_WBP_DungeonInfo_FixedDungeon_HPP
#define UE4SS_SDK_WBP_DungeonInfo_FixedDungeon_HPP

class UWBP_DungeonInfo_FixedDungeon_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UImage* BossExistsImage;                                                    // 0x0458 (size: 0x8)
    class UCanvasPanel* Dungeon_Info;                                                 // 0x0460 (size: 0x8)
    class UCanvasPanel* DungeonInfo;                                                  // 0x0468 (size: 0x8)
    class UBP_PalTextBlock_C* Text_DungeonName;                                       // 0x0470 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LevelValue;                                        // 0x0478 (size: 0x8)
    class UWBP_BossBattle_Timer_C* WBP_BossBattle_Timer;                              // 0x0480 (size: 0x8)
    FPalDungeonInfoParameter DungeonInfoParameter;                                    // 0x0488 (size: 0x28)
    FText DefaultDisappearText;                                                       // 0x04B0 (size: 0x18)
    FGameDateTime BossRespawnTimeAt;                                                  // 0x04C8 (size: 0x8)

    void SetDungeonBossSpawned(class UPalDungeonInstanceModel* DungeonInstanceModel);
    void UpdateBossRespawnRemainTime();
    void SetBossRespawnTimeAt(class UPalDungeonInstanceModel* DungeonInstanceModel);
    void Set Dungeon Level(class UPalDungeonInstanceModel* DungeonInstanceModel);
    void SetDungeonName(class UPalDungeonInstanceModel* DungeonInstanceModel);
    void Update Display Info(class UPalDungeonInstanceModel* DungeonInstanceModel);
    void SetupEvents(class UPalStageModelDungeon* StageModel);
    void UpdateDungeonInfoByTick();
    void Setup by Stage Model(class UPalStageModelDungeon* InStageModel);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_DungeonInfo_FixedDungeon(int32 EntryPoint);
}; // Size: 0x4D0

#endif
