#ifndef UE4SS_SDK_WBP_IngameMenu_ChestManage_HPP
#define UE4SS_SDK_WBP_IngameMenu_ChestManage_HPP

class UWBP_IngameMenu_ChestManage_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UCanvasPanel* Canvas_TargetContainer;                                       // 0x0480 (size: 0x8)
    class UWBP_Common_Inventory_C* WBP_Common_Inventory;                              // 0x0488 (size: 0x8)
    class UWBP_IngameMenu_ChestManage_TakeOut_C* WBP_IngameMenu_ChestManage_TakeOut;  // 0x0490 (size: 0x8)
    class UWBP_IngameMenu_ItemSearchList_C* WBP_IngameMenu_ItemSearchList;            // 0x0498 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x04A0 (size: 0x8)
    class UBP_PalInventoryModel_C* InventoryModel;                                    // 0x04A8 (size: 0x8)
    FWBP_IngameMenu_ChestManage_COnClickedQuickMoveButton OnClickedQuickMoveButton;   // 0x04B0 (size: 0x10)
    void OnClickedQuickMoveButton();
    FWBP_IngameMenu_ChestManage_COnClickedPreferenceButton OnClickedPreferenceButton; // 0x04C0 (size: 0x10)
    void OnClickedPreferenceButton();
    class UPalUIBaseCampItemDispenserModel* DispenserModel;                           // 0x04D0 (size: 0x8)
    bool TakeOutPanelEnabled;                                                         // 0x04D8 (size: 0x1)
    TArray<FPalUIActionBindData> TakeOutBindedActions;                                // 0x04E0 (size: 0x10)
    bool LastFocusListSlot;                                                           // 0x04F0 (size: 0x1)
    bool Updateable;                                                                  // 0x04F1 (size: 0x1)
    FTimerHandle UpdateableTimer;                                                     // 0x04F8 (size: 0x8)
    bool CurrentInFocusPath;                                                          // 0x0500 (size: 0x1)
    bool ForceReset;                                                                  // 0x0501 (size: 0x1)
    TArray<FPalItemSlotId> FillableSlotIds;                                           // 0x0508 (size: 0x10)

    void GetItemCount64InBaseCamp(FPalItemAndNum ItemAndNum, int64& Num);
    void FocusToFilterButton();
    void UpdateInventorySlot(class UWBP_PalItemSlotButtonBase_C* Slot, const TArray<FName>& ItemList);
    void Refill();
    void EnableUpdate();
    void Unbind();
    void Reset Focus(bool TryFocusItemList);
    void UpdateInventoryGreyout(class UPalItemSlot* Slot);
    void InputMethodChanged(ECommonInputType InputType);
    void OnTakeOutClose();
    class UWidget* BP_GetDesiredFocusTarget();
    void On Camp Item Stack Info Update(class UPalUIBaseCampItemDispenserModel* Model);
    void OnCancelAction();
    void GetInventoryLastHoveredFocusTarget(class UWidget*& Widget);
    class UWidget* CustomNavi_ToInventorySlot(EUINavigation Navigation);
    class UWidget* CustomNavi_ToCloseButton(EUINavigation Navigation);
    void GetInventoryTopFocustTarget(class UWidget*& FocusTarget);
    void Setup(class UBP_PalInventoryModel_C* InventoryModel, class UPalUIBaseCampItemDispenserModel* DispenserModel);
    void Construct();
    void BndEvt__WBP_IngameMenu_Chest_WBP_Menu_btn_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_ChestManage_WBP_Common_Inventory_K2Node_ComponentBoundEvent_12_OnClickedInventorySortButton__DelegateSignature();
    void OnSetup();
    void OnClose();
    void BndEvt__WBP_IngameMenu_ChestManage_WBP_Common_Inventory_K2Node_ComponentBoundEvent_0_OnRightClickSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void BndEvt__WBP_IngameMenu_ChestManage_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_1_OnRightClickSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void BndEvt__WBP_IngameMenu_ChestManage_WBP_IngameMenu_ChestManage_TakeOut_K2Node_ComponentBoundEvent_2_OnTakeOutClosed__DelegateSignature();
    void BndEvt__WBP_IngameMenu_ChestManage_WBP_IngameMenu_ChestManage_TakeOut_K2Node_ComponentBoundEvent_3_OnTakeOutConfirmed__DelegateSignature(FPalItemId TakeOutId, int64 TakeOutCount);
    void Destruct();
    void BndEvt__WBP_IngameMenu_ChestManage_WBP_Common_Inventory_K2Node_ComponentBoundEvent_5_OnHoveredInventorySlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void BndEvt__WBP_IngameMenu_ChestManage_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_6_OnSlotHovered__DelegateSignature();
    void OnAddedToFocusPath(FFocusEvent InFocusEvent);
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    void Setup Take Out(FPalItemAndNum ItemAndNum);
    void ExecuteUbergraph_WBP_IngameMenu_ChestManage(int32 EntryPoint);
    void OnClickedPreferenceButton__DelegateSignature();
    void OnClickedQuickMoveButton__DelegateSignature();
}; // Size: 0x518

#endif
