#ifndef UE4SS_SDK_WBP_PalPlayerInventoryScrollList_HPP
#define UE4SS_SDK_WBP_PalPlayerInventoryScrollList_HPP

class UWBP_PalPlayerInventoryScrollList_C : public UWBP_PalItemScrollList_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0568 (size: 0x8)
    class UPalUIInventoryModel* Model;                                                // 0x0570 (size: 0x8)
    TMap<class EPalPlayerInventoryType, class UWBP_PalItemListBlock_C*> CategoryBlockMap; // 0x0578 (size: 0x50)
    TArray<EPalPlayerInventoryType> InventoryTypeArray;                               // 0x05C8 (size: 0x10)
    FWBP_PalPlayerInventoryScrollList_COnRequestOpenUseItemPanel OnRequestOpenUseItemPanel; // 0x05D8 (size: 0x10)
    void OnRequestOpenUseItemPanel(class UPalItemSlot* SelectedSlot);
    bool CanUseSlot;                                                                  // 0x05E8 (size: 0x1)
    FPalDataTableRowName_UIInputAction Handle;                                        // 0x05EC (size: 0x8)
    bool CanQuickEquip;                                                               // 0x05F4 (size: 0x1)
    bool ShowPrice;                                                                   // 0x05F5 (size: 0x1)
    FWBP_PalPlayerInventoryScrollList_COnTriedEquipSlot OnTriedEquipSlot;             // 0x05F8 (size: 0x10)
    void OnTriedEquipSlot(class UWBP_PalItemSlotButtonBase_C* SlotButton);

    void GetItemSlotButtons(EPalPlayerInventoryType inventoryType, TArray<class UWBP_PalItemSlotButtonBase_C*>& OutSlotButtonArray);
    void OnTriedEquipSlot_Internal(class UWBP_PalItemSlotButtonBase_C* Widget);
    void Open Use Item Panel(class UWBP_PalItemSlotButtonBase_C* Button);
    void ScrollToCategoryTop(EPalPlayerInventoryType TargetType, class UWidget*& TopFocusTarget);
    void Add Player Inventory Block(EPalPlayerInventoryType inventoryType, class UWBP_PalItemListBlock_C*& createdBlock);
    void ClearFiltering();
    void FilteringFromInventoryType(TArray<EPalPlayerInventoryType>& displayTypes, bool& IsEmptyDisplaySlot);
    void FilteringFromItemTypeB(TArray<EPalItemTypeB>& displayTypesB, bool isEmptySlotDIsplay);
    void FilteringFromItemTypeA(TArray<EPalItemTypeA>& displayTypesA, bool isEmptySlotDIsplay);
    void OnLeftCllicked(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void Setup(class UPalUIInventoryModel* useModel);
    void Construct();
    void ExecuteUbergraph_WBP_PalPlayerInventoryScrollList(int32 EntryPoint);
    void OnTriedEquipSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void OnRequestOpenUseItemPanel__DelegateSignature(class UPalItemSlot* SelectedSlot);
}; // Size: 0x608

#endif
