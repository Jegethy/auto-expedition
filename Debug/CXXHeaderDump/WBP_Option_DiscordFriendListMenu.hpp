#ifndef UE4SS_SDK_WBP_Option_DiscordFriendListMenu_HPP
#define UE4SS_SDK_WBP_Option_DiscordFriendListMenu_HPP

class UWBP_Option_DiscordFriendListMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Base;                                                               // 0x0280 (size: 0x8)
    class UImage* Base_1;                                                             // 0x0288 (size: 0x8)
    class UImage* BaseShadow;                                                         // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_122;                                  // 0x0298 (size: 0x8)
    class UImage* Dot_0;                                                              // 0x02A0 (size: 0x8)
    class UImage* Dot_1;                                                              // 0x02A8 (size: 0x8)
    class UImage* Frame;                                                              // 0x02B0 (size: 0x8)
    class UImage* HeadBase;                                                           // 0x02B8 (size: 0x8)
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_Block;                  // 0x02C0 (size: 0x8)
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_Ignore;                 // 0x02C8 (size: 0x8)
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_Invite;                 // 0x02D0 (size: 0x8)
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_Mute;                   // 0x02D8 (size: 0x8)
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_SendMessage;            // 0x02E0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02E8 (size: 0x8)
    class UDiscordRelationshipHandle* Relationship;                                   // 0x02F0 (size: 0x8)
    FDataTableRowHandle DiscordSendMessageMsgId;                                      // 0x02F8 (size: 0x10)
    FDataTableRowHandle DiscordInviteMsgId;                                           // 0x0308 (size: 0x10)
    FDataTableRowHandle DiscordIgnoreMsgId;                                           // 0x0318 (size: 0x10)
    FDataTableRowHandle DiscordMuteMsgId;                                             // 0x0328 (size: 0x10)
    FDataTableRowHandle DiscordBlockMsgId;                                            // 0x0338 (size: 0x10)
    FDataTableRowHandle DiscordUnmuteMsgId;                                           // 0x0348 (size: 0x10)
    FDataTableRowHandle DiscordUnblockMsgId;                                          // 0x0358 (size: 0x10)
    FWBP_Option_DiscordFriendListMenu_COnClickedSendMessage OnClickedSendMessage;     // 0x0368 (size: 0x10)
    void OnClickedSendMessage(class UDiscordRelationshipHandle* Relationship);

    void UpdateUI(class UDiscordRelationshipHandle* Relationship);
    void ToggleUI();
    void DIscordSendMessage(class UWBP_GuildMemberMenuList_C* Button);
    void DiscordInvite(class UWBP_GuildMemberMenuList_C* Button);
    void DiscordIgnore(class UWBP_GuildMemberMenuList_C* Button);
    void DiscordMute(class UWBP_GuildMemberMenuList_C* Button);
    void DiscordBlock(class UWBP_GuildMemberMenuList_C* Button);
    void Construct();
    void ExecuteUbergraph_WBP_Option_DiscordFriendListMenu(int32 EntryPoint);
    void OnClickedSendMessage__DelegateSignature(class UDiscordRelationshipHandle* Relationship);
}; // Size: 0x378

#endif
