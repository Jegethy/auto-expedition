#ifndef UE4SS_SDK_BP_Action_Eruption_HPP
#define UE4SS_SDK_BP_Action_Eruption_HPP

class UBP_Action_Eruption_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)

    void Adjust Effect Rot Pitch to Target(bool AttachOnly);
    void GetPredictedTargetLocation(FVector& Location);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_Eruption(int32 EntryPoint);
}; // Size: 0x2F0

#endif
