#ifndef UE4SS_SDK_WBP_Trading_Pal_HPP
#define UE4SS_SDK_WBP_Trading_Pal_HPP

class UWBP_Trading_Pal_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UCanvasPanel* Canvas_Caution;                                               // 0x0480 (size: 0x8)
    class UCanvasPanel* Canvas_SellList;                                              // 0x0488 (size: 0x8)
    class UCanvasPanel* Canvas_SellSetting;                                           // 0x0490 (size: 0x8)
    class UCheckBox* CheckBox_PrivateLock;                                            // 0x0498 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Lock_1;                                       // 0x04A0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_SellSetting_Head;                             // 0x04A8 (size: 0x8)
    class UHorizontalBox* HorizontalBoxSellListHead_;                                 // 0x04B0 (size: 0x8)
    class UImage* Image_ItemSlot_Add;                                                 // 0x04B8 (size: 0x8)
    class UImage* Image_PalSlot_Add;                                                  // 0x04C0 (size: 0x8)
    class UPalEditableTextBox* PalEditableTextBox_CostNum;                            // 0x04C8 (size: 0x8)
    class UWBP_BoxPalList_Party_C* WBP_BoxPalList_Party;                              // 0x04D0 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_Cancel;                             // 0x04D8 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton_Confirm;                              // 0x04E0 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;        // 0x04E8 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x04F0 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_Edit; // 0x04F8 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_Cost;   // 0x0500 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Lock;                     // 0x0508 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Minus;                    // 0x0510 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Plus;                     // 0x0518 (size: 0x8)
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List;                            // 0x0520 (size: 0x8)
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_1;                          // 0x0528 (size: 0x8)
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_2;                          // 0x0530 (size: 0x8)
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_3;                          // 0x0538 (size: 0x8)
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_4;                          // 0x0540 (size: 0x8)
    class UPalMapObjectPalBoothModel* PalBoothModel;                                  // 0x0548 (size: 0x8)
    TArray<class UWBP_PalCommonCharacterSlotButton_C*> PartyPalSlots;                 // 0x0550 (size: 0x10)
    class UWBP_PalCharacterSlotButtonBase_C* CachedLastHoveredSlot;                   // 0x0560 (size: 0x8)
    FPalUIActionBindData ViewDetailInputHandle;                                       // 0x0568 (size: 0x4)
    TArray<class UWBP_Trading_Item_List_C*> TradingList;                              // 0x0570 (size: 0x10)
    FPalPalBoothTradeInfo CurrentTradeInfo;                                           // 0x0580 (size: 0x70)
    FText LastCostNum;                                                                // 0x05F0 (size: 0x18)
    bool Confirmable;                                                                 // 0x0608 (size: 0x1)
    int32 EditingIndex;                                                               // 0x060C (size: 0x4)
    bool SelectingProduct;                                                            // 0x0610 (size: 0x1)
    TEnumAsByte<EPalBoxHoveredSlotType::Type> hoverdSlotType;                         // 0x0611 (size: 0x1)
    class UPalIndividualCharacterHandle* LastHoveredTradePalHandle;                   // 0x0618 (size: 0x8)
    bool EnableEdit;                                                                  // 0x0620 (size: 0x1)
    FPalDataTableRowName_UIInputAction FavoriteShortcutInput;                         // 0x0624 (size: 0x8)
    FPalUIActionBindData FavoriteInputHandle;                                         // 0x062C (size: 0x4)

    void OnSlotUpdate(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void On Favorite Shortcut();
    void OnStoreSlotUpdate(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* LastHandle);
    void Update Sell List();
    class UWidget* CustomNavigation_ToCancel(EUINavigation Navigation);
    void ToPrevFocus();
    void ToNextFocus();
    class UWidget* BP_GetDesiredFocusTarget();
    void Toggle Private Lock();
    void OnPrivateLockChanged(FGuid LockPlayerUId);
    void OnClickedCostSelectSlot(FName StaticItemId);
    void Enable Pal Select(bool EnableBox, bool EnableParty);
    void OnCancelAction();
    void ToSellListPanel();
    void SetCostSettingNum(int32 NewNum);
    void Validate Current Trade Info();
    void OnTradeUnhovered(int32 TradeIndex);
    void OnTradeHovered(int32 TradeIndex);
    void OnClickedRemoveTradeButton(int32 TradeIndex);
    void OnTradeEdit(int32 Index);
    void ToSetSellPanel();
    void Switch Sell Panel(bool ToSellList);
    void OnViewDetailInput();
    void OnUnhoverPalSlot();
    void On Hover Pal Slot(class UPalIndividualCharacterSlot* Slot, class UWBP_PalCharacterSlotButtonBase_C* UISlot);
    void OnUnhoverPartyPalSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void OnHoverPartyPalSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void OnClickSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void Setup();
    void OnSetup();
    void BndEvt__WBP_Trading_Pal_WBP_BoxPalList_Party_K2Node_ComponentBoundEvent_0_OnHoverSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void BndEvt__WBP_Trading_Pal_WBP_BoxPalList_Party_K2Node_ComponentBoundEvent_1_OnUnhoverSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void Destruct();
    void BndEvt__WBP_Trading_Pal_WBP_Menu_btn_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature();
    void OnInitialized();
    void BndEvt__WBP_Trading_Item_PalEditableTextBox_CostNum_K2Node_ComponentBoundEvent_12_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__WBP_Trading_Item_PalEditableTextBox_CostNum_K2Node_ComponentBoundEvent_13_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_Trading_Pal_WBP_CommonButton_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__WBP_Trading_Pal_WBP_PalCommonCharacterSlotButton_Edit_K2Node_ComponentBoundEvent_4_OnClickedButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_Trading_Pal_WBP_BoxPalList_Party_K2Node_ComponentBoundEvent_5_OnCreatedNewSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void BndEvt__WBP_Trading_Pal_WBP_BoxPalList_Party_K2Node_ComponentBoundEvent_6_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void BndEvt__WBP_Trading_Pal_WBP_PalCommonCharacterSlotButton_Edit_K2Node_ComponentBoundEvent_7_OnHoveredButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_Trading_Pal_WBP_PalCommonCharacterSlotButton_Edit_K2Node_ComponentBoundEvent_8_OnUnhoveredButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_Trading_Pal_WBP_PalInGameMenuItemSlotButton_Cost_K2Node_ComponentBoundEvent_9_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_Trading_Pal_WBP_PalInvisibleButton_Plus_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Trading_Pal_WBP_PalInvisibleButton_Minus_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Trading_Pal_WBP_CommonButton_Confirm_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature();
    void BndEvt__WBP_Trading_Pal_WBP_PalInvisibleButton_Lock_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_Trading_Pal(int32 EntryPoint);
}; // Size: 0x630

#endif
