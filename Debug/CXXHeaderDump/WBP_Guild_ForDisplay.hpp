#ifndef UE4SS_SDK_WBP_Guild_ForDisplay_HPP
#define UE4SS_SDK_WBP_Guild_ForDisplay_HPP

class UWBP_Guild_ForDisplay_C : public UPalUIGuildMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UCircularThrobber* CircularThrobber_11;                                     // 0x0480 (size: 0x8)
    class UImage* Image_20;                                                           // 0x0488 (size: 0x8)
    class UOverlay* Overlay_Waiting;                                                  // 0x0490 (size: 0x8)
    class UWBP_Guild_C* WBP_Guild;                                                    // 0x0498 (size: 0x8)
    class UWBP_GuildMemberMenu_C* WBP_GuildMemberMenu;                                // 0x04A0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_CancelMenu;               // 0x04A8 (size: 0x8)
    TMap<TEnumAsByte<E_PalUIGuildMenuLogCategory::Type>, FDataTableRowHandle> GuildLogCategoryTextMap; // 0x04B0 (size: 0x50)
    TMap<FString, TEnumAsByte<E_PalUIGuildMenuLogCategory::Type>> GuildLogStringCategoryMap; // 0x0500 (size: 0x50)
    FDataTableRowHandle GuildExitDialogMsgID_Admin;                                   // 0x0550 (size: 0x10)
    FDataTableRowHandle GuildExitDialogMsgID_Warning;                                 // 0x0560 (size: 0x10)
    FTimerHandle WaitingExitGuildTimeoutTimerHandle;                                  // 0x0570 (size: 0x8)
    FTimerHandle CheckNewGroupTimerHandle;                                            // 0x0578 (size: 0x8)
    bool IsSelectingMemberMenu;                                                       // 0x0580 (size: 0x1)
    FDataTableRowHandle BanPlayerDialogMsgID;                                         // 0x0588 (size: 0x10)
    FDataTableRowHandle ChangeRoleDialogMsgID;                                        // 0x0598 (size: 0x10)
    TSoftObjectPtr<UWBP_Guild_MemberList_C> SelectionPlayerWidget;                    // 0x05A8 (size: 0x30)
    FTimerHandle CheckBanPlayerTimerHandle;                                           // 0x05D8 (size: 0x8)
    FTimerHandle CheckbanPlayerTimeoutTimerHandle;                                    // 0x05E0 (size: 0x8)
    FGuid BanPlayerUId;                                                               // 0x05E8 (size: 0x10)
    FTimerHandle ChangeAdminTimeoutTimerHandle;                                       // 0x05F8 (size: 0x8)
    FTimerHandle CheckChangeAdminTimerHandle;                                         // 0x0600 (size: 0x8)
    EPalGuildRole ReservedChangePermissionTargetRole;                                 // 0x0608 (size: 0x1)
    FDataTableRowHandle ChangeAdminDialogMsgID;                                       // 0x0610 (size: 0x10)
    FGuid ReservedChangePermissionTargetPlayerUId;                                    // 0x0620 (size: 0x10)
    FGuid LastClickedPlayerUId;                                                       // 0x0630 (size: 0x10)

    void CanClose(bool& CanCloseFlag);
    void OnTimer_CheckChangeRole();
    void OnTimer_TimeoutChangeRole();
    void OnTimer_CheckBanPlayer();
    void OnTimer_TimeoutBanPlayer();
    void CloseWaitingWindow();
    void OpenWaitingWindow();
    void On Close Change Role Dialog(bool bResult);
    void Open Change Role Dialog(EPalGuildRole Role);
    void OnCloseBanPlayerDialog(bool bResult);
    void OpenBanPlayerDialog();
    void CloseMemberSettingList();
    void OnTimer_CheckNewGroup_WaitingExitGuild();
    void OnUpdateGroupId_WaitingExitGuild(const FGuid& NewGroupId);
    void OnTimer_TimeoutExitGuild();
    void OnClosed_GuildExitDialog(bool bResult);
    void OnClosed_GuildExitFailedDialog_Admin(bool bResult);
    void OpenExitGuildDialog();
    void OnUpdatedGuildName(FString NewGuildName);
    class UWidget* BP_GetDesiredFocusTarget();
    void SetupGuildLogCategoryButton();
    void Setup();
    void Construct();
    void BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_0_OnClickedEditGuildNameButton__DelegateSignature();
    void BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_3_OnClickedGuildMemberButton__DelegateSignature(class UWBP_Guild_MemberList_C* Widget);
    void BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_4_OnClickedLeaveButton__DelegateSignature();
    void BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_2_OnCommiedGuildName__DelegateSignature(FString NewName);
    void Destruct();
    void OnUpdatedMemberInfo(const FGuid& PlayerUId, const FPalUIGuildMemberDisplayInfo& PlayerInfo);
    void OnRemovedMemberInfo(const FGuid& PlayerUId);
    void BndEvt__WBP_Guild_ForDisplay_WBP_GuildMemberMenu_K2Node_ComponentBoundEvent_6_OnClickedChangeAdmin__DelegateSignature();
    void BndEvt__WBP_Guild_ForDisplay_WBP_GuildMemberMenu_K2Node_ComponentBoundEvent_7_OnClickedBanPlayer__DelegateSignature();
    void BndEvt__WBP_Guild_ForDisplay_WBP_GuildMemberMenu_K2Node_ComponentBoundEvent_1_OnClickedMenuCancel__DelegateSignature();
    void BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_5_OnClickedGuildSettingButton__DelegateSignature();
    void BndEvt__WBP_Guild_ForDisplay_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Guild_ForDisplay_WBP_GuildMemberMenu_K2Node_ComponentBoundEvent_9_OnClickedChangeSubMaster__DelegateSignature();
    void BndEvt__WBP_Guild_ForDisplay_WBP_GuildMemberMenu_K2Node_ComponentBoundEvent_10_OnClickedChangeMember__DelegateSignature();
    void BndEvt__WBP_Guild_ForDisplay_WBP_GuildMemberMenu_K2Node_ComponentBoundEvent_11_OnClickedChangeGuest__DelegateSignature();
    void ExecuteUbergraph_WBP_Guild_ForDisplay(int32 EntryPoint);
}; // Size: 0x640

#endif
