#ifndef UE4SS_SDK_WBP_Fishing_ProgressGauge_HPP
#define UE4SS_SDK_WBP_Fishing_ProgressGauge_HPP

class UWBP_Fishing_ProgressGauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Loop;                                                 // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Fail;                                                 // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0290 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x0298 (size: 0x8)
    class UImage* Image_Gauge;                                                        // 0x02A0 (size: 0x8)
    class UImage* Image_gauge_Bloom;                                                  // 0x02A8 (size: 0x8)
    class UImage* Image_gauge_Eff_Fail;                                               // 0x02B0 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x02B8 (size: 0x8)
    class UImage* Image_Shadow;                                                       // 0x02C0 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> GaugeMaterials;                           // 0x02C8 (size: 0x10)
    double ProgressRate;                                                              // 0x02D8 (size: 0x8)
    class UCurveLinearColor* ColorCurve;                                              // 0x02E0 (size: 0x8)

    void SetProgressRate(double CurrentRate);
    void UpdateDisplayRate(double DeltaTime);
    void Finished_93F8C31949571C5C977F44ADBF602673();
    void AnmEvent_In();
    void AnmEvent_Loop();
    void AnmEvent_Fail();
    void AnmEvent_AllStop();
    void AnmEvent_Out();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void ExecuteUbergraph_WBP_Fishing_ProgressGauge(int32 EntryPoint);
}; // Size: 0x2E8

#endif
