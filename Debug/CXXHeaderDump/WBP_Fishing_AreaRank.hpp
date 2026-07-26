#ifndef UE4SS_SDK_WBP_Fishing_AreaRank_HPP
#define UE4SS_SDK_WBP_Fishing_AreaRank_HPP

class UWBP_Fishing_AreaRank_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Out;                                                  // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Rank_1to4;                                            // 0x0290 (size: 0x8)
    class UImage* BaseLineC;                                                          // 0x0298 (size: 0x8)
    class UImage* BaseLineC_Bloom;                                                    // 0x02A0 (size: 0x8)
    class UImage* BaseLineL;                                                          // 0x02A8 (size: 0x8)
    class UImage* BaseLineL_Bloom;                                                    // 0x02B0 (size: 0x8)
    class UImage* BaseLineR;                                                          // 0x02B8 (size: 0x8)
    class UImage* BaseLineR_Bloom;                                                    // 0x02C0 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x02C8 (size: 0x8)
    class UImage* Image_Base_Add;                                                     // 0x02D0 (size: 0x8)
    class UImage* Image_Base_Aura;                                                    // 0x02D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Rank;                                              // 0x02E0 (size: 0x8)
    bool IsShow;                                                                      // 0x02E8 (size: 0x1)

    void SetDifficulty(EPalFishingSpotDifficultyType DifficultyType);
    void AnmEvent_In();
    void AnmEvent_Out();
    void AnmEvent_Rank(EPalFishingSpotDifficultyType Difficulty);
    void ExecuteUbergraph_WBP_Fishing_AreaRank(int32 EntryPoint);
}; // Size: 0x2E9

#endif
