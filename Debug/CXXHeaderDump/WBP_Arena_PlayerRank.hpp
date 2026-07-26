#ifndef UE4SS_SDK_WBP_Arena_PlayerRank_HPP
#define UE4SS_SDK_WBP_Arena_PlayerRank_HPP

class UWBP_Arena_PlayerRank_C : public UUserWidget
{
    class UWidgetAnimation* Anm_In;                                                   // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Rank;                                   // 0x0280 (size: 0x8)
    class UImage* Image_RankIcon;                                                     // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RankPointNum;                                      // 0x0290 (size: 0x8)

    void OnUpdateRankPoint(class UPalIndividualCharacterParameter* individualParam, int32 Point);
    void Setup();
}; // Size: 0x298

#endif
