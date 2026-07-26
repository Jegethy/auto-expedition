#ifndef UE4SS_SDK_WBP_ColorEditor_HPP
#define UE4SS_SDK_WBP_ColorEditor_HPP

class UWBP_ColorEditor_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWBP_IngameConstruction_Paint_EditColor_C* WBP_IngameConstruction_Paint_EditColor; // 0x0480 (size: 0x8)
    class UPalHUDDispatchParameter_ColorEditor* DispatchParam;                        // 0x0488 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelActionHandle_GamepadOnly;                // 0x0490 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelActionHandle_Escape;                     // 0x0498 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelActionHandle_Tab;                        // 0x04A0 (size: 0x8)

    void ResetColor();
    void PasteClipboard();
    void OnClickCopyButton();
    class UWidget* BP_GetDesiredFocusTarget();
    void EmptyFunction();
    void OnCancelAction();
    void Setup();
    void OnSetup();
    void BndEvt__WBP_ColorEditor_WBP_IngameConstruction_Paint_EditColor_K2Node_ComponentBoundEvent_0_OnClickCloseButton__DelegateSignature();
    void BndEvt__WBP_ColorEditor_WBP_IngameConstruction_Paint_EditColor_K2Node_ComponentBoundEvent_1_OnClickSubmitButton__DelegateSignature(FLinearColor Color);
    void BndEvt__WBP_ColorEditor_WBP_IngameConstruction_Paint_EditColor_K2Node_ComponentBoundEvent_2_OnClickCopyButton__DelegateSignature();
    void BndEvt__WBP_ColorEditor_WBP_IngameConstruction_Paint_EditColor_K2Node_ComponentBoundEvent_3_OnClickPasteButton__DelegateSignature();
    void BndEvt__WBP_ColorEditor_WBP_IngameConstruction_Paint_EditColor_K2Node_ComponentBoundEvent_4_OnClickResetButton__DelegateSignature();
    void ExecuteUbergraph_WBP_ColorEditor(int32 EntryPoint);
}; // Size: 0x4A8

#endif
