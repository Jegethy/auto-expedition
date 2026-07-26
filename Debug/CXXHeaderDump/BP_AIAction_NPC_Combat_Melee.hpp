#ifndef UE4SS_SDK_BP_AIAction_NPC_Combat_Melee_HPP
#define UE4SS_SDK_BP_AIAction_NPC_Combat_Melee_HPP

class UBP_AIAction_NPC_Combat_Melee_C : public UBP_AIAction_NPC_CombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01C8 (size: 0x8)
    TEnumAsByte<EPal_NPC_CombatMeleeState::Type> CurrentState;                        // 0x01D0 (size: 0x1)
    double ConstAttackStartRange;                                                     // 0x01D8 (size: 0x8)
    bool IsStopTick;                                                                  // 0x01E0 (size: 0x1)
    double ConstNearAttackRange;                                                      // 0x01E8 (size: 0x8)
    double Timer;                                                                     // 0x01F0 (size: 0x8)
    TMap<TEnumAsByte<EPal_NPC_CombatMeleeState::Type>, TSubclassOf<UBP_AINPC_CombatState_Base_C>> StateMap; // 0x01F8 (size: 0x50)
    double BackwardMiniTime;                                                          // 0x0248 (size: 0x8)

    void AddTimer(double& CurrentTime);
    void AddMeleeCombatState(TEnumAsByte<EPal_NPC_CombatMeleeState::Type> MeleeState);
    void Change_NextState(TEnumAsByte<EPal_NPC_CombatMeleeState::Type> Next);
    void ActionResume(class APawn* ControlledPawn);
    void ActionPause(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_NPC_Combat_Melee(int32 EntryPoint);
}; // Size: 0x250

#endif
