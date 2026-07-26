#ifndef UE4SS_SDK_WBP_PalWork_FishPond_HPP
#define UE4SS_SDK_WBP_PalWork_FishPond_HPP

class UWBP_PalWork_FishPond_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Anm_DetailToSimple;                                       // 0x0458 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Hour;                // 0x0460 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Hour_1;              // 0x0468 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Minute;              // 0x0470 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Minute_1;            // 0x0478 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Second;              // 0x0480 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Second_1;            // 0x0488 (size: 0x8)
    class UImage* CircleGauge_Progress;                                               // 0x0490 (size: 0x8)
    class UHorizontalBox* HorizontalBox_RemainTime;                                   // 0x0498 (size: 0x8)
    class UImage* Image;                                                              // 0x04A0 (size: 0x8)
    class UImage* Image_Base_Dot;                                                     // 0x04A8 (size: 0x8)
    class UImage* Image_Icon_FishPond;                                                // 0x04B0 (size: 0x8)
    class UPalRetainerBox* PalRetainerBox_0;                                          // 0x04B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxItemNum;                                        // 0x04C0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowItemNum;                                        // 0x04C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_TargetName;                                        // 0x04D0 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal;                              // 0x04D8 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_1;                            // 0x04E0 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_2;                            // 0x04E8 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_3;                            // 0x04F0 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_4;                            // 0x04F8 (size: 0x8)
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;                                  // 0x0500 (size: 0x8)
    TMap<class EPalFarmCropState, class FDataTableRowHandle> StateMsgIdMap;           // 0x0508 (size: 0x50)
    TArray<class UWBP_PalCraftInfo_Pal_C*> PalInfos;                                  // 0x0558 (size: 0x10)
    FTimerHandle DisplayCheckTimer;                                                   // 0x0568 (size: 0x8)
    bool isDisplayedDetail;                                                           // 0x0570 (size: 0x1)
    bool HideNextState;                                                               // 0x0571 (size: 0x1)
    int32 LastNum;                                                                    // 0x0574 (size: 0x4)

    void SetRemainTime(int32 RemainingSecond);
    void OnUpdateProductNumInfo(class UPalUIMapObjectFishPondStatusIndicatorModel* UIModel);
    void OnUpdateSelectedTarget(class UPalUIMapObjectFishPondStatusIndicatorModel* UIModel);
    class UPalMapObjectConcreteModelBase* GetOwnerConcreteModel();
    class UPalUIMapObjectFishPondStatusIndicatorModel* GetIndicatorModel();
    void GetMapObjectLocation(FVector& Location);
    void Setup();
    void On Updated Worker Pal(class UPalWorkBase* Work);
    void OnUpdateProgress(class UPalWorkProgress* Progress);
    void OnSetup();
    void DisplayCheck();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_PalWork_FishPond(int32 EntryPoint);
}; // Size: 0x578

#endif
