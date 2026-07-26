#ifndef UE4SS_SDK_WBP_PalWorkPowerPlant_1_HPP
#define UE4SS_SDK_WBP_PalWorkPowerPlant_1_HPP

class UWBP_PalWorkPowerPlant_1_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Anm_Thermometer_Overheat;                                 // 0x0458 (size: 0x8)
    class UWidgetAnimation* Anm_Thermometer_Heat;                                     // 0x0460 (size: 0x8)
    class UWidgetAnimation* Anm_Thermometer_Default;                                  // 0x0468 (size: 0x8)
    class UWidgetAnimation* Anm_DetailToSimple_OnlyStorage;                           // 0x0470 (size: 0x8)
    class UWidgetAnimation* Anm_DetailToSimple;                                       // 0x0478 (size: 0x8)
    class UImage* Arrow;                                                              // 0x0480 (size: 0x8)
    class UCanvasPanel* Canvas_HeatCaution;                                           // 0x0488 (size: 0x8)
    class UImage* Image_199;                                                          // 0x0490 (size: 0x8)
    class UImage* Image_CautionIcon;                                                  // 0x0498 (size: 0x8)
    class UImage* Image_Thermometer_Base;                                             // 0x04A0 (size: 0x8)
    class UImage* Image_Thermometer_GaugeBase;                                        // 0x04A8 (size: 0x8)
    class UImage* Image_Thermometer_Glow;                                             // 0x04B0 (size: 0x8)
    class UImage* Image_Thermometer_HeatZone;                                         // 0x04B8 (size: 0x8)
    class UOverlay* Overlay_OverheatText;                                             // 0x04C0 (size: 0x8)
    class UPalProgressBar* PalProgressBar_Thermometer;                                // 0x04C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PlantNum;                                          // 0x04D0 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal;                              // 0x04D8 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_1;                            // 0x04E0 (size: 0x8)
    class UWBP_PalWorkPowerPlant_Gauge_C* WBP_PalWorkPowerPlant_Gauge;                // 0x04E8 (size: 0x8)
    class UWBP_PalWorkPowerPlant_Gauge_C* WBP_PalWorkPowerPlant_Gauge_1;              // 0x04F0 (size: 0x8)
    class UWBP_PalWorkPowerPlant_Gauge_C* WBP_PalWorkPowerPlant_Gauge_2;              // 0x04F8 (size: 0x8)
    class UWBP_PalWorkPowerPlant_Gauge_C* WBP_PalWorkPowerPlant_Gauge_3;              // 0x0500 (size: 0x8)
    class UWBP_PalWorkPowerPlant_Gauge_C* WBP_PalWorkPowerPlant_Gauge_4;              // 0x0508 (size: 0x8)
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;                                  // 0x0510 (size: 0x8)
    FTimerHandle DisplayCheckTimer;                                                   // 0x0518 (size: 0x8)
    FTimerHandle ChangeCheckTimer;                                                    // 0x0520 (size: 0x8)
    bool isDisplayedDetail;                                                           // 0x0528 (size: 0x1)
    TArray<class UWBP_PalCraftInfo_Pal_C*> Pal Infos;                                 // 0x0530 (size: 0x10)
    TArray<class UWBP_PalWorkPowerPlant_Gauge_C*> Gauges;                             // 0x0540 (size: 0x10)
    double PreviousAmout;                                                             // 0x0550 (size: 0x8)
    double CurrentAmout;                                                              // 0x0558 (size: 0x8)
    int32 CurrentGauge;                                                               // 0x0560 (size: 0x4)
    class UPalUIMapObjectEnergyStatusIndicatorModel* UIIndicatorModel;                // 0x0568 (size: 0x8)

    void SetHeatGaugeValue(class UPalUIMapObjectEnergyStatusIndicatorModel_GenerateEnergy* IndicatorModel);
    void SetVisibleOverHeatCaution(bool bOn);
    class UWidgetAnimation* GetAnimationDetailToSimple();
    void SetupForMapObjectConcreteModel();
    void OnUpdateOverHeatGauge(class UPalUIMapObjectEnergyStatusIndicatorModel_GenerateEnergy* Model);
    void OnUpdateEnergyStack(class UPalUIMapObjectEnergyStatusIndicatorModel* Model);
    void On Updated Worker Pal(class UPalWorkBase* Work);
    void SetArrow(bool IsIncrease);
    void OnSetup();
    void Construct();
    void DisplayCheck();
    void Destruct();
    void ChangeCheck();
    void ExecuteUbergraph_WBP_PalWorkPowerPlant_1(int32 EntryPoint);
}; // Size: 0x570

#endif
