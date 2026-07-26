#ifndef UE4SS_SDK_WBP_PalWork_RelicRecycler_HPP
#define UE4SS_SDK_WBP_PalWork_RelicRecycler_HPP

class UWBP_PalWork_RelicRecycler_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWBP_PalWorkRecycler_C* WBP_PalWorkRecycler;                                // 0x0458 (size: 0x8)
    class UPalUIMapObjectRecyclerStatusIndicatorModel* RecyclerUIModel;               // 0x0460 (size: 0x8)
    FTimerHandle DisplayCheckTimer;                                                   // 0x0468 (size: 0x8)
    bool isDisplayedDetail;                                                           // 0x0470 (size: 0x1)
    FTimerHandle LocationCheckTimerHandle;                                            // 0x0478 (size: 0x8)
    bool bValidTarget;                                                                // 0x0480 (size: 0x1)

    void CloseDetail();
    void DisplayDetail();
    void OnUpdateSwitch(class UPalMapObjectSwitchModule* Module);
    void OnReadySwitchModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
    void OnUpdateItemContainerContent_Internal(class UPalMapObjectItemContainerModule* Module, bool bInitial);
    void OnUpdateItemContainerContent(class UPalMapObjectItemContainerModule* Module);
    void OnReadyItemContainerModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
    void OnUpdatedWorkerPal(class UPalWorkBase* Work);
    void OnReadyEnergyModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
    void OnReflectWorkProgress(class UPalWorkProgress* WorkProgress);
    void OnReadyWork(class UPalMapObjectWorkeeModule* Module, class UPalWorkBase* Work);
    void OnReadyWorkeeModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
    void OnUpdateBoost(class UPalUIMapObjectRecyclerStatusIndicatorModel* UIModel);
    void OnUpdateRecycleTarget(class UPalUIMapObjectRecyclerStatusIndicatorModel* UIModel);
    void RefreshBoostDisplay();
    void SetupUI();
    void OnSetup();
    void Construct();
    void CheckLocationEvent();
    void Destruct();
    void ExecuteUbergraph_WBP_PalWork_RelicRecycler(int32 EntryPoint);
}; // Size: 0x481

#endif
