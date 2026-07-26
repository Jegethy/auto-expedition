#ifndef UE4SS_SDK_WBP_Common_Inventory_HPP
#define UE4SS_SDK_WBP_Common_Inventory_HPP

class UWBP_Common_Inventory_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UCanvasPanel* Canvas_Inventory;                                             // 0x0280 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Sort_Inventory;           // 0x0288 (size: 0x8)
    class UWBP_PalPlayerInventoryScrollList_C* WBP_PalPlayerInventoryScrollList;      // 0x0290 (size: 0x8)
    class UWBP_PlayerInventoryWeightInfo_C* WBP_PlayerInventoryWeightInfo;            // 0x0298 (size: 0x8)
    class UBP_PalInventoryModel_C* Model;                                             // 0x02A0 (size: 0x8)
    FWBP_Common_Inventory_COnClickedInventorySortButton OnClickedInventorySortButton; // 0x02A8 (size: 0x10)
    void OnClickedInventorySortButton();
    FWBP_Common_Inventory_COnHoveredInventorySlot OnHoveredInventorySlot;             // 0x02B8 (size: 0x10)
    void OnHoveredInventorySlot(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    FWBP_Common_Inventory_COnUnhoveredInventorySlot OnUnhoveredInventorySlot;         // 0x02C8 (size: 0x10)
    void OnUnhoveredInventorySlot();
    FWBP_Common_Inventory_COnLeftClickSlot OnLeftClickSlot;                           // 0x02D8 (size: 0x10)
    void OnLeftClickSlot(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    FWBP_Common_Inventory_COnRightClickSlot OnRightClickSlot;                         // 0x02E8 (size: 0x10)
    void OnRightClickSlot(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);

    void GetInventoryLastHoveredFocusTarget(class UWidget*& Widget);
    void GetInventoryTopFocustTarget(class UWidget*& FocusTarget);
    void OnLeftClickedTargetContainerSLot(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void Setup(class UBP_PalInventoryModel_C* Model);
    void FilteringInventoryByInventoryTypeB(TArray<EPalItemTypeB>& displayTypesB);
    void FilteringInventoryByInventoryTypeA(TArray<EPalItemTypeA>& displayTypesA);
    void FilteringInventoryByInventoryType(TArray<EPalPlayerInventoryType>& inventoryType);
    void BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_Sort_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Chest_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_4_OnHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void BndEvt__WBP_IngameMenu_Chest_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_5_OnEndHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void BndEvt__WBP_Common_Inventory_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_8_OnLeftClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void BndEvt__WBP_Common_Inventory_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_1_OnRightClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void Destruct();
    void ExecuteUbergraph_WBP_Common_Inventory(int32 EntryPoint);
    void OnRightClickSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void OnLeftClickSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void OnUnhoveredInventorySlot__DelegateSignature();
    void OnHoveredInventorySlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void OnClickedInventorySortButton__DelegateSignature();
}; // Size: 0x2F8

#endif
