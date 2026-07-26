#ifndef UE4SS_SDK_WBP_GuildSetting_ForDisplay_HPP
#define UE4SS_SDK_WBP_GuildSetting_ForDisplay_HPP

class UWBP_GuildSetting_ForDisplay_C : public UPalUIGuildSetting
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWBP_Guild_Setting_C* WBP_Guild_Setting;                                    // 0x0480 (size: 0x8)
    FPalDataTableRowName_UIInputAction NextCategoryInputAction;                       // 0x0488 (size: 0x8)
    FPalDataTableRowName_UIInputAction PrevCategoryInputAction;                       // 0x0490 (size: 0x8)

    void OnInputAction_PrevTab();
    void OnInputAction_NextTab();
    void SetupNoticeSetting();
    void OverrideCancelAction_Common();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnSetup();
    void BndEvt__WBP_GuildSetting_ForDisplay_WBP_Guild_Setting_K2Node_ComponentBoundEvent_0_OnChangeRoleSetting__DelegateSignature(EPalGuildRole Role, EPalGuildPermission RolePermission, bool bEnable);
    void BndEvt__WBP_GuildSetting_ForDisplay_WBP_Guild_Setting_K2Node_ComponentBoundEvent_1_OnChangedNoticeSetting__DelegateSignature(EPalGuildNotificationType NotificationType, bool bEnableNotice);
    void ExecuteUbergraph_WBP_GuildSetting_ForDisplay(int32 EntryPoint);
}; // Size: 0x498

#endif
