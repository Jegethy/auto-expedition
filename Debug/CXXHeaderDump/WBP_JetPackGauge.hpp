#ifndef UE4SS_SDK_WBP_JetPackGauge_HPP
#define UE4SS_SDK_WBP_JetPackGauge_HPP

class UWBP_JetPackGauge_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Anm_Low;                                                  // 0x0458 (size: 0x8)
    class UWidgetAnimation* Anm_Default;                                              // 0x0460 (size: 0x8)
    class UWidgetAnimation* Anm_Out;                                                  // 0x0468 (size: 0x8)
    class UImage* Image_Caution;                                                      // 0x0470 (size: 0x8)
    class UImage* Image_Gauge;                                                        // 0x0478 (size: 0x8)
    class UImage* Image_Gauge_Free;                                                   // 0x0480 (size: 0x8)
    class UImage* Image_Gauge_Glow;                                                   // 0x0488 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Num;                                               // 0x0490 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;                            // 0x0498 (size: 0x8)
    int32 LastFuelCount;                                                              // 0x04A0 (size: 0x4)
    double LastFuelRate;                                                              // 0x04A8 (size: 0x8)
    class UMaterialInstanceDynamic* GaugeMaterial;                                    // 0x04B0 (size: 0x8)
    class UMaterialInstanceDynamic* FreeGaugeMaterial;                                // 0x04B8 (size: 0x8)
    class UMaterialInstanceDynamic* GlowGaugeMaterial;                                // 0x04C0 (size: 0x8)
    bool bAlreadyDisplay;                                                             // 0x04C8 (size: 0x1)

    void SetCurrentJetpackFuelThreshold(double Threshold);
    void SetVisibilityFuelThresholdGauge(bool bVisible);
    void SetFuelRate(double FuelRate);
    void SetFuelItemName(FName ItemName);
    void SetRemainFuelCount(int32 FuelCount);
    void AnmEvent_Low();
    void AnmEvent_Default();
    void AnmEvent_Out();
    void AnmEvent_In();
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_JetPackGauge(int32 EntryPoint);
}; // Size: 0x4C9

#endif
