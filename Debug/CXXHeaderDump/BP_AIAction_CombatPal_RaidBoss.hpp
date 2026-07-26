#ifndef UE4SS_SDK_BP_AIAction_CombatPal_RaidBoss_HPP
#define UE4SS_SDK_BP_AIAction_CombatPal_RaidBoss_HPP

class UBP_AIAction_CombatPal_RaidBoss_C : public UBP_AIAction_CombatPal_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    bool IsPowerUpMode;                                                               // 0x0230 (size: 0x1)
    FGuid Camp ID;                                                                    // 0x0234 (size: 0x10)
    bool CanModeChange;                                                               // 0x0244 (size: 0x1)
    double HPOneTimer;                                                                // 0x0248 (size: 0x8)
    double Const_NotActionTime;                                                       // 0x0250 (size: 0x8)
    int32 PlayerNotTargetCounter;                                                     // 0x0258 (size: 0x4)
    bool CanSummon;                                                                   // 0x025C (size: 0x1)
    int32 NextSummonHPRateIndex;                                                      // 0x0260 (size: 0x4)

    void UpdateNoActionTimer();
    FPalRaidBossDataRow FindRaidBossData();
    void CanNextSummon(bool& CanSummon);
    void GetCombatModuleRaid(class UPalAICombatModule_RaidBoss*& ModuleRaidBoss);
    void OnDead(FPalDeadInfo Dead);
    void AddStatusOneCharacter(class AActor* Actor, EPalStatusID Status);
    void OnPlayAction(class UPalActionBase* action);
    void Add Status By Action End Timing();
    void ChangeNextAction_ConsiderBaseCamp();
    void ChangeCombatStartLocation(bool& Change);
    void FindNearestCampTarget(class AActor*& TargetActor);
    void Play Warp Action(TSubclassOf<class UPalActionBase> DirectActionClass, EPalWazaID DirectWaza);
    void IsFarFromBaseCamp(bool& IsFar);
    void GetSelfPalSpawnInfo(FPalRaidBossSpawnInfo& BossInfo);
    void AddStatusToAllTarget(EPalStatusID Status);
    void ChangeNextAction();
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_CombatPal_RaidBoss(int32 EntryPoint);
}; // Size: 0x264

#endif
