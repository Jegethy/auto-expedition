#ifndef UE4SS_SDK_WBP_Option_DiscordFriendList_HPP
#define UE4SS_SDK_WBP_Option_DiscordFriendList_HPP

class UWBP_Option_DiscordFriendList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Image_BG;                                                           // 0x0280 (size: 0x8)
    class UImage* TRASH_Image_Dot_12;                                                 // 0x0288 (size: 0x8)
    class UImage* TRASH_Image_Dot_13;                                                 // 0x0290 (size: 0x8)
    class UImage* TRASH_Image_Dot_14;                                                 // 0x0298 (size: 0x8)
    class UImage* TRASH_Image_Dot_15;                                                 // 0x02A0 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x02A8 (size: 0x8)
    class UWBP_Option_DiscordFriendListMenu_C* WBP_Option_DiscordFriendListMenu;      // 0x02B0 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList;                        // 0x02B8 (size: 0x8)

    void UpdateUI();
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_Option_DiscordFriendList(int32 EntryPoint);
}; // Size: 0x2C0

#endif
