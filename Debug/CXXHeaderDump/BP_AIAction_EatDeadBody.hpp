#ifndef UE4SS_SDK_BP_AIAction_EatDeadBody_HPP
#define UE4SS_SDK_BP_AIAction_EatDeadBody_HPP

class UBP_AIAction_EatDeadBody_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0178 (size: 0x8)
    class AActor* TargetDeadBody;                                                     // 0x0180 (size: 0x8)
    double tempDeltaTime;                                                             // 0x0188 (size: 0x8)
    double EatTimer;                                                                  // 0x0190 (size: 0x8)
    double RecoverTimer;                                                              // 0x0198 (size: 0x8)

    void RecoverHP();
    void SelfPawn(class AActor*& SelfPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_EatDeadBody(int32 EntryPoint);
}; // Size: 0x1A0

#endif
