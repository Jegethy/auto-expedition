#ifndef UE4SS_SDK_BP_AIAction_CombatPal_RaidBoss_LegendDeer_HPP
#define UE4SS_SDK_BP_AIAction_CombatPal_RaidBoss_LegendDeer_HPP

class UBP_AIAction_CombatPal_RaidBoss_LegendDeer_C : public UBP_AIAction_CombatPal_RaidBoss_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UBP_Status_HPLock_C* HPLockStatus;                                          // 0x0270 (size: 0x8)
    TMap<TEnumAsByte<ENum_Raid_LegendDeer_CombatPhase::Type>, double> CombatPhaseMap; // 0x0278 (size: 0x50)
    TEnumAsByte<ENum_Raid_LegendDeer_CombatPhase::Type> CurrentPhase;                 // 0x02C8 (size: 0x1)
    bool ActPhaseChange;                                                              // 0x02C9 (size: 0x1)
    FTimerHandle PhaseCheckTimer;                                                     // 0x02D0 (size: 0x8)
    bool RandomBarrier_Grass;                                                         // 0x02D8 (size: 0x1)
    TArray<EPalWazaID> PhaseActWazaIds;                                               // 0x02E0 (size: 0x10)

    void GetPhaseChangeAction(TSubclassOf<class UPalActionBase>& ReturnAction, class AActor*& TargetActor);
    void Play Warp Action(TSubclassOf<class UPalActionBase> DirectActionClass, EPalWazaID DirectWaza);
    void OnModeChangeEnd();
    bool CheckWazaMinRange();
    void CheckWazaMaxRange(bool& InRange, bool& RayPassed);
    void OnWeary(bool IsEnd);
    void BarrierBreak(bool IsRelease);
    void On Waza Action End();
    void OnPlayAction(class UPalActionBase* action);
    void ChangeNextAction();
    void Phase Check();
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_CombatPal_RaidBoss_LegendDeer(int32 EntryPoint);
}; // Size: 0x2F0

#endif
