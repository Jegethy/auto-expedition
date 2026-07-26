#ifndef UE4SS_SDK_WBP_IngameMenu_ItemSearchList_HPP
#define UE4SS_SDK_WBP_IngameMenu_ItemSearchList_HPP

class UWBP_IngameMenu_ItemSearchList_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UCommonTileView* CommonTileView;                                            // 0x0458 (size: 0x8)
    class UImage* FrameFlare;                                                         // 0x0460 (size: 0x8)
    class UCanvasPanel* HorizontalBox_SearchName;                                     // 0x0468 (size: 0x8)
    class UPalEditableTextBox* PalEditableTextBox_Search;                             // 0x0470 (size: 0x8)
    class UBP_PalTextBlock_C* Text_TargetContainerName;                               // 0x0478 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_Filter;                             // 0x0480 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_SerchName;                // 0x0488 (size: 0x8)
    TMap<class FName, class UWBP_PalInGameMenuItemSlotButton_C*> CurrentViewingItemInfoMap; // 0x0490 (size: 0x50)
    FWBP_IngameMenu_ItemSearchList_COnRightClickSlot OnRightClickSlot;                // 0x04E0 (size: 0x10)
    void OnRightClickSlot(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    TArray<FName> Current Filter;                                                     // 0x04F0 (size: 0x10)
    FText CurrentNameFilter;                                                          // 0x0500 (size: 0x18)
    class UWBP_PalItemSlotButtonBase_C* LastHoverSlot;                                // 0x0518 (size: 0x8)
    FWBP_IngameMenu_ItemSearchList_COnSlotHovered OnSlotHovered;                      // 0x0520 (size: 0x10)
    void OnSlotHovered();
    TMap<class FName, class UBP_ItemSlotEntryData_C*> CurrentItemMap;                 // 0x0530 (size: 0x50)
    bool Remove Essential;                                                            // 0x0580 (size: 0x1)
    bool bCanSearchByItemId;                                                          // 0x0581 (size: 0x1)

    void RefreshForFilter();
    void RefreshTileViewItem();
    void GetCurrentFilterResult(const FName StaticItemId, bool& Enabled);
    void GetLastFocusSlot(class UWidget*& Slot);
    void FocusToFilterButton();
    void Apply Filter to Item(class UPalStaticItemDataBase* ItemData, bool& Visible);
    void Apply Filter(TArray<FName>& Types);
    void On Click Internal(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void UpdateTargetSlot(FPalItemAndNum ItemInfo);
    void AddTargetSlot(FPalItemAndNum ItemInfo);
    void RemoveTargetSlot(FName ItemInfo);
    void Update Item Stack Info(TArray<FPalItemAndNum>& StackInfo, TArray<FName>& IdArray, bool& SlotUpdated);
    void Construct();
    void BndEvt__WBP_IngameMenu_ItemSearchList_WBP_CommonButton_Filter_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_ItemSearchList_PalEditableTextBox_Search_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_IngameMenu_ItemSearchList_WBP_PalInvisibleButton_SerchName_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnHoverSlot(class UWBP_PalItemSlotButtonBase_C* Slot);
    void BndEvt__WBP_IngameMenu_ItemSearchList_WBP_PalInvisibleButton_SerchName_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_ItemSearchList_WBP_PalInvisibleButton_SerchName_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_ItemSearchList_CommonTileView_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
    void BndEvt__WBP_IngameMenu_ItemSearchList_CommonTileView_K2Node_ComponentBoundEvent_6_OnListEntryReleasedDynamic__DelegateSignature(class UUserWidget* Widget);
    void Destruct();
    void ExecuteUbergraph_WBP_IngameMenu_ItemSearchList(int32 EntryPoint);
    void OnSlotHovered__DelegateSignature();
    void OnRightClickSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
}; // Size: 0x582

#endif
