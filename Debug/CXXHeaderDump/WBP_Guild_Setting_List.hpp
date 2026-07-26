#ifndef UE4SS_SDK_WBP_Guild_Setting_List_HPP
#define UE4SS_SDK_WBP_Guild_Setting_List_HPP

class UWBP_Guild_Setting_List_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UCanvasPanel* Canvas_ListContent;                                           // 0x0288 (size: 0x8)
    class UImage* Image_Caution;                                                      // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_OptionTitle;                                       // 0x0298 (size: 0x8)
    class UWBP_OptionSettings_ListContentSwitch_C* WBP_OptionSettings_ListContentSwitch; // 0x02A0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02A8 (size: 0x8)
    FWBP_Guild_Setting_List_COnChangedOnOff OnChangedOnOff;                           // 0x02B0 (size: 0x10)
    void OnChangedOnOff(bool bIsOn, EPalGuildPermission Permission);
    EPalGuildPermission BindedPermissionType;                                         // 0x02C0 (size: 0x1)
    bool bEnableButton;                                                               // 0x02C1 (size: 0x1)

    void SetEnableSetting(bool bEnable);
    void GetPermissionType(EPalGuildPermission& PermissionType);
    void SetPermissionType(EPalGuildPermission PermissionType);
    void SetupOnOff(bool bIsOn);
    void SetText(FText InText);
    void BndEvt__WBP_Guild_Setting_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Guild_Setting_List_WBP_OptionSettings_ListContentSwitch_K2Node_ComponentBoundEvent_1_OnSwitcherChanged__DelegateSignature(bool IsOn);
    void ExecuteUbergraph_WBP_Guild_Setting_List(int32 EntryPoint);
    void OnChangedOnOff__DelegateSignature(bool bIsOn, EPalGuildPermission Permission);
}; // Size: 0x2C2

#endif
