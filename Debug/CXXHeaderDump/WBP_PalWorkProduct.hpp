#ifndef UE4SS_SDK_WBP_PalWorkProduct_HPP
#define UE4SS_SDK_WBP_PalWorkProduct_HPP

class UWBP_PalWorkProduct_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Anm_None;                                                 // 0x0458 (size: 0x8)
    class UWidgetAnimation* Anm_DetailToSimple;                                       // 0x0460 (size: 0x8)
    class UImage* CircleGauge_Progress;                                               // 0x0468 (size: 0x8)
    class UImage* Image;                                                              // 0x0470 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemName;                                          // 0x0478 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxItemNum;                                        // 0x0480 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowItemNum;                                        // 0x0488 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;                            // 0x0490 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal;                              // 0x0498 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_1;                            // 0x04A0 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_2;                            // 0x04A8 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_3;                            // 0x04B0 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_4;                            // 0x04B8 (size: 0x8)
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;                                  // 0x04C0 (size: 0x8)
    TMap<class EPalFarmCropState, class FDataTableRowHandle> StateMsgIdMap;           // 0x04C8 (size: 0x50)
    TArray<class UWBP_PalCraftInfo_Pal_C*> PalInfos;                                  // 0x0518 (size: 0x10)
    FTimerHandle DisplayCheckTimer;                                                   // 0x0528 (size: 0x8)
    bool isDisplayedDetail;                                                           // 0x0530 (size: 0x1)
    bool HideNextState;                                                               // 0x0531 (size: 0x1)
    class UPalUIMapObjectProductItemStatusIndicatorModel* Product Item Model;         // 0x0538 (size: 0x8)

    void RefreshProductDisplay();
    void GetMapObjectLocation(FVector& Location);
    void Setup();
    void OnUpdateContainer(class UPalItemContainer* Container);
    void On Updated Worker Pal(class UPalWorkBase* Work);
    void OnUpdateProgress(class UPalWorkProgress* Progress);
    void OnSetup();
    void DisplayCheck();
    void Destruct();
    void Construct();
    void OnUpdateProductIdDelegate_イベント(class UPalUIMapObjectProductItemStatusIndicatorModel* UIModel);
    void ExecuteUbergraph_WBP_PalWorkProduct(int32 EntryPoint);
}; // Size: 0x540

#endif
