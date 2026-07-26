#ifndef UE4SS_SDK_WBP_BossBattle_BattleInfo_HPP
#define UE4SS_SDK_WBP_BossBattle_BattleInfo_HPP

class UWBP_BossBattle_BattleInfo_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWBP_BossBattle_BossEliminated_C* WBP_BossBattle_BossEliminated;            // 0x0458 (size: 0x8)
    class UWBP_BossBattle_ReturnTimer_C* WBP_BossBattle_ReturnTimer;                  // 0x0460 (size: 0x8)
    class UWBP_BossBattle_TimeOut_C* WBP_BossBattle_TimeOut;                          // 0x0468 (size: 0x8)
    class UWBP_BossBattle_Timer_C* WBP_BossBattle_Timer;                              // 0x0470 (size: 0x8)
    class APalBossTower* CurrentBossTower;                                            // 0x0478 (size: 0x8)
    FTimerHandle CurrentTimer;                                                        // 0x0480 (size: 0x8)
    class UBP_PalRaidBossComponent_C* CurrentRaid;                                    // 0x0488 (size: 0x8)
    TArray<class UBP_PalRaidBossComponent_C*> CachedRaids;                            // 0x0490 (size: 0x10)
    class UPalUIMapObjectRaidBossAreaStatusModel* RaidBossAreaUIModel;                // 0x04A0 (size: 0x8)
    FTimerHandle RaidBossAreaTimer;                                                   // 0x04A8 (size: 0x8)
    double RemainWaveTime;                                                            // 0x04B0 (size: 0x8)
    bool bEnableWaveTimer;                                                            // 0x04B8 (size: 0x1)

    void EndWaveTimer();
    void StartWaveTimer(double RemainWaveTime);
    void Set Wave Count(int32 CurrentWaveCount, int32 MaxWaveCount);
    void DeactivateRaidBossAreaUI();
    void ReflectRaidBossResultPhaseRemainingTime();
    void ReflectRaidBossReadyPhaseRemainingTime();
    void OnUpdateRaidBossAreaPhase(class UPalUIMapObjectRaidBossAreaStatusModel* UIModel);
    void ClearRaidBossAreaUIModel();
    void CreateRaidBossAreaUIModel(class UPalRaidBossAreaInstanceModel* InstanceModel);
    void OnNotifiedMovedOutOfRaidBossArea(class UPalRaidBossAreaInstanceModel* RaidBossAreaInstanceModel);
    void OnNotifiedReadyInstanceModelMovedInto(class UPalRaidBossAreaInstanceModel* RaidBossAreaInstanceModel);
    void SetupForRaidBossArea();
    void Finished_3EF5F8014E85067431DFCC89EED868D4();
    void Finished_8C451D0644B19738D91CB8BD4A008BD2();
    void Finished_C4E7DBA04E1A39E6670703A0D0184F95();
    void Finished_413432514DE4FC814BDA5192337698D2();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ActUICombatResult(EPalBossBattleCombatResult CombatResult, bool IsSkipUI);
    void StartCombatTimer();
    void GetBossTower(class APalBossTower* BossTower);
    void CountDown_TowerBoss();
    void CloseTimer();
    void OnRaidBossBattleStart(FGuid campID);
    void OnRaidBossBattleEnd(FGuid campID, EPalRaidBossBattleFinishType EndType);
    void CountDown_Raid();
    void StillInWorld();
    void ExecuteUbergraph_WBP_BossBattle_BattleInfo(int32 EntryPoint);
}; // Size: 0x4B9

#endif
