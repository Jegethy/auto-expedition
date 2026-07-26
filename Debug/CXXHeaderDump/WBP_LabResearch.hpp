#ifndef UE4SS_SDK_WBP_LabResearch_HPP
#define UE4SS_SDK_WBP_LabResearch_HPP

class UWBP_LabResearch_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Anm_DetailToSimple;                                       // 0x0458 (size: 0x8)
    class UCanvasPanel* CanvasPanel_NoResearch;                                       // 0x0460 (size: 0x8)
    class UCanvasPanel* CanvasPanel_ResearchInfo;                                     // 0x0468 (size: 0x8)
    class UImage* CircleGauge_Progress;                                               // 0x0470 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Progress;                                     // 0x0478 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Progress_Percent;                             // 0x0480 (size: 0x8)
    class UImage* Image;                                                              // 0x0488 (size: 0x8)
    class UImage* Image_Base_Dot;                                                     // 0x0490 (size: 0x8)
    class UPalRetainerBox* PalRetainerBox_0;                                          // 0x0498 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Complete;                                          // 0x04A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemName;                                          // 0x04A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxItemNum;                                        // 0x04B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxItemNum_2;                                      // 0x04B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxItemNum_3;                                      // 0x04C0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowItemNum;                                        // 0x04C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowPercent;                                        // 0x04D0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowPercent_1;                                      // 0x04D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Workload_Progress;                                 // 0x04E0 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal;                              // 0x04E8 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_1;                            // 0x04F0 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_2;                            // 0x04F8 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_3;                            // 0x0500 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_4;                            // 0x0508 (size: 0x8)
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;                                  // 0x0510 (size: 0x8)
    class UWBP_ResearchEffectIcon_C* WBP_ResearchEffectIcon;                          // 0x0518 (size: 0x8)
    TMap<class EPalFarmCropState, class FDataTableRowHandle> StateMsgIdMap;           // 0x0520 (size: 0x50)
    TArray<class UWBP_PalCraftInfo_Pal_C*> PalInfos;                                  // 0x0570 (size: 0x10)
    FTimerHandle DisplayCheckTimer;                                                   // 0x0580 (size: 0x8)
    bool isDisplayedDetail;                                                           // 0x0588 (size: 0x1)
    bool HideNextState;                                                               // 0x0589 (size: 0x1)
    class UPalMapObjectLabModel* LabModel;                                            // 0x0590 (size: 0x8)
    FTimerHandle ProgressUpdateTimer;                                                 // 0x0598 (size: 0x8)
    FTimerHandle WorkSyncTimer;                                                       // 0x05A0 (size: 0x8)

    void CheckWorkSync();
    void On Current Research Updated(class UPalMapObjectLabModel* LabModel);
    void Update Research Progress();
    void GetMapObjectLocation(FVector& Location);
    void Setup();
    void On Updated Worker Pal(class UPalWorkBase* Work);
    void OnSetup();
    void DisplayCheck();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_LabResearch(int32 EntryPoint);
}; // Size: 0x5A8

#endif
