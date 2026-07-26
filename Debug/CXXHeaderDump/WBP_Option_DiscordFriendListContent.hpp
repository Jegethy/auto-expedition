#ifndef UE4SS_SDK_WBP_Option_DiscordFriendListContent_HPP
#define UE4SS_SDK_WBP_Option_DiscordFriendListContent_HPP

class UWBP_Option_DiscordFriendListContent_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UImage* Image_Base_Focus;                                                   // 0x0288 (size: 0x8)
    class UImage* Image_Frame_Focus;                                                  // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_DiscordName;                                       // 0x0298 (size: 0x8)
    class UImage* TRASH_Image_Base_16;                                                // 0x02A0 (size: 0x8)
    class UImage* TRASH_Image_DiscordStatusIcon_19;                                   // 0x02A8 (size: 0x8)
    class UImage* TRASH_Image_Frame_17;                                               // 0x02B0 (size: 0x8)
    class UImage* TRASH_Image_ProfileIcon_18;                                         // 0x02B8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02C0 (size: 0x8)
    class UDiscordRelationshipHandle* Relationship;                                   // 0x02C8 (size: 0x8)
    FWBP_Option_DiscordFriendListContent_COnClicked OnClicked;                        // 0x02D0 (size: 0x10)
    void OnClicked(class UDiscordRelationshipHandle* Relationship);
    FWBP_Option_DiscordFriendListContent_COnClickedSendMessage OnClickedSendMessage;  // 0x02E0 (size: 0x10)
    void OnClickedSendMessage();
    class UWBP_Option_DiscordFriendListMenu_C* WBP_Option_Discord_Friend_List_Menu;   // 0x02F0 (size: 0x8)

    void OnFail_26C481AD42BFA9C2F688768E030CB33E(class UTexture2DDynamic* Texture);
    void OnSuccess_26C481AD42BFA9C2F688768E030CB33E(class UTexture2DDynamic* Texture);
    void UpdateUI(class UDiscordRelationshipHandle* Relationship);
    void Construct();
    void CallOnClick(class UCommonButtonBase* Button);
    void UpdateUserUI(FDiscordUniqueID UserId);
    void ExecuteUbergraph_WBP_Option_DiscordFriendListContent(int32 EntryPoint);
    void OnClickedSendMessage__DelegateSignature();
    void OnClicked__DelegateSignature(class UDiscordRelationshipHandle* Relationship);
}; // Size: 0x2F8

#endif
