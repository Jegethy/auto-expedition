#ifndef UE4SS_SDK_WBP_PalWork_BreedFarm_HPP
#define UE4SS_SDK_WBP_PalWork_BreedFarm_HPP

class UWBP_PalWork_BreedFarm_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Anm_DetailToSimple;                                       // 0x0458 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Mate;                                   // 0x0460 (size: 0x8)
    class UImage* CircleGauge_Progress;                                               // 0x0468 (size: 0x8)
    class UImage* Image;                                                              // 0x0470 (size: 0x8)
    class UImage* Image_Egg;                                                          // 0x0478 (size: 0x8)
    class UImage* Image_Mate;                                                         // 0x0480 (size: 0x8)
    class UOverlay* Overlay_Condition_NoCake;                                         // 0x0488 (size: 0x8)
    class UBP_PalTextBlock_C* Text_FemaleNum;                                         // 0x0490 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemName;                                          // 0x0498 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaleNum;                                           // 0x04A0 (size: 0x8)
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;                                  // 0x04A8 (size: 0x8)
    FTimerHandle DisplayCheckTimer;                                                   // 0x04B0 (size: 0x8)
    bool isDisplayedDetail;                                                           // 0x04B8 (size: 0x1)
    FDataTableRowHandle CanBreedMsgId;                                                // 0x04C0 (size: 0x10)
    FDataTableRowHandle CantBreedMsgId;                                               // 0x04D0 (size: 0x10)
    FDataTableRowHandle BreedEggMsgId;                                                // 0x04E0 (size: 0x10)
    FDataTableRowHandle NoMateMsgI;                                                   // 0x04F0 (size: 0x10)
    class UPalUIMapObjectBreedStatusIndicatorModel* BreedUIModel;                     // 0x0500 (size: 0x8)

    void ReflectExistsBreedItem();
    void OnUpdateContainer(class UPalItemContainer* Container);
    void OnReadyItemContainerEvent(TScriptInterface<class IPalMapObjectItemContainerAccessInterface> AccessInterface);
    void On Updated Worker Pal(class UPalWorkBase* Work);
    void OnUpdateProgress(class UPalUIMapObjectBreedStatusIndicatorModel* UIModel);
    void OnSetup();
    void DisplayCheck();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_PalWork_BreedFarm(int32 EntryPoint);
}; // Size: 0x508

#endif
