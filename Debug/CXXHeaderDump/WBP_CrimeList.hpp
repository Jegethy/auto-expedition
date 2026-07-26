#ifndef UE4SS_SDK_WBP_CrimeList_HPP
#define UE4SS_SDK_WBP_CrimeList_HPP

class UWBP_CrimeList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Out;                                                  // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Default;                                              // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_InProgress;                                           // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_WantedPrize;                            // 0x02A0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_WantedRank;                                   // 0x02A8 (size: 0x8)
    class UImage* Image_105;                                                          // 0x02B0 (size: 0x8)
    class UImage* Image_Gauge;                                                        // 0x02B8 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x02C0 (size: 0x8)
    class UWBP_CrimeList_RankGauge_C* WBP_CrimeList_RankGauge;                        // 0x02C8 (size: 0x8)
    class UWBP_CrimeList_RankGauge_C* WBP_CrimeList_RankGauge_1;                      // 0x02D0 (size: 0x8)
    class UWBP_CrimeList_RankGauge_C* WBP_CrimeList_RankGauge_2;                      // 0x02D8 (size: 0x8)
    class UWBP_CrimeList_RankGauge_C* WBP_CrimeList_RankGauge_3;                      // 0x02E0 (size: 0x8)
    class UWBP_CrimeList_RankGauge_C* WBP_CrimeList_RankGauge_4;                      // 0x02E8 (size: 0x8)
    class UMaterialInstanceDynamic* GaugeMaterial;                                    // 0x02F0 (size: 0x8)
    bool bInprogressAnimation;                                                        // 0x02F8 (size: 0x1)
    double LocalCurrentTimer;                                                         // 0x0300 (size: 0x8)
    double CachedMaxTime;                                                             // 0x0308 (size: 0x8)
    double LastTimer;                                                                 // 0x0310 (size: 0x8)
    FWBP_CrimeList_COnFinishedClose OnFinishedClose;                                  // 0x0318 (size: 0x10)
    void OnFinishedClose();

    void SetWantedLevel(int32 NewWantedLevel);
    void SetGaugeProgressInternal(double ProgressValue);
    void SetGaugeProgress(double CurrentTimer, double MaxTime);
    void SetCrimeList(TArray<FName>& CrimeList);
    void RemoveAllCrime();
    void SortCrime();
    void SetPrizeMoney(int32 Money);
    void Finished_F06653854F004C1F58C38EA2B1D3D934();
    void AnmEvent_In();
    void AnmEvent_Out();
    void AnmEvent_Inprogress();
    void AnmEvent_Default();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_CrimeList(int32 EntryPoint);
    void OnFinishedClose__DelegateSignature();
}; // Size: 0x328

#endif
