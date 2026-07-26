#ifndef UE4SS_SDK_WBP_Paldex_Map_HPP
#define UE4SS_SDK_WBP_Paldex_Map_HPP

class UWBP_Paldex_Map_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_TimeZone_Night;                                       // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_TimeZone_Daytime;                                     // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_TimeZone_All;                                         // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_185;                                  // 0x0298 (size: 0x8)
    class UCanvasPanel* Canvas_Distribution;                                          // 0x02A0 (size: 0x8)
    class UCanvasPanel* Canvas_MapRoot;                                               // 0x02A8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_ChangeMap;                                    // 0x02B0 (size: 0x8)
    class UImage* Image_5;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_6;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_79;                                                           // 0x02C8 (size: 0x8)
    class UImage* Image_160;                                                          // 0x02D0 (size: 0x8)
    class UImage* Image_Map;                                                          // 0x02D8 (size: 0x8)
    class UImage* Image_Mask;                                                         // 0x02E0 (size: 0x8)
    class URetainerBox* RetainerBox_DistributionCircle;                               // 0x02E8 (size: 0x8)
    class URetainerBox* RetainerBox_Map;                                              // 0x02F0 (size: 0x8)
    class UWBP_Map_Body_Cloud_1_C* WBP_Map_Body_Cloud_1;                              // 0x02F8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Day;                      // 0x0300 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Night;                    // 0x0308 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_95;                             // 0x0310 (size: 0x8)
    FVector2D MinLandscapePosXY;                                                      // 0x0318 (size: 0x10)
    FVector2D MaxLandscapePosXY;                                                      // 0x0328 (size: 0x10)
    FVector2D LandScapeSize;                                                          // 0x0338 (size: 0x10)
    double maxZoomRate;                                                               // 0x0348 (size: 0x8)
    FWBP_Paldex_Map_COnSwitchDayNight OnSwitchDayNight;                               // 0x0350 (size: 0x10)
    void OnSwitchDayNight(TEnumAsByte<E_PaldexDistributionTimeType::Type> Time);
    double OffsetRistrict;                                                            // 0x0360 (size: 0x8)
    class UWBP_Map_IconPlayer_C* PlayerIcon;                                          // 0x0368 (size: 0x8)
    FName CurrentDisplayMapName;                                                      // 0x0370 (size: 0x8)
    TArray<FName> SelectableMapNames;                                                 // 0x0378 (size: 0x10)
    class UMaterialInstanceDynamic* MapMaskMaterial;                                  // 0x0388 (size: 0x8)

    void GetNextMapName(FName& NextMapName);
    void ChangeNextMap();
    void SetupSelectableMapInfo();
    void ChangeMap(FName MapName);
    void SetVisibilityMap(bool IsVisible);
    void IsZoomMax(bool& IsMax);
    void SetZoomRate(double Rate);
    void ResetZoom();
    void addZoomRate(double addZoomRate);
    void SetupCircleWidget(TSubclassOf<class UUserWidget> Class, FVector WorldLocation, double realSpawnSize, bool& bDisplayed);
    void ResetOffset();
    void AddOffset(FVector2D Offset);
    void ClearDistributionCircle();
    void SetDistributionLocations(FPalUIPaldexDistributionLocationStruct dayTimeLocationStruct, FPalUIPaldexDistributionLocationStruct nightTimeLocationStruct, TEnumAsByte<E_PaldexDistributionTimeType::Type> timeType, bool& isNoDistribution);
    void AnmEvent_DayTime();
    void AnmEvent_NightTime();
    void AnmEvent_AllTime();
    void OnInitialized();
    void BndEvt__WBP_Paldex_Map_WBP_PalInvisibleButton_Night_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Paldex_Map_WBP_PalInvisibleButton_Day_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Construct();
    void ExecuteUbergraph_WBP_Paldex_Map(int32 EntryPoint);
    void OnSwitchDayNight__DelegateSignature(TEnumAsByte<E_PaldexDistributionTimeType::Type> Time);
}; // Size: 0x390

#endif
