#ifndef UE4SS_SDK_WBP_IngameConstruction_Paint_EditColor_HPP
#define UE4SS_SDK_WBP_IngameConstruction_Paint_EditColor_HPP

class UWBP_IngameConstruction_Paint_EditColor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_77;                                   // 0x0280 (size: 0x8)
    class UCanvasPanel* Canvas_ColorCode;                                             // 0x0288 (size: 0x8)
    class UImage* Image_Color_After;                                                  // 0x0290 (size: 0x8)
    class UImage* Image_Color_Before;                                                 // 0x0298 (size: 0x8)
    class UImage* Image_Frame;                                                        // 0x02A0 (size: 0x8)
    class UImage* Image_GuideBase;                                                    // 0x02A8 (size: 0x8)
    class UImage* Image_GuideFrame;                                                   // 0x02B0 (size: 0x8)
    class UOverlay* Overlay_ColorCode_CopyButton;                                     // 0x02B8 (size: 0x8)
    class UOverlay* Overlay_ColorCode_PasteButton;                                    // 0x02C0 (size: 0x8)
    class UPalEditableTextBox* PalEditableTextBox_ColorCode;                          // 0x02C8 (size: 0x8)
    class USizeBox* SizeBox_Reset;                                                    // 0x02D0 (size: 0x8)
    class UWBP_ColorSlider_C* WBP_ColorSlider;                                        // 0x02D8 (size: 0x8)
    class UWBP_Common_Menu_Msg_Small_C* WBP_Common_Menu_Msg_Small;                    // 0x02E0 (size: 0x8)
    class UWBP_CommonButton_2_C* WBP_CommonButton_OK;                                 // 0x02E8 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_Reset;                              // 0x02F0 (size: 0x8)
    class UWBP_IngameConstruction_Paint_ColorPreset_C* WBP_IngameConstruction_Paint_ColorPreset; // 0x02F8 (size: 0x8)
    class UWBP_IngameConstruction_Paint_ColorPreset_C* WBP_IngameConstruction_Paint_ColorPreset_1; // 0x0300 (size: 0x8)
    class UWBP_IngameConstruction_Paint_ColorPreset_C* WBP_IngameConstruction_Paint_ColorPreset_2; // 0x0308 (size: 0x8)
    class UWBP_IngameConstruction_Paint_ColorPreset_C* WBP_IngameConstruction_Paint_ColorPreset_3; // 0x0310 (size: 0x8)
    class UWBP_IngameConstruction_Paint_ColorPreset_C* WBP_IngameConstruction_Paint_ColorPreset_4; // 0x0318 (size: 0x8)
    class UWBP_IngameConstruction_Paint_ColorPreset_C* WBP_IngameConstruction_Paint_ColorPreset_5; // 0x0320 (size: 0x8)
    class UWBP_IngameConstruction_Paint_ColorPreset_C* WBP_IngameConstruction_Paint_ColorPreset_6; // 0x0328 (size: 0x8)
    class UWBP_IngameConstruction_Paint_ColorPreset_C* WBP_IngameConstruction_Paint_ColorPreset_7; // 0x0330 (size: 0x8)
    class UWBP_IngameConstruction_Paint_ColorPreset_C* WBP_IngameConstruction_Paint_ColorPreset_8; // 0x0338 (size: 0x8)
    class UWBP_IngameConstruction_Paint_ColorPreset_C* WBP_IngameConstruction_Paint_ColorPreset_9; // 0x0340 (size: 0x8)
    class UWBP_IngameConstruction_Paint_ColorPreset_C* WBP_IngameConstruction_Paint_ColorPreset_10; // 0x0348 (size: 0x8)
    class UWBP_IngameConstruction_Paint_ColorPreset_C* WBP_IngameConstruction_Paint_ColorPreset_11; // 0x0350 (size: 0x8)
    class UWBP_IngameConstruction_Paint_ColorPreset_C* WBP_IngameConstruction_Paint_ColorPreset_12; // 0x0358 (size: 0x8)
    class UWBP_IngameConstruction_Paint_ColorPreset_C* WBP_IngameConstruction_Paint_ColorPreset_13; // 0x0360 (size: 0x8)
    class UWBP_IngameConstruction_Paint_ColorPreset_C* WBP_IngameConstruction_Paint_ColorPreset_14; // 0x0368 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0370 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_CopyCode;                 // 0x0378 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_PasteCode;                // 0x0380 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_Paste;                          // 0x0388 (size: 0x8)
    FWBP_IngameConstruction_Paint_EditColor_COnClickCloseButton OnClickCloseButton;   // 0x0390 (size: 0x10)
    void OnClickCloseButton();
    FWBP_IngameConstruction_Paint_EditColor_COnClickSubmitButton OnClickSubmitButton; // 0x03A0 (size: 0x10)
    void OnClickSubmitButton(FLinearColor Color);
    FLinearColor SubmitColor;                                                         // 0x03B0 (size: 0x10)
    FWBP_IngameConstruction_Paint_EditColor_COnClickCopyButton OnClickCopyButton;     // 0x03C0 (size: 0x10)
    void OnClickCopyButton();
    FWBP_IngameConstruction_Paint_EditColor_COnClickPasteButton OnClickPasteButton;   // 0x03D0 (size: 0x10)
    void OnClickPasteButton();
    FWBP_IngameConstruction_Paint_EditColor_COnClickResetButton OnClickResetButton;   // 0x03E0 (size: 0x10)
    void OnClickResetButton();

    void ActivateResetButton();
    class UWidget* DoCustomNavigation_ToCopyButton(EUINavigation Navigation);
    class UWidget* DoCustomNavigation_CloseButton(EUINavigation Navigation);
    class UWidget* DoCustomNavigation_To_SubmitButton(EUINavigation Navigation);
    class UWidget* DoCustomNavigation_To_SliderV(EUINavigation Navigation);
    void OnClickPresetColorButton(FLinearColor Color);
    TArray<class UWBP_IngameConstruction_Paint_ColorPreset_C*> GetColorPresetWidgets();
    void ReflectColorFromString(FString HexString);
    void ReflectEditColor(FLinearColor EditColor, bool bShouldApplySider);
    void Setup(FLinearColor CurrentColor, TArray<FLinearColor>& InPresetColors, bool bShowResetButton);
    void BndEvt__WBP_IngameConstruction_Paint_EditColor_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_IngameConstruction_Paint_EditColor_WBP_CommonButton_OK_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameConstruction_Paint_EditColor_PalEditableTextBox_ColorCode_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_IngameConstruction_Paint_EditColor_WBP_ColorSlider_K2Node_ComponentBoundEvent_3_OnColorChanged__DelegateSignature(FLinearColor HSV);
    void BndEvt__WBP_IngameConstruction_Paint_EditColor_WBP_PalInvisibleButton_CopyCode_K2Node_ComponentBoundEvent_4_OnButtonReleased__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameConstruction_Paint_EditColor_WBP_PalInvisibleButton_PasteCode_K2Node_ComponentBoundEvent_5_OnButtonReleased__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameConstruction_Paint_EditColor_WBP_CommonButton_Reset_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_IngameConstruction_Paint_EditColor(int32 EntryPoint);
    void OnClickResetButton__DelegateSignature();
    void OnClickPasteButton__DelegateSignature();
    void OnClickCopyButton__DelegateSignature();
    void OnClickSubmitButton__DelegateSignature(FLinearColor Color);
    void OnClickCloseButton__DelegateSignature();
}; // Size: 0x3F0

#endif
