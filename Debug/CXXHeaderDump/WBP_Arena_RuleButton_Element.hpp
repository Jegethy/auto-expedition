#ifndef UE4SS_SDK_WBP_Arena_RuleButton_Element_HPP
#define UE4SS_SDK_WBP_Arena_RuleButton_Element_HPP

class UWBP_Arena_RuleButton_Element_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_OnToOff;                                              // 0x0280 (size: 0x8)
    class UWBP_PalElementIcon_C* WBP_PalElementIcon;                                  // 0x0288 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0290 (size: 0x8)
    FWBP_Arena_RuleButton_Element_COnElementButtonClicked OnElementButtonClicked;     // 0x0298 (size: 0x10)
    void OnElementButtonClicked(EPalElementType ElementType);
    EPalElementType Element Type;                                                     // 0x02A8 (size: 0x1)

    void AnmEvent_Enable();
    void AnmEvent_Restrict();
    void SetupElement(EPalElementType ElementType);
    void SetRestrict(bool IsRestrict);
    void BndEvt__WBP_Arena_RuleButton_Element_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Arena_RuleButton_Element(int32 EntryPoint);
    void OnElementButtonClicked__DelegateSignature(EPalElementType ElementType);
}; // Size: 0x2A9

#endif
