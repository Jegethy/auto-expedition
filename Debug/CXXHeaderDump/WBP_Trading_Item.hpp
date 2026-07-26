#ifndef UE4SS_SDK_WBP_Trading_Item_HPP
#define UE4SS_SDK_WBP_Trading_Item_HPP

class UWBP_Trading_Item_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UCanvasPanel* Canvas_Caution;                                               // 0x0480 (size: 0x8)
    class UCanvasPanel* Canvas_InventoryStorage;                                      // 0x0488 (size: 0x8)
    class UCanvasPanel* Canvas_Sell;                                                  // 0x0490 (size: 0x8)
    class UCanvasPanel* Canvas_SellList;                                              // 0x0498 (size: 0x8)
    class UCanvasPanel* Canvas_SellSetting;                                           // 0x04A0 (size: 0x8)
    class UCheckBox* CheckBox;                                                        // 0x04A8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_ItemStocknum;                                 // 0x04B0 (size: 0x8)
    class UImage* Image_ItemSlot_Add_Cost;                                            // 0x04B8 (size: 0x8)
    class UImage* Image_ItemSlot_Add_Product;                                         // 0x04C0 (size: 0x8)
    class UImage* Image_StoreHover;                                                   // 0x04C8 (size: 0x8)
    class UPalEditableTextBox* PalEditableTextBox_CostNum;                            // 0x04D0 (size: 0x8)
    class UPalEditableTextBox* PalEditableTextBox_ProductNum;                         // 0x04D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemStockNum;                                      // 0x04E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StoreManage;                                       // 0x04E8 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_Cancel;                             // 0x04F0 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton_Confirm;                              // 0x04F8 (size: 0x8)
    class UWBP_IngameMenu_Chest_C* WBP_IngameMenu_Chest;                              // 0x0500 (size: 0x8)
    class UWBP_ItemInfo_ForItemBooth_C* WBP_ItemInfo_ForItemBooth;                    // 0x0508 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlot_Cost;                      // 0x0510 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlot_Product;                   // 0x0518 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0520 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Lock_CheckBox;            // 0x0528 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Minus;                    // 0x0530 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Minus_1;                  // 0x0538 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Plus;                     // 0x0540 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Plus_1;                   // 0x0548 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Sort_TargetContainer;     // 0x0550 (size: 0x8)
    class UWBP_PalItemScrollList_C* WBP_PalItemScrollList;                            // 0x0558 (size: 0x8)
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List;                            // 0x0560 (size: 0x8)
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_1;                          // 0x0568 (size: 0x8)
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_2;                          // 0x0570 (size: 0x8)
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_3;                          // 0x0578 (size: 0x8)
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_4;                          // 0x0580 (size: 0x8)
    class UPalMapObjectItemBoothModel* ItemBoothModel;                                // 0x0588 (size: 0x8)
    class UBP_PalInventoryModel_C* InventoryModel;                                    // 0x0590 (size: 0x8)
    TArray<class UWBP_Trading_Item_List_C*> TradingList;                              // 0x0598 (size: 0x10)
    bool Confirmable;                                                                 // 0x05A8 (size: 0x1)
    FPalItemBoothTradeInfo CurrentTradeInfo;                                          // 0x05AC (size: 0x68)
    FText LastProductNum;                                                             // 0x0618 (size: 0x18)
    FText LastCostNum;                                                                // 0x0630 (size: 0x18)
    TArray<FPalUIActionBindData> StoreContainerActionBindings;                        // 0x0648 (size: 0x10)
    bool LastFocusInInventory;                                                        // 0x0658 (size: 0x1)
    int32 EditingIndex;                                                               // 0x065C (size: 0x4)
    bool SelectingProduct;                                                            // 0x0660 (size: 0x1)
    FTimerHandle DelayUnhoverTimer;                                                   // 0x0668 (size: 0x8)

    void OnStoreSlotUnhovered(class UWBP_PalItemSlotButtonBase_C* Widget);
    void SwitchSlotPanelHoverDisplay(bool IsHover);
    void OnStoreSlotHovered(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnTradeEdit(int32 Index);
    void Sort();
    void Refill();
    void AllGet();
    void FocusRight();
    void FocusLeft();
    void OnTradeUnhovered(int32 TradeIndex);
    void OnTradeHovered(int32 TradeIndex);
    void OnPrivateLockChanged(FGuid LockPlayerUId);
    void Toggle Private Lock();
    void FocusToStoreManage();
    void SwitchStoragePanelVisibility(bool Visible);
    class UWidget* BP_GetDesiredFocusTarget();
    void OnClickedRemoveTradeButton(int32 TradeIndex);
    void On Store Content Updated(class UPalItemContainer* ItemContainer);
    void Update Sell List();
    void SetCostSettingNum(int32 NewNum);
    void ValidateCurrentTradeInfo();
    void OnClickedCostSelectSlot(FName StaticItemId);
    void SetProductSettingNum(int32 NewNum);
    void OnClickedAnyProductSlot(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void Enable Cost Select();
    void Enable Product Select(bool Enable);
    void ToSellListPanel();
    void ToSetSellPanel();
    void SwitchSellPanel(bool ToSellList);
    void Setup();
    void OnCancelAction();
    void OnSetup();
    void Construct();
    void BndEvt__WBP_Trading_Item_WBP_PalInvisibleButton_Sort_TargetContainer_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void BndEvt__WBP_Trading_Item_WBP_CommonButton_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__WBP_Trading_Item_WBP_ItemSlot_Product_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_Trading_Item_WBP_ItemSlot_Cost_K2Node_ComponentBoundEvent_5_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_Trading_Item_WBP_PalInvisibleButton_Plus_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Trading_Item_WBP_PalInvisibleButton_Minus_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Trading_Item_PalEditableTextBox_ProductNum_K2Node_ComponentBoundEvent_8_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_Trading_Item_PalEditableTextBox_ProductNum_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__WBP_Trading_Item_WBP_PalInvisibleButton_Minus_1_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Trading_Item_WBP_PalInvisibleButton_Plus_1_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Trading_Item_PalEditableTextBox_CostNum_K2Node_ComponentBoundEvent_12_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__WBP_Trading_Item_PalEditableTextBox_CostNum_K2Node_ComponentBoundEvent_13_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_Trading_Item_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_6_OnClickedInventorySortButton__DelegateSignature();
    void BndEvt__WBP_Trading_Item_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_7_OnClickedQuickMoveButton__DelegateSignature();
    void BndEvt__WBP_Trading_Item_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_16_OnClickedTargetContainerSortButton__DelegateSignature();
    void BndEvt__WBP_Trading_Item_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_17_OnClickedCloseButton__DelegateSignature();
    void BndEvt__WBP_Trading_Item_WBP_Menu_btn_K2Node_ComponentBoundEvent_18_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_Trading_Item_WBP_PalInvisibleButton_Lock_CheckBox_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Trading_Item_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_20_OnHoveredInventorySlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void BndEvt__WBP_Trading_Item_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_21_OnHoveredTargetContainerSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void BndEvt__WBP_Trading_Item_WBP_CommonButton__K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void DelayUnhoverStorePanel();
    void Destruct();
    void ExecuteUbergraph_WBP_Trading_Item(int32 EntryPoint);
}; // Size: 0x670

#endif
