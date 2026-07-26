#ifndef UE4SS_SDK_WBP_Arena_RankingBoard_List_HPP
#define UE4SS_SDK_WBP_Arena_RankingBoard_List_HPP

class UWBP_Arena_RankingBoard_List_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Image_Base_Myself;                                                  // 0x0280 (size: 0x8)
    class UImage* Image_Icon_NPC;                                                     // 0x0288 (size: 0x8)
    class UImage* Image_RankIcon;                                                     // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_GuildName;                                         // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PlayerName;                                        // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RankNum;                                           // 0x02A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RankPointNum;                                      // 0x02B0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02B8 (size: 0x8)
    FWBP_Arena_RankingBoard_List_COnListHovered OnListHovered;                        // 0x02C0 (size: 0x10)
    void OnListHovered(class UWidget* Widget);

    void Setup(FPalArenaWorldRankingRecord RankingInfo);
    void BndEvt__WBP_Arena_RankingBoard_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Arena_RankingBoard_List(int32 EntryPoint);
    void OnListHovered__DelegateSignature(class UWidget* Widget);
}; // Size: 0x2D0

#endif
