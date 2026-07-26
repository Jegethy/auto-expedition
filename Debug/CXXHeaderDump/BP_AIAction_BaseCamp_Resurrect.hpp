#ifndef UE4SS_SDK_BP_AIAction_BaseCamp_Resurrect_HPP
#define UE4SS_SDK_BP_AIAction_BaseCamp_Resurrect_HPP

class UBP_AIAction_BaseCamp_Resurrect_C : public UPalAIActionBaseCampResurrect
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01C0 (size: 0x8)

    void StartSleepAction(class AActor* ControlledPawn);
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ExecuteUbergraph_BP_AIAction_BaseCamp_Resurrect(int32 EntryPoint);
}; // Size: 0x1C8

#endif
