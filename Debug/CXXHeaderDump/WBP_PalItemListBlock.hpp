#ifndef UE4SS_SDK_WBP_PalItemListBlock_HPP
#define UE4SS_SDK_WBP_PalItemListBlock_HPP

class UWBP_PalItemListBlock_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWBP_InventoryListContent_C* WBP_InventoryListContent;                      // 0x0458 (size: 0x8)
    TSubclassOf<class UWBP_PalItemSlotButtonBase_C> ItemSlotButtonClass;              // 0x0460 (size: 0x8)
    FWBP_PalItemListBlock_COnLeftClickedAnyContent OnLeftClickedAnyContent;           // 0x0468 (size: 0x10)
    void OnLeftClickedAnyContent(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    FWBP_PalItemListBlock_COnMiddleClickedAnyContent OnMiddleClickedAnyContent;       // 0x0478 (size: 0x10)
    void OnMiddleClickedAnyContent(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    FWBP_PalItemListBlock_COnRightClickedAnyContent OnRightClickedAnyContent;         // 0x0488 (size: 0x10)
    void OnRightClickedAnyContent(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    FWBP_PalItemListBlock_COnHoverdAnyContent OnHoverdAnyContent;                     // 0x0498 (size: 0x10)
    void OnHoverdAnyContent(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    FWBP_PalItemListBlock_COnEndHoveredAnyContent OnEndHoveredAnyContent;             // 0x04A8 (size: 0x10)
    void OnEndHoveredAnyContent(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    FWBP_PalItemListBlock_COnFocusedAnyContent OnFocusedAnyContent;                   // 0x04B8 (size: 0x10)
    void OnFocusedAnyContent(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    FWBP_PalItemListBlock_COnUnfocusedAnyContent OnUnfocusedAnyContent;               // 0x04C8 (size: 0x10)
    void OnUnfocusedAnyContent(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    FWBP_PalItemListBlock_COnCreatedSlotButton OnCreatedSlotButton;                   // 0x04D8 (size: 0x10)
    void OnCreatedSlotButton(class UWBP_PalItemSlotButtonBase_C* createdWidget);
    FVector2D ChildrenPadding;                                                        // 0x04E8 (size: 0x10)
    FWBP_PalItemListBlock_COnDragDetectedAnyContent OnDragDetectedAnyContent;         // 0x04F8 (size: 0x10)
    void OnDragDetectedAnyContent(class UWBP_PalItemSlotButtonBase_C* Widget);
    FWBP_PalItemListBlock_COnRequestUseItem OnRequestUseItem;                         // 0x0508 (size: 0x10)
    void OnRequestUseItem(class UWBP_PalItemSlotButtonBase_C* Button);
    TArray<EPalItemTypeA> FilterTypeA;                                                // 0x0518 (size: 0x10)
    TArray<EPalItemTypeB> FilterTypeB;                                                // 0x0528 (size: 0x10)

    void OnUpdateSlotOverDisplayNumDefault(class UPalItemSlot* Slot);
    void On Update Slot Internal(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void On Drag Detected Internal(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnRequestUse_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void IsAllSlotEmpty(bool& IsALLEmpty);
    void GetAllItemSlotButtons(TArray<class UWBP_PalItemSlotButtonBase_C*>& slotButtons);
    void EditCreatedSlotWidget(class UWBP_PalItemSlotButtonBase_C* createdSlotWidget, class UWidget*& editedWidget);
    void GetFocusTarget(class UWidget*& NewParam);
    void ClearFiltering();
    void FilteringFromItemTypeB(TArray<EPalItemTypeB>& displayItemTypesB, bool isEmptySlotDIsplay);
    void FilteringFromItemTypeA(TArray<EPalItemTypeA>& displayTypesA, bool isEmptySlotDIsplay);
    void OnUnfocusedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnFocusedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void Focus();
    void SetListName(FText InName);
    void Create Item Slot Widget(class UPalItemSlot* TargetSlot, bool IsEnableQuickMove, bool IgnoreEmptySlot);
    void OnLeftClickedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void OnMiddletClickedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnRightClickedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void OnEndHoveredSlot_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnHoveredSlot_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void ChangeItemSlotButtonClass(TSubclassOf<class UWBP_PalItemSlotButtonBase_C> NewClass);
    void AddItemSlot(class UPalItemSlot* TargetSlot, bool bIsEnableQuickMove, bool bIgnoreEmptySlot);
    void Add Item Container(class UPalItemContainer* TargetContainer, bool IsEnableQuickMove, bool IgnoreEmptySlot, int32 DisplayNumDefault);
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_PalItemListBlock(int32 EntryPoint);
    void OnRequestUseItem__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Button);
    void OnMiddleClickedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnDragDetectedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnCreatedSlotButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* createdWidget);
    void OnUnfocusedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnFocusedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnRightClickedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void OnEndHoveredAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnHoverdAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnLeftClickedAnyContent__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
}; // Size: 0x538

#endif
