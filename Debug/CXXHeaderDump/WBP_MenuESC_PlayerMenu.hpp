#ifndef UE4SS_SDK_WBP_MenuESC_PlayerMenu_HPP
#define UE4SS_SDK_WBP_MenuESC_PlayerMenu_HPP

class UWBP_MenuESC_PlayerMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Base;                                                               // 0x0280 (size: 0x8)
    class UImage* BaseShadow;                                                         // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_122;                                  // 0x0290 (size: 0x8)
    class UImage* Dot_0;                                                              // 0x0298 (size: 0x8)
    class UImage* Dot_1;                                                              // 0x02A0 (size: 0x8)
    class UImage* Frame;                                                              // 0x02A8 (size: 0x8)
    class UImage* HeadBase;                                                           // 0x02B0 (size: 0x8)
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_Block;                  // 0x02B8 (size: 0x8)
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_CopyPlayerUId;          // 0x02C0 (size: 0x8)
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_CopyUserId;             // 0x02C8 (size: 0x8)
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_Mute;                   // 0x02D0 (size: 0x8)
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_UnBlock;                // 0x02D8 (size: 0x8)
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_UnMute;                 // 0x02E0 (size: 0x8)
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_UserReport;             // 0x02E8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02F0 (size: 0x8)
    FDataTableRowHandle UserIDCopyMsgID;                                              // 0x02F8 (size: 0x10)
    FDataTableRowHandle PlayerUIDCopyMsgID;                                           // 0x0308 (size: 0x10)
    FDataTableRowHandle PlayerMuteMsgID;                                              // 0x0318 (size: 0x10)
    FDataTableRowHandle PlayerBlockMsgID;                                             // 0x0328 (size: 0x10)
    FWBP_MenuESC_PlayerMenu_COnPlayerMenuCopyUserId OnPlayerMenuCopyUserId;           // 0x0338 (size: 0x10)
    void OnPlayerMenuCopyUserId(class UWBP_MenuESCPlayerListItem_C* inTargetWidget);
    FWBP_MenuESC_PlayerMenu_COnPlayerMenuCopyPlayerUId OnPlayerMenuCopyPlayerUId;     // 0x0348 (size: 0x10)
    void OnPlayerMenuCopyPlayerUId(class UWBP_MenuESCPlayerListItem_C* inTargetWidget);
    FWBP_MenuESC_PlayerMenu_COnPlayerMenuMute OnPlayerMenuMute;                       // 0x0358 (size: 0x10)
    void OnPlayerMenuMute();
    FWBP_MenuESC_PlayerMenu_COnPlayerMenuBlock OnPlayerMenuBlock;                     // 0x0368 (size: 0x10)
    void OnPlayerMenuBlock();
    class UWBP_MenuESCPlayerListItem_C* TargetWidget;                                 // 0x0378 (size: 0x8)
    FWBP_MenuESC_PlayerMenu_COnPlayerMenuUnMute OnPlayerMenuUnMute;                   // 0x0380 (size: 0x10)
    void OnPlayerMenuUnMute();
    FDataTableRowHandle PlayerUnMuteMsgID;                                            // 0x0390 (size: 0x10)
    FWBP_MenuESC_PlayerMenu_COnPlayerMenuUnBlock OnPlayerMenuUnBlock;                 // 0x03A0 (size: 0x10)
    void OnPlayerMenuUnBlock();
    FDataTableRowHandle PlayerUnBlockMsgID;                                           // 0x03B0 (size: 0x10)
    FWBP_MenuESC_PlayerMenu_COnPlayerMenuCancel OnPlayerMenuCancel;                   // 0x03C0 (size: 0x10)
    void OnPlayerMenuCancel();
    FWBP_MenuESC_PlayerMenu_COnPlayerMenuUserReport OnPlayerMenuUserReport;           // 0x03D0 (size: 0x10)
    void OnPlayerMenuUserReport();
    FDataTableRowHandle PlayerUserReportMsgID;                                        // 0x03E0 (size: 0x10)

    void GetTopFocusTarget(class UWidget*& TargetWidget);
    void SetPlayerName(FString DisplayName);
    void BndEvt__WBP_GuildMemberMenu_WBP_GuildMemberMenuList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void BndEvt__WBP_GuildMemberMenu_WBP_GuildMemberMenuList_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void BndEvt__WBP_MenuESC_PlayerMenu_WBP_GuildMemberMenuList_2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void BndEvt__WBP_MenuESC_PlayerMenu_WBP_GuildMemberMenuList_3_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void BndEvt__WBP_MenuESC_PlayerMenu_WBP_GuildMemberMenuList_UnMute_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void BndEvt__WBP_MenuESC_PlayerMenu_WBP_GuildMemberMenuList_UnBlock_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void BndEvt__WBP_MenuESC_PlayerMenu_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void BndEvt__WBP_MenuESC_PlayerMenu_WBP_GuildMemberMenuList_UserReport_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void ExecuteUbergraph_WBP_MenuESC_PlayerMenu(int32 EntryPoint);
    void OnPlayerMenuUserReport__DelegateSignature();
    void OnPlayerMenuCancel__DelegateSignature();
    void OnPlayerMenuUnBlock__DelegateSignature();
    void OnPlayerMenuUnMute__DelegateSignature();
    void OnPlayerMenuBlock__DelegateSignature();
    void OnPlayerMenuMute__DelegateSignature();
    void OnPlayerMenuCopyPlayerUId__DelegateSignature(class UWBP_MenuESCPlayerListItem_C* inTargetWidget);
    void OnPlayerMenuCopyUserId__DelegateSignature(class UWBP_MenuESCPlayerListItem_C* inTargetWidget);
}; // Size: 0x3F0

#endif
