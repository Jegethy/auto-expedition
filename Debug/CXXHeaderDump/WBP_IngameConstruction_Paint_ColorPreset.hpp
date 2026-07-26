#ifndef UE4SS_SDK_WBP_IngameConstruction_Paint_ColorPreset_HPP
#define UE4SS_SDK_WBP_IngameConstruction_Paint_ColorPreset_HPP

class UWBP_IngameConstruction_Paint_ColorPreset_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UImage* ColorSelect_Square;                                                 // 0x0288 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0290 (size: 0x8)
    FWBP_IngameConstruction_Paint_ColorPreset_COnClickButton OnClickButton;           // 0x0298 (size: 0x10)
    void OnClickButton(FLinearColor Color);

    void SetColor(FLinearColor InColor);
    void BndEvt__WBP_IngameConstruction_Paint_ColorPreset_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_OnButtonReleased__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_IngameConstruction_Paint_ColorPreset(int32 EntryPoint);
    void OnClickButton__DelegateSignature(FLinearColor Color);
}; // Size: 0x2A8

#endif
