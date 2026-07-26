#ifndef UE4SS_SDK_BP_BossBattleEvent_WorldTreeMiddleBoss1_Normal_HPP
#define UE4SS_SDK_BP_BossBattleEvent_WorldTreeMiddleBoss1_Normal_HPP

class ABP_BossBattleEvent_WorldTreeMiddleBoss1_Normal_C : public ABP_BossBattleEventBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D8 (size: 0x8)
    TArray<FVector> Offset List;                                                      // 0x02E0 (size: 0x10)
    TArray<FPalBossBattleEventBossRushWave> WaveList;                                 // 0x02F0 (size: 0x10)
    int32 WaveIndex;                                                                  // 0x0300 (size: 0x4)
    int32 CurrentWaveDeadBossCount;                                                   // 0x0304 (size: 0x4)
    bool IsCleared;                                                                   // 0x0308 (size: 0x1)
    double SpawnInterval;                                                             // 0x0310 (size: 0x8)

    void GetWaveList(TArray<FPalBossBattleEventBossRushWave>& WaveList);
    void SpawnWave(FPalBossBattleEventBossRushWave WaveInfo);
    bool IsBossCleared();
    void OnInitialize();
    void OnCombatStart();
    void OnSpawnCharacter(class UPalIndividualCharacterHandle* SpawnHandle);
    void OnDead(FPalDeadInfo DeadInfo);
    void ExecuteUbergraph_BP_BossBattleEvent_WorldTreeMiddleBoss1_Normal(int32 EntryPoint);
}; // Size: 0x318

#endif
