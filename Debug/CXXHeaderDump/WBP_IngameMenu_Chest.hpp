#ifndef UE4SS_SDK_WBP_IngameMenu_Chest_HPP
#define UE4SS_SDK_WBP_IngameMenu_Chest_HPP

class UWBP_IngameMenu_Chest_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_OFF;                                                  // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_ON;                                                   // 0x0288 (size: 0x8)
    class UCanvasPanel* Canvas_Setting;                                               // 0x0290 (size: 0x8)
    class UCanvasPanel* Canvas_SortButton_TargetContainer;                            // 0x0298 (size: 0x8)
    class UCanvasPanel* Canvas_TargetContainer;                                       // 0x02A0 (size: 0x8)
    class UHorizontalBox* Horizontal_Text_On;                                         // 0x02A8 (size: 0x8)
    class UOverlay* Overlay_Supply_Off;                                               // 0x02B0 (size: 0x8)
    class UOverlay* Overlay_Supply_On;                                                // 0x02B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_TargetContainerName;                               // 0x02C0 (size: 0x8)
    class UWBP_Common_Inventory_C* WBP_Common_Inventory;                              // 0x02C8 (size: 0x8)
    class UWBP_CommonButton_Activation_C* WBP_CommonButton_Activation_ChestSetting;   // 0x02D0 (size: 0x8)
    class UWBP_InventoryEquipment_InvisibleActionButton_C* WBP_InventoryEquipment_ChestBack; // 0x02D8 (size: 0x8)
    class UWBP_InventoryEquipment_InvisibleActionButton_C* WBP_InventoryEquipment_InvisibleDropButton; // 0x02E0 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x02E8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_QuickMove;                // 0x02F0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Sort_TargetContainer;     // 0x02F8 (size: 0x8)
    class UWBP_PalItemScrollList_C* WBP_PalItemScrollList;                            // 0x0300 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x0308 (size: 0x8)
    class UBP_PalInventoryModel_C* Model;                                             // 0x0310 (size: 0x8)
    FWBP_IngameMenu_Chest_COnClickedInventorySortButton OnClickedInventorySortButton; // 0x0318 (size: 0x10)
    void OnClickedInventorySortButton();
    FWBP_IngameMenu_Chest_COnClickedQuickMoveButton OnClickedQuickMoveButton;         // 0x0328 (size: 0x10)
    void OnClickedQuickMoveButton();
    FWBP_IngameMenu_Chest_COnClickedTargetContainerSortButton OnClickedTargetContainerSortButton; // 0x0338 (size: 0x10)
    void OnClickedTargetContainerSortButton();
    FWBP_IngameMenu_Chest_COnHoveredInventorySlot OnHoveredInventorySlot;             // 0x0348 (size: 0x10)
    void OnHoveredInventorySlot(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    FWBP_IngameMenu_Chest_COnUnhoveredInventorySlot OnUnhoveredInventorySlot;         // 0x0358 (size: 0x10)
    void OnUnhoveredInventorySlot();
    FWBP_IngameMenu_Chest_COnHoveredTargetContainerSlot OnHoveredTargetContainerSlot; // 0x0368 (size: 0x10)
    void OnHoveredTargetContainerSlot(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    FWBP_IngameMenu_Chest_COnUnhoveredTargetContainerSlot OnUnhoveredTargetContainerSlot; // 0x0378 (size: 0x10)
    void OnUnhoveredTargetContainerSlot();
    FWBP_IngameMenu_Chest_COnClickedCloseButton OnClickedCloseButton;                 // 0x0388 (size: 0x10)
    void OnClickedCloseButton();
    FWBP_IngameMenu_Chest_COnClickedPreferenceButton OnClickedPreferenceButton;       // 0x0398 (size: 0x10)
    void OnClickedPreferenceButton();
    FWBP_IngameMenu_Chest_COnChestBackClicked OnChestBackClicked;                     // 0x03A8 (size: 0x10)
    void OnChestBackClicked();
    class UPalItemContainer* TargetContainer;                                         // 0x03B8 (size: 0x8)
    int32 Display Slot Num Default;                                                   // 0x03C0 (size: 0x4)
    bool CanFilterSetting;                                                            // 0x03C4 (size: 0x1)
    FWBP_IngameMenu_Chest_COnClickFilterSettingButton OnClickFilterSettingButton;     // 0x03C8 (size: 0x10)
    void OnClickFilterSettingButton();

    void SetEnableSortButton(bool bEnable);
    void OnContainerFilterChanged(class UPalItemContainer* TargetContainer);
    void SetCanChestSetting(bool CanSetting);
    void PlayItemMoveSound();
    class UWidget* CustomNavi_ToTargetContainerTop(EUINavigation Navigation);
    class UWidget* CustomNavi_ToPreferenceOrCloseButton(EUINavigation Navigation);
    void GetTargetContainerLastHoveredFocusTarget(class UWidget*& Widget);
    void GetInventoryLastHoveredFocusTarget(class UWidget*& Widget);
    class UWidget* CustomNavi_ToTargetContainerSortButton(EUINavigation Navigation);
    class UWidget* CustomNavi_ToCloseButton(EUINavigation Navigation);
    void GetTargetContainerTopFocustTarget(class UWidget*& FocusTarget);
    void Get Inventory Top Focust Target(class UWidget*& FocusTarget);
    void OnLeftClickedTargetContainerSLot(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void Setup(class UBP_PalInventoryModel_C* Model, class UPalItemContainer* TargetContainer, int32 DisplaySlotNumDefault);
    void SetTagetContainerDisplayName(FText TargetContainerName);
    void Setup Target Item Container(class UPalItemContainer* TargetContainer);
    void Filtering Inventory by Inventory Type(TArray<EPalPlayerInventoryType>& inventoryType);
    void Construct();
    void BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_QuickMove_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_Sort_TargetContainer_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Chest_WBP_PalItemScrollList_K2Node_ComponentBoundEvent_3_OnHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void BndEvt__WBP_IngameMenu_Chest_WBP_PalItemScrollList_K2Node_ComponentBoundEvent_6_OnEndHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void BndEvt__WBP_IngameMenu_Chest_WBP_Menu_btn_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_WBP_Common_Inventory_K2Node_ComponentBoundEvent_8_OnHoveredInventorySlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void BndEvt__WBP_IngameMenu_Chest_WBP_Common_Inventory_K2Node_ComponentBoundEvent_9_OnUnhoveredInventorySlot__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_WBP_Common_Inventory_K2Node_ComponentBoundEvent_10_OnClickedInventorySortButton__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_WBP_InventoryEquipment_InvisibleDropButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_WBP_PalItemScrollList_K2Node_ComponentBoundEvent_5_OnLeftClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void BndEvt__WBP_IngameMenu_Chest_WBP_Common_Inventory_K2Node_ComponentBoundEvent_11_OnLeftClickSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void Destruct();
    void BndEvt__WBP_IngameMenu_Chest_WBP_InventoryEquipment_InvisibleDropButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_WBP_CommonButton_Activation_ChestSetting_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_IngameMenu_Chest(int32 EntryPoint);
    void OnClickFilterSettingButton__DelegateSignature();
    void OnChestBackClicked__DelegateSignature();
    void OnClickedPreferenceButton__DelegateSignature();
    void OnClickedCloseButton__DelegateSignature();
    void OnUnhoveredTargetContainerSlot__DelegateSignature();
    void OnHoveredTargetContainerSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void OnUnhoveredInventorySlot__DelegateSignature();
    void OnHoveredInventorySlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void OnClickedTargetContainerSortButton__DelegateSignature();
    void OnClickedQuickMoveButton__DelegateSignature();
    void OnClickedInventorySortButton__DelegateSignature();
}; // Size: 0x3D8

#endif
