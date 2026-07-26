#ifndef UE4SS_SDK_BP_AIAction_BossStandby_HPP
#define UE4SS_SDK_BP_AIAction_BossStandby_HPP

class UBP_AIAction_BossStandby_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0178 (size: 0x8)

    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_BossStandby(int32 EntryPoint);
}; // Size: 0x180

#endif
