#ifndef UE4SS_SDK_WBP_ModDisclaimerDialog_HPP
#define UE4SS_SDK_WBP_ModDisclaimerDialog_HPP

class UWBP_ModDisclaimerDialog_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_47;                                   // 0x0480 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton;                                      // 0x0488 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_Guideline;                          // 0x0490 (size: 0x8)
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;                                // 0x0498 (size: 0x8)

    class UWidget* BP_GetDesiredFocusTarget();
    void BndEvt__WBP_ModDisclaimerDialog_WBP_CommonButton_Terms_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_ModDisclaimerDialog_WBP_CommonButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void OnSetup();
    void ExecuteUbergraph_WBP_ModDisclaimerDialog(int32 EntryPoint);
}; // Size: 0x4A0

#endif
