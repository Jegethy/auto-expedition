#ifndef UE4SS_SDK_WBP_ItemChest_HPP
#define UE4SS_SDK_WBP_ItemChest_HPP

class UWBP_ItemChest_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0480 (size: 0x8)
    class UCircularThrobber* CircularThrobber_69;                                     // 0x0488 (size: 0x8)
    class UOverlay* Overlay_WaitRep;                                                  // 0x0490 (size: 0x8)
    class UWBP_IngameMenu_Chest_C* WBP_IngameMenu_Chest;                              // 0x0498 (size: 0x8)
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;                                // 0x04A0 (size: 0x8)
    class UBP_PalInventoryModel_C* InventoryModel;                                    // 0x04A8 (size: 0x8)
    FPalDataTableRowName_UIInputAction LeftFocusInput;                                // 0x04B0 (size: 0x8)
    FPalDataTableRowName_UIInputAction RightFocusInput;                               // 0x04B8 (size: 0x8)
    FPalDataTableRowName_UIInputAction FastGetInput;                                  // 0x04C0 (size: 0x8)
    class UPalItemSlot* CachedLastFocusedInventorySlot;                               // 0x04C8 (size: 0x8)
    class UPalItemSlot* CachedLastFocusedTargetContainerSlot;                         // 0x04D0 (size: 0x8)
    FPalDataTableRowName_UIInputAction AllGetInput;                                   // 0x04D8 (size: 0x8)
    TArray<EPalPlayerInventoryType> DisplayInventoryType;                             // 0x04E0 (size: 0x10)
    FPalDataTableRowName_UIInputAction RefillInput;                                   // 0x04F0 (size: 0x8)
    FPalContainerId TargetContainerId;                                                // 0x04F8 (size: 0x10)
    FPalDataTableRowName_UIInputAction SortInput;                                     // 0x0508 (size: 0x8)
    FPalDataTableRowName_UIInputAction ChestSettingInput;                             // 0x0510 (size: 0x8)

    void IsEnableSortButton(bool& Result);
    void SetupSortButton();
    void PlayItemMoveSound();
    void RequestStopReplication();
    void RequestStartReplication();
    void OnUpdatePrivateLockPlayerUId(class UPalMapObjectItemChestModel* ConcreteModel);
    void Sort();
    void Refill();
    class UWidget* BP_GetDesiredFocusTarget();
    void AllGet();
    void FastMove();
    void Setup();
    void OnSetup();
    void Construct();
    void ChangeFocus_Inv_Pad();
    void ChangeFocus_Chest_Pad();
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_3_OnClickedQuickMoveButton__DelegateSignature();
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_8_OnClickedInventorySortButton__DelegateSignature();
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_9_OnHoveredInventorySlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_12_OnClickedTargetContainerSortButton__DelegateSignature();
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_13_OnUnhoveredInventorySlot__DelegateSignature();
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_14_OnHoveredTargetContainerSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_15_OnUnhoveredTargetContainerSlot__DelegateSignature();
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_16_OnClickedCloseButton__DelegateSignature();
    void OnClose();
    void OnReadyItemContainer(TScriptInterface<class IPalMapObjectItemContainerAccessInterface> AccessInterface);
    void Destruct();
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_0_OnClickFilterSettingButton__DelegateSignature();
    void OpenChestSetting();
    void ExecuteUbergraph_WBP_ItemChest(int32 EntryPoint);
}; // Size: 0x518

#endif
