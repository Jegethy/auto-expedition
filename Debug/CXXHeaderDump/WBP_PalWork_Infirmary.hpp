#ifndef UE4SS_SDK_WBP_PalWork_Infirmary_HPP
#define UE4SS_SDK_WBP_PalWork_Infirmary_HPP

class UWBP_PalWork_Infirmary_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Anm_DetailToSimple;                                       // 0x0458 (size: 0x8)
    class UCanvasPanel* Canvas_LV_A;                                                  // 0x0460 (size: 0x8)
    class UCanvasPanel* Canvas_LV_B;                                                  // 0x0468 (size: 0x8)
    class UImage* Image_LV_A_2;                                                       // 0x0470 (size: 0x8)
    class UImage* Image_LV_A_3;                                                       // 0x0478 (size: 0x8)
    class UImage* Image_LV_A_Head;                                                    // 0x0480 (size: 0x8)
    class UImage* Image_LV_B_2;                                                       // 0x0488 (size: 0x8)
    class UImage* Image_LV_B_3;                                                       // 0x0490 (size: 0x8)
    class UImage* Image_LV_B_4;                                                       // 0x0498 (size: 0x8)
    class UImage* Image_LV_B_5;                                                       // 0x04A0 (size: 0x8)
    class UImage* Image_LV_B_Head;                                                    // 0x04A8 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal;                              // 0x04B0 (size: 0x8)
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;                                  // 0x04B8 (size: 0x8)
    FTimerHandle DisplayCheckTimer;                                                   // 0x04C0 (size: 0x8)
    FTimerHandle ChangeCheckTimer;                                                    // 0x04C8 (size: 0x8)
    bool isDisplayedDetail;                                                           // 0x04D0 (size: 0x1)
    TArray<class UWBP_PalCraftInfo_Pal_C*> Pal Infos;                                 // 0x04D8 (size: 0x10)
    TArray<class UWBP_PalWorkPowerPlant_Gauge_C*> Gauges;                             // 0x04E8 (size: 0x10)
    double PreviousAmout;                                                             // 0x04F8 (size: 0x8)
    double CurrentAmout;                                                              // 0x0500 (size: 0x8)
    int32 CurrentGauge;                                                               // 0x0508 (size: 0x4)
    class UPalUIMapObjectClinicStatusIndicatorModel* UIModel;                         // 0x0510 (size: 0x8)
    class UPalUIMapObjectStatusIndicatorParameter_Clinic* UIIndicatorParam;           // 0x0518 (size: 0x8)

    void RefreshProductDisplay();
    void On Updated Worker Pal(class UPalWorkBase* Work);
    void GetTargetStarLevelStarImages(int32 MaxStarLevel, TArray<class UImage*>& Images);
    void GetTargetStarLevelCanvas(int32 MaxStarLevel, class UCanvasPanel*& Canvas);
    void ShowHygieneStarLevel(class UCanvasPanel* Canvas, TArray<class UImage*>& StarImages, int32 CurrentStarLevel);
    void OnUpdateClinicStatus();
    void Setup();
    void OnSetup();
    void Construct();
    void DisplayCheck();
    void Destruct();
    void ExecuteUbergraph_WBP_PalWork_Infirmary(int32 EntryPoint);
}; // Size: 0x520

#endif
