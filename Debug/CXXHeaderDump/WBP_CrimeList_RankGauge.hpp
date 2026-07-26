#ifndef UE4SS_SDK_WBP_CrimeList_RankGauge_HPP
#define UE4SS_SDK_WBP_CrimeList_RankGauge_HPP

class UWBP_CrimeList_RankGauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_OFF;                                                  // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_RankUp;                                               // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_OFFToON;                                              // 0x0290 (size: 0x8)
    class UProgressBar* ProgressBar_109;                                              // 0x0298 (size: 0x8)
    bool bCurrentOn;                                                                  // 0x02A0 (size: 0x1)

    void AnmEvent_Off();
    void AnmEvent_Rankup();
    void ExecuteUbergraph_WBP_CrimeList_RankGauge(int32 EntryPoint);
}; // Size: 0x2A1

#endif
