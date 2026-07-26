#ifndef UE4SS_SDK_WBP_Guild_Setting_HPP
#define UE4SS_SDK_WBP_Guild_Setting_HPP

class UWBP_Guild_Setting_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UOverlay* Overlay_NoticeSettings;                                           // 0x0458 (size: 0x8)
    class UOverlay* Overlay_RoleSettings;                                             // 0x0460 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Info;                                              // 0x0468 (size: 0x8)
    class UWBP_Title_WorldSelectButton_C* WBP_GuestRoleButton;                        // 0x0470 (size: 0x8)
    class UWBP_Guild_Setting_List_C* WBP_Guild_Setting_List_JoinMemberNotice;         // 0x0478 (size: 0x8)
    class UWBP_Guild_Setting_List_C* WBP_Guild_Setting_List_LeaveMemberNotice;        // 0x0480 (size: 0x8)
    class UWBP_Guild_Setting_List_C* WBP_Guild_Setting_List_LoginMemberNotice;        // 0x0488 (size: 0x8)
    class UWBP_Guild_Setting_List_C* WBP_Guild_Setting_List_LogoutMemberNotice;       // 0x0490 (size: 0x8)
    class UWBP_Guild_Setting_TabSet_C* WBP_Guild_Setting_TabSet;                      // 0x0498 (size: 0x8)
    class UWBP_Title_WorldSelectButton_C* WBP_MasterRoleButton;                       // 0x04A0 (size: 0x8)
    class UWBP_Title_WorldSelectButton_C* WBP_MemberButton;                           // 0x04A8 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList_RoleSetting;            // 0x04B0 (size: 0x8)
    class UWBP_Title_WorldSelectButton_C* WBP_SubMasterRoleButton;                    // 0x04B8 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x04C0 (size: 0x8)
    TEnumAsByte<E_PalUIGuildSettingCategory::Type> CurrentCategory;                   // 0x04C8 (size: 0x1)
    FDataTableRowHandle RoleSettingInfoMsgID;                                         // 0x04D0 (size: 0x10)
    FDataTableRowHandle NoticeSettingInfoMsgID;                                       // 0x04E0 (size: 0x10)
    FDataTableRowHandle JoinMemberNoticeSettingMsgID;                                 // 0x04F0 (size: 0x10)
    FDataTableRowHandle LeaveMemberNoticeSettingMsgID;                                // 0x0500 (size: 0x10)
    FDataTableRowHandle LoginMemberNoticeSettingMsgID;                                // 0x0510 (size: 0x10)
    FDataTableRowHandle LogoutMemberNoticeSettingMsgID;                               // 0x0520 (size: 0x10)
    EPalGuildRole LastSelectedRole;                                                   // 0x0530 (size: 0x1)
    FWBP_Guild_Setting_COnChangeRoleSetting OnChangeRoleSetting;                      // 0x0538 (size: 0x10)
    void OnChangeRoleSetting(EPalGuildRole Role, EPalGuildPermission RolePermission, bool bEnable);
    bool bRoleSettingMode;                                                            // 0x0548 (size: 0x1)
    TMap<class EPalGuildPermission, class FDataTableRowHandle> PermissionSettingMsgIDMap; // 0x0550 (size: 0x50)
    TMap<class EPalGuildRole, class UWBP_Title_WorldSelectButton_C*> RoleButtonMap;   // 0x05A0 (size: 0x50)
    FWBP_Guild_Setting_COnChangedNoticeSetting OnChangedNoticeSetting;                // 0x05F0 (size: 0x10)
    void OnChangedNoticeSetting(EPalGuildNotificationType NotificationType, bool bEnableNotice);
    TMap<class EPalGuildNotificationType, class UWBP_Guild_Setting_List_C*> NoticeSettingButtonMap; // 0x0600 (size: 0x50)

    void ToPrevTab();
    void ToNextTab();
    void GetRoleSettingTopFocusTarget(class UWidget*& Widget);
    void SetGuildNoticeSettings(TMap<class EPalGuildNotificationType, class bool> SettingMap);
    void UpdateGuildNoticeSetting();
    void IsEditableRoleSettingForLocalPlayer(EPalGuildRole TargetRole, bool& bEditable);
    void OnChangedPermissionInternal(bool bIsOn, EPalGuildPermission Permission);
    void IsRoleSettingMode(bool& bInMode);
    void EndRoleSetting();
    void OnSelectedRoleInternal(EPalGuildRole Role);
    void SelectByCategory(TEnumAsByte<E_PalUIGuildSettingCategory::Type> InCategory);
    void GetCurrentCategoryFocusTarget(class UWidget*& Widget);
    void OnChangedTabIndex(int32 NewTabIndex);
    void BndEvt__WBP_Guild_Setting_WBP_Guild_Setting_TabSet_K2Node_ComponentBoundEvent_0_OnChangedFocusIndex__DelegateSignature(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
    void OnInitialized();
    void Destruct();
    void BndEvt__WBP_Guild_Setting_WBP_MasterRoleButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__WBP_Guild_Setting_WBP_SubMasterRoleButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__WBP_Guild_Setting_WBP_MemberButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__WBP_Guild_Setting_WBP_GuestRoleButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void Construct();
    void BndEvt__WBP_Guild_Setting_WBP_Guild_Setting_List_JoinMemberNotice_K2Node_ComponentBoundEvent_5_OnChangedOnOff__DelegateSignature(bool bIsOn, EPalGuildPermission Permission);
    void BndEvt__WBP_Guild_Setting_WBP_Guild_Setting_List_LeaveMemberNotice_K2Node_ComponentBoundEvent_6_OnChangedOnOff__DelegateSignature(bool bIsOn, EPalGuildPermission Permission);
    void BndEvt__WBP_Guild_Setting_WBP_Guild_Setting_List_LoginMemberNotice_K2Node_ComponentBoundEvent_7_OnChangedOnOff__DelegateSignature(bool bIsOn, EPalGuildPermission Permission);
    void BndEvt__WBP_Guild_Setting_WBP_Guild_Setting_List_LogoutMemberNotice_K2Node_ComponentBoundEvent_8_OnChangedOnOff__DelegateSignature(bool bIsOn, EPalGuildPermission Permission);
    void ExecuteUbergraph_WBP_Guild_Setting(int32 EntryPoint);
    void OnChangedNoticeSetting__DelegateSignature(EPalGuildNotificationType NotificationType, bool bEnableNotice);
    void OnChangeRoleSetting__DelegateSignature(EPalGuildRole Role, EPalGuildPermission RolePermission, bool bEnable);
}; // Size: 0x650

#endif
