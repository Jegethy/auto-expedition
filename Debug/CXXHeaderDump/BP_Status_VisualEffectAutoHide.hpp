#ifndef UE4SS_SDK_BP_Status_VisualEffectAutoHide_HPP
#define UE4SS_SDK_BP_Status_VisualEffectAutoHide_HPP

class UBP_Status_VisualEffectAutoHide_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    EPalVisualEffectID VisualEffectID;                                                // 0x00B8 (size: 0x1)
    bool IsHideEffect;                                                                // 0x00B9 (size: 0x1)

    void UpdateVisualEffectVisibility();
    void ShouldHideEffect(bool& IsHide);
    void OnBeginStatus();
    void OnEndStatus();
    void OnChangeActiveActor(bool bIsActive);
    void OnChangeCaptureProcess(bool bIsCapturedProcessing);
    void ExecuteUbergraph_BP_Status_VisualEffectAutoHide(int32 EntryPoint);
}; // Size: 0xBA

#endif
