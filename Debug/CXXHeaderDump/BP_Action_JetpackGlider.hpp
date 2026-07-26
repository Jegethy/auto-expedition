#ifndef UE4SS_SDK_BP_Action_JetpackGlider_HPP
#define UE4SS_SDK_BP_Action_JetpackGlider_HPP

class UBP_Action_JetpackGlider_C : public UPalActionMovementMode_JetpackGlider
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E0 (size: 0x8)

    FVector K2_Async_GetFinishVelocity(FVector BaseVelocity);
    void OnEndAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_Action_JetpackGlider(int32 EntryPoint);
}; // Size: 0x1E8

#endif
