#ifndef UE4SS_SDK_WBP_InGame_Match_ArenaResult_HPP
#define UE4SS_SDK_WBP_InGame_Match_ArenaResult_HPP

class UWBP_InGame_Match_ArenaResult_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_RankDown;                                             // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_RankUp_1;                                             // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_RankUp_0;                                             // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_PointCount;                                           // 0x0298 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x02A0 (size: 0x8)
    class UImage* Image_RankIcon;                                                     // 0x02A8 (size: 0x8)
    class UImage* Image_RankIcon_Flash;                                               // 0x02B0 (size: 0x8)
    class UImage* Image_RankIcon_Next;                                                // 0x02B8 (size: 0x8)
    class UImage* Image_RankIcon_Now;                                                 // 0x02C0 (size: 0x8)
    class UPalProgressBar* PalProgressBar_Now;                                        // 0x02C8 (size: 0x8)
    class UProgressBar* ProgressBar_Add;                                              // 0x02D0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Rank;                                              // 0x02D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RankChange;                                        // 0x02E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RankPoint_Change;                                  // 0x02E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RankPoint_Now;                                     // 0x02F0 (size: 0x8)
    FPalArenaRankPointChangeResult Result Info;                                       // 0x02F8 (size: 0x1C)
    bool EnableGaugeUpdate;                                                           // 0x0314 (size: 0x1)
    double targetPercent;                                                             // 0x0318 (size: 0x8)
    double PrePercent;                                                                // 0x0320 (size: 0x8)
    double CurrentProgressUpdateRate;                                                 // 0x0328 (size: 0x8)
    FTimerHandle AKEStopTimer;                                                        // 0x0330 (size: 0x8)

    void GetRankPointRange(int32& Min, int32& Max);
    void SetEndRank();
    void SetPreRank();
    void SetResult(FPalArenaRankPointChangeResult ResultInfo);
    void Finished_983374E3449FA69C8A2C95B3E3F95F17();
    void Finished_09AA4E344CDB8A2AAEEDDAA1DFFBFCCF();
    void Finished_FD9DA1F141588EF59E9137B935518ADE();
    void Finished_2517530749672A6E0F463DBE32B55F43();
    void Finished_F4F2970F433F3A1F566F1AAB725A91C1();
    void Finished_F1F9C2FF45E5B5A41B0C35AE0BD33A32();
    void Finished_51226DA145C6CE6446AF19BA1F7479C8();
    void Finished_B029AD46493C3D55AC97EF93F4065970();
    void Finished_C04460CD4BD8217F35A6CC8FB90BA4F0();
    void RankNoChangeSequence();
    void RankUpSequence();
    void RankDownSequence();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Reset();
    void ExecuteUbergraph_WBP_InGame_Match_ArenaResult(int32 EntryPoint);
}; // Size: 0x338

#endif
