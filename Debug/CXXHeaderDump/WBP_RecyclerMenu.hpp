#ifndef UE4SS_SDK_WBP_RecyclerMenu_HPP
#define UE4SS_SDK_WBP_RecyclerMenu_HPP

class UWBP_RecyclerMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UCanvasPanel* Canvas_ItemNum;                                               // 0x0280 (size: 0x8)
    class UCanvasPanel* Canvas_ProductStorage;                                        // 0x0288 (size: 0x8)
    class UImage* CircleGauge_Progress;                                               // 0x0290 (size: 0x8)
    class UHorizontalBox* Horizontal_WorkBoost;                                       // 0x0298 (size: 0x8)
    class UImage* Image_CautionIcon;                                                  // 0x02A0 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x02A8 (size: 0x8)
    class UImage* Image_ItemNum_Base;                                                 // 0x02B0 (size: 0x8)
    class UProgressBar* ProgressBar_BoostTimer;                                       // 0x02B8 (size: 0x8)
    class UWBP_PalItemScrollList_C* ScrollList_Boost_Itemslots;                       // 0x02C0 (size: 0x8)
    class UWBP_PalItemScrollList_C* ScrollList_Relic_Itemslots;                       // 0x02C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Head;                                              // 0x02D0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemName;                                          // 0x02D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemNum_Max;                                       // 0x02E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemNum_Now;                                       // 0x02E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_WorkBoostNum;                                      // 0x02F0 (size: 0x8)
    class UWBP_Common_Inventory_C* WBP_Common_Inventory;                              // 0x02F8 (size: 0x8)
    class UWBP_Common_ToggleSwitch_C* WBP_Common_ToggleSwitch_Power;                  // 0x0300 (size: 0x8)
    class UWBP_Common_ToggleSwitch_C* WBP_Common_ToggleSwitch_Supply;                 // 0x0308 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_Filter;                             // 0x0310 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0318 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;                            // 0x0320 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_QuickMove;                // 0x0328 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Sort_TargetContainer;     // 0x0330 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x0338 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_1;                              // 0x0340 (size: 0x8)
    class UPalUIMapObjectRecyclerModel* UIModel;                                      // 0x0348 (size: 0x8)
    FWBP_RecyclerMenu_COnClickClosedButton OnClickClosedButton;                       // 0x0350 (size: 0x10)
    void OnClickClosedButton();
    FWBP_RecyclerMenu_COnClickedTargetContainerSortButton OnClickedTargetContainerSortButton; // 0x0360 (size: 0x10)
    void OnClickedTargetContainerSortButton();
    FWBP_RecyclerMenu_COnHoveredTargetContainerSlot OnHoveredTargetContainerSlot;     // 0x0370 (size: 0x10)
    void OnHoveredTargetContainerSlot();
    FWBP_RecyclerMenu_COnUnhoveredTargetContainerSlot OnUnhoveredTargetContainerSlot; // 0x0380 (size: 0x10)
    void OnUnhoveredTargetContainerSlot();
    class UBP_PalInventoryModel_C* InventoryModel;                                    // 0x0390 (size: 0x8)
    class UPalWorkProgress* CurrentWorkProgress;                                      // 0x0398 (size: 0x8)

    void OnReflectWorkAmount(class UPalWorkProgress* WorkProgress);
    void OnLeftClickedTargetContainerSlot_Boost(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void OnLeftClickedTargetContainerSlot_Relic(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void SetPowerToggleState(bool bIsOn, bool bImmediate);
    void SetCurrentRecycleItem(FName RelicItemId);
    void SetCautionVisible(bool bVisible);
    void SetBuildObjectName(FText Name);
    void SetBoostState(bool bActive, float RemainingRate, float SpeedMultiplier);
    void SetupWork(class UPalWorkProgress* WorkProgress);
    void SetupBoostSlots(class UPalItemContainer* BoostContainer);
    void SetupRelicSlots(class UPalItemContainer* RelicContainer);
    void SetupInventory();
    void SetUIModel(class UPalUIMapObjectRecyclerModel* InUIModel);
    void BndEvt__WBP_RecyclerMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_RecyclerMenu_WBP_Common_ToggleSwitch_Power_K2Node_ComponentBoundEvent_1_OnToggleClicked__DelegateSignature();
    void BndEvt__WBP_RecyclerMenu_WBP_PalInvisibleButton_QuickMove_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_RecyclerMenu_WBP_PalInvisibleButton_Sort_TargetContainer_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_RecyclerMenu_WBP_Common_ToggleSwitch_Supply_K2Node_ComponentBoundEvent_4_OnToggleClicked__DelegateSignature();
    void BndEvt__WBP_RecyclerMenu_WBP_Common_Inventory_K2Node_ComponentBoundEvent_6_OnClickedInventorySortButton__DelegateSignature();
    void BndEvt__WBP_RecyclerMenu_WBP_CommonButton_Filter_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_RecyclerMenu(int32 EntryPoint);
    void OnUnhoveredTargetContainerSlot__DelegateSignature();
    void OnHoveredTargetContainerSlot__DelegateSignature();
    void OnClickedTargetContainerSortButton__DelegateSignature();
    void OnClickClosedButton__DelegateSignature();
}; // Size: 0x3A0

#endif
