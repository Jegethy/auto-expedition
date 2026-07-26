#ifndef UE4SS_SDK_WBP_Arena_RuleListContent_1_HPP
#define UE4SS_SDK_WBP_Arena_RuleListContent_1_HPP

class UWBP_Arena_RuleListContent_1_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UImage* Image_ChangeMark;                                                   // 0x0288 (size: 0x8)
    class UWBP_Arena_RuleButton_Element_C* WBP_Arena_RuleButton_Element;              // 0x0290 (size: 0x8)
    class UWBP_Arena_RuleButton_Element_C* WBP_Arena_RuleButton_Element_1;            // 0x0298 (size: 0x8)
    class UWBP_Arena_RuleButton_Element_C* WBP_Arena_RuleButton_Element_2;            // 0x02A0 (size: 0x8)
    class UWBP_Arena_RuleButton_Element_C* WBP_Arena_RuleButton_Element_3;            // 0x02A8 (size: 0x8)
    class UWBP_Arena_RuleButton_Element_C* WBP_Arena_RuleButton_Element_4;            // 0x02B0 (size: 0x8)
    class UWBP_Arena_RuleButton_Element_C* WBP_Arena_RuleButton_Element_5;            // 0x02B8 (size: 0x8)
    class UWBP_Arena_RuleButton_Element_C* WBP_Arena_RuleButton_Element_6;            // 0x02C0 (size: 0x8)
    class UWBP_Arena_RuleButton_Element_C* WBP_Arena_RuleButton_Element_7;            // 0x02C8 (size: 0x8)
    class UWBP_Arena_RuleButton_Element_C* WBP_Arena_RuleButton_Element_8;            // 0x02D0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02D8 (size: 0x8)
    TArray<class UWBP_Arena_RuleButton_Element_C*> ElementButtons;                    // 0x02E0 (size: 0x10)
    TArray<EPalElementType> CurrentRestriction;                                       // 0x02F0 (size: 0x10)
    FWBP_Arena_RuleListContent_1_COnElementRestrictionUpdate OnElementRestrictionUpdate; // 0x0300 (size: 0x10)
    void OnElementRestrictionUpdate(TArray<EPalElementType>& RestrictElements);
    bool Is Changeable;                                                               // 0x0310 (size: 0x1)
    FWBP_Arena_RuleListContent_1_COnContentHovered OnContentHovered;                  // 0x0318 (size: 0x10)
    void OnContentHovered(class UWidget* Button);
    FWBP_Arena_RuleListContent_1_COnContentUnhovered OnContentUnhovered;              // 0x0328 (size: 0x10)
    void OnContentUnhovered();

    class UWidget* CustomNavigation_ToContent(EUINavigation Navigation);
    class UWidget* CustomNavigation_ToElementButton(EUINavigation Navigation);
    void SetChangeable(bool IsChangeable);
    void SetChangedFlag();
    void Toggle Element Restrict(EPalElementType ElementType);
    void Setup(TArray<EPalElementType>& ElementRestrict, const FSetupRestrictChangedEvent& RestrictChangedEvent);
    void AnmEvent_Focus();
    void AnmEvent_Normal();
    void BndEvt__WBP_Arena_RuleListContent_1_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_RuleListContent_1_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void Construct();
    void ExecuteUbergraph_WBP_Arena_RuleListContent_1(int32 EntryPoint);
    void OnContentUnhovered__DelegateSignature();
    void OnContentHovered__DelegateSignature(class UWidget* Button);
    void OnElementRestrictionUpdate__DelegateSignature(TArray<EPalElementType>& RestrictElements);
}; // Size: 0x338

#endif
