#ifndef UE4SS_SDK_WBP_GuildMemberMenu_HPP
#define UE4SS_SDK_WBP_GuildMemberMenu_HPP

class UWBP_GuildMemberMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Base;                                                               // 0x0280 (size: 0x8)
    class UImage* BaseShadow;                                                         // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_122;                                  // 0x0290 (size: 0x8)
    class UImage* HeadBase;                                                           // 0x0298 (size: 0x8)
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_Ban;                    // 0x02A0 (size: 0x8)
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_ChangeGuest;            // 0x02A8 (size: 0x8)
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_ChangeGuildMaster;      // 0x02B0 (size: 0x8)
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_ChangeMember;           // 0x02B8 (size: 0x8)
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_ChangeSubMaster;        // 0x02C0 (size: 0x8)
    FDataTableRowHandle ChangeMasterMsgID;                                            // 0x02C8 (size: 0x10)
    FDataTableRowHandle ChangeSubMasterMsgID;                                         // 0x02D8 (size: 0x10)
    FDataTableRowHandle ChangeMemberMsgID;                                            // 0x02E8 (size: 0x10)
    FDataTableRowHandle ChangeGuestMsgID;                                             // 0x02F8 (size: 0x10)
    FDataTableRowHandle BanPlayerMsgID;                                               // 0x0308 (size: 0x10)
    FWBP_GuildMemberMenu_COnClickedChangeAdmin OnClickedChangeAdmin;                  // 0x0318 (size: 0x10)
    void OnClickedChangeAdmin();
    FWBP_GuildMemberMenu_COnClickedBanPlayer OnClickedBanPlayer;                      // 0x0328 (size: 0x10)
    void OnClickedBanPlayer();
    FWBP_GuildMemberMenu_COnClickedMenuCancel OnClickedMenuCancel;                    // 0x0338 (size: 0x10)
    void OnClickedMenuCancel();
    FWBP_GuildMemberMenu_COnClickedChangeSubMaster OnClickedChangeSubMaster;          // 0x0348 (size: 0x10)
    void OnClickedChangeSubMaster();
    FWBP_GuildMemberMenu_COnClickedChangeMember OnClickedChangeMember;                // 0x0358 (size: 0x10)
    void OnClickedChangeMember();
    FWBP_GuildMemberMenu_COnClickedChangeGuest OnClickedChangeGuest;                  // 0x0368 (size: 0x10)
    void OnClickedChangeGuest();
    TMap<class UWBP_GuildMemberMenuList_C*, class bool> ValidPermissionMap;           // 0x0378 (size: 0x50)

    void CanBan(EPalGuildRole SelfRole, EPalGuildRole TargetRole, bool bHasPermission, bool& bCanChangeRole);
    void CanChangeRoleInternal(EPalGuildRole SelfRole, EPalGuildRole TargetRole, EPalGuildRole ChangeRole, bool bHasPermission, bool& bCanChangeRole);
    void isEnableButton(class UWBP_GuildMemberMenuList_C* Widget, bool& bIsEnable);
    void SetButtonEnableInternal(class UWBP_GuildMemberMenuList_C* ListWidget, bool bEnableButton);
    void SetGuildPermission(EPalGuildRole SelfRole, EPalGuildRole TargetRole, bool bCanBan, bool bCanRoleAssignment);
    void GetTopFocusTarget(class UWidget*& TargetWidget);
    void SetPlayerName(FString DisplayName);
    void OnInitialized();
    void BndEvt__WBP_GuildMemberMenu_WBP_GuildMemberMenuList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void BndEvt__WBP_GuildMemberMenu_WBP_GuildMemberMenuList_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void BndEvt__WBP_GuildMemberMenu_WBP_GuildMemberMenuList_ChangeSubMaster_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void BndEvt__WBP_GuildMemberMenu_WBP_GuildMemberMenuList_ChangeMember_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void BndEvt__WBP_GuildMemberMenu_WBP_GuildMemberMenuList_ChangeGuest_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void Destruct();
    void ExecuteUbergraph_WBP_GuildMemberMenu(int32 EntryPoint);
    void OnClickedChangeGuest__DelegateSignature();
    void OnClickedChangeMember__DelegateSignature();
    void OnClickedChangeSubMaster__DelegateSignature();
    void OnClickedMenuCancel__DelegateSignature();
    void OnClickedBanPlayer__DelegateSignature();
    void OnClickedChangeAdmin__DelegateSignature();
}; // Size: 0x3C8

#endif
