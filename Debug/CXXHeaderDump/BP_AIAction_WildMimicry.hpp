#ifndef UE4SS_SDK_BP_AIAction_WildMimicry_HPP
#define UE4SS_SDK_BP_AIAction_WildMimicry_HPP

class UBP_AIAction_WildMimicry_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0178 (size: 0x8)
    class UPalActionBase* MimicAction;                                                // 0x0180 (size: 0x8)

    void Fun_Damage_AIResponse(FPalDamageResult DamageResult);
    void ActionStart(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void DelaySetAction(FPalAIActionDynamicParameter Parameter);
    void ExecuteUbergraph_BP_AIAction_WildMimicry(int32 EntryPoint);
}; // Size: 0x188

#endif
