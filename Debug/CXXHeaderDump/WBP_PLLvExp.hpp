#ifndef UE4SS_SDK_WBP_PLLvExp_HPP
#define UE4SS_SDK_WBP_PLLvExp_HPP

class UWBP_PLLvExp_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0658 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x0660 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0668 (size: 0x8)
    class UProgressBar* Gage_Exp_Back;                                                // 0x0670 (size: 0x8)
    class UProgressBar* Gauge_Exp;                                                    // 0x0678 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Exp;                                               // 0x0680 (size: 0x8)
    class UWBP_LvNum_C* WBP_LvNum;                                                    // 0x0688 (size: 0x8)
    double closeAnimeDelay;                                                           // 0x0690 (size: 0x8)
    bool IsOpened;                                                                    // 0x0698 (size: 0x1)
    double delayGaugeTimer;                                                           // 0x06A0 (size: 0x8)
    double delayGaugeTime;                                                            // 0x06A8 (size: 0x8)
    double delayGaugeProgressPerSecond;                                               // 0x06B0 (size: 0x8)
    double targetPercent;                                                             // 0x06B8 (size: 0x8)
    int64 totalDIsplayExp;                                                            // 0x06C0 (size: 0x8)
    double CloseTimer;                                                                // 0x06C8 (size: 0x8)

    void UpdateLevel(int32 NewLevel);
    void UpdateExp(int64 addExp, int64 oldExp, double nowExpRate);
    void Setup();
    void SetAddExpText(int64 Value);
    void Finished_D0ED7FF7495A5D9266FC3DB1824EA6F6();
    void Finished_45DAD3564BCF5FB025F120A933EEC011();
    void AnmEvent_Open_UI();
    void AnmEvent_Close_UI();
    void OnInitialized();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_PLLvExp(int32 EntryPoint);
}; // Size: 0x6D0

#endif
