#ifndef UE4SS_SDK_WBP_Arena_RuleListContent_0_HPP
#define UE4SS_SDK_WBP_Arena_RuleListContent_0_HPP

class UWBP_Arena_RuleListContent_0_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Name;                                   // 0x0288 (size: 0x8)
    class UImage* Image_ChangeMark;                                                   // 0x0290 (size: 0x8)
    class USizeBox* SizeBox_Button;                                                   // 0x0298 (size: 0x8)
    class USizeBox* SizeBox_Slider;                                                   // 0x02A0 (size: 0x8)
    class USizeBox* SizeBox_Switch;                                                   // 0x02A8 (size: 0x8)
    class UWBP_OptionSettings_ListContentSlider_C* WBP_OptionSettings_ListContentSlider; // 0x02B0 (size: 0x8)
    class UWBP_OptionSettings_ListContentSwitch_C* WBP_OptionSettings_ListContentSwitch; // 0x02B8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02C0 (size: 0x8)
    class UWBP_Title_WorldSettings_ListButton_C* WBP_Title_WorldSettings_ListButton;  // 0x02C8 (size: 0x8)
    FDataTableRowHandle SettingName;                                                  // 0x02D0 (size: 0x10)
    bool Is Changeable;                                                               // 0x02E0 (size: 0x1)
    FWBP_Arena_RuleListContent_0_COnContentHovered OnContentHovered;                  // 0x02E8 (size: 0x10)
    void OnContentHovered(class UWidget* Button);
    double Change Value;                                                              // 0x02F8 (size: 0x8)
    FWBP_Arena_RuleListContent_0_COnContentUnhovered OnContentUnhovered;              // 0x0300 (size: 0x10)
    void OnContentUnhovered();

    class UWidget* Custom Navigation ToRight(EUINavigation Navigation);
    class UWidget* Custom Navigation ToLeft(EUINavigation Navigation);
    void SetChangeable(bool IsChangeable);
    void SetChangedFlag();
    void SetupButton(const FSetupButtonOnClickEvent& OnClickEvent, FText ButtonText);
    void SetupSlider_Int(int32 Value, int32 Min, int32 Max, const FSetupSlider_IntEvent& Event, double ChangeValue);
    void SetupSlider(double Value, double Min, double Max, const FSetupSliderEvent& Event, double ChangeValue);
    void SetupSwitch(bool IsTure, const FSetupSwitchOnSwitchEvent& OnSwitchEvent);
    void AnmEvent_Focus();
    void AnmEvent_Normal();
    void Construct();
    void BndEvt__WBP_Arena_RuleListContent_0_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_RuleListContent_0_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_RuleListContent_0_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Arena_RuleListContent_0(int32 EntryPoint);
    void OnContentUnhovered__DelegateSignature();
    void OnContentHovered__DelegateSignature(class UWidget* Button);
}; // Size: 0x310

#endif
