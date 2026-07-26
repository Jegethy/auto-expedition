#ifndef UE4SS_SDK_WBP_RelicRecyclerMenu_HPP
#define UE4SS_SDK_WBP_RelicRecyclerMenu_HPP

class UWBP_RelicRecyclerMenu_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWBP_RecyclerMenu_C* WBP_RecyclerMenu;                                      // 0x0480 (size: 0x8)
    class UPalUIMapObjectRecyclerModel* UIModel;                                      // 0x0488 (size: 0x8)

    void Cleanup UIModel();
    void CleanupRelicChestEventBind();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnUpdateBoost(const class UPalUIMapObjectRecyclerModel* UIModel);
    void OnUpdateOutputContainerCaution(const class UPalUIMapObjectRecyclerModel* UIModel);
    void OnReadyWorkProgress(class UPalMapObjectWorkeeModule* Module, class UPalWorkBase* Work);
    void OnReadyWorkeeModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
    void OnUpdatCurrentRecycleItem(const class UPalUIMapObjectRecyclerModel* UIModel);
    void OnUpdateSwitch_Internal(const class UPalUIMapObjectRecyclerModel* UIModel, bool bInitial);
    void OnUpdateSwitch(const class UPalUIMapObjectRecyclerModel* UIModel);
    void SetupRelicChestEventBind();
    void SetupRelicChestDisplay();
    void BndEvt__WBP_RelicRecyclerMenu_WBP_RecyclerMenu_K2Node_ComponentBoundEvent_0_OnClickClosedButton__DelegateSignature();
    void OnSetup();
    void BndEvt__WBP_RelicRecyclerMenu_WBP_RecyclerMenu_K2Node_ComponentBoundEvent_2_OnClickedTargetContainerSortButton__DelegateSignature();
    void BndEvt__WBP_RelicRecyclerMenu_WBP_RecyclerMenu_K2Node_ComponentBoundEvent_3_OnHoveredTargetContainerSlot__DelegateSignature();
    void ExecuteUbergraph_WBP_RelicRecyclerMenu(int32 EntryPoint);
}; // Size: 0x490

#endif
