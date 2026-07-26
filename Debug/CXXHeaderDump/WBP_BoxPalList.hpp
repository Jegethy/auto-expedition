#ifndef UE4SS_SDK_WBP_BoxPalList_HPP
#define UE4SS_SDK_WBP_BoxPalList_HPP

class UWBP_BoxPalList_C : public UPalUIPalBoxBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A0 (size: 0x8)
    class UWBP_BoxPalListBase_C* WBP_BoxPalListBase;                                  // 0x04A8 (size: 0x8)
    FWBP_BoxPalList_COnLeftClickedSlot OnLeftClickedSlot;                             // 0x04B0 (size: 0x10)
    void OnLeftClickedSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    FWBP_BoxPalList_COnRightClickedSlot OnRightClickedSlot;                           // 0x04C0 (size: 0x10)
    void OnRightClickedSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_BoxPalList_COnHoveredSlot OnHoveredSlot;                                     // 0x04D0 (size: 0x10)
    void OnHoveredSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_BoxPalList_COnUnhoveredSlot OnUnhoveredSlot;                                 // 0x04E0 (size: 0x10)
    void OnUnhoveredSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_BoxPalList_COnUpdatedPage OnUpdatedPage;                                     // 0x04F0 (size: 0x10)
    void OnUpdatedPage(int32 NowPage);
    bool CanDragDrop;                                                                 // 0x0500 (size: 0x1)
    FPalDataTableRowName_UIInputAction NextPageInputAction;                           // 0x0504 (size: 0x8)
    FPalDataTableRowName_UIInputAction PrevPageInputAction;                           // 0x050C (size: 0x8)
    FWBP_BoxPalList_COnCreatedNewSlot OnCreatedNewSlot;                               // 0x0518 (size: 0x10)
    void OnCreatedNewSlot(class UWBP_PalCharacterSlotButtonBase_C* NewSlot);
    FWBP_BoxPalList_COnSelectPalBoxPage OnSelectPalBoxPage;                           // 0x0528 (size: 0x10)
    void OnSelectPalBoxPage(int32 Page);
    FWBP_BoxPalList_COnSorted OnSorted;                                               // 0x0538 (size: 0x10)
    void OnSorted();
    FWBP_BoxPalList_COnUpdateSlot OnUpdateSlot;                                       // 0x0548 (size: 0x10)
    void OnUpdateSlot(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    TSoftObjectPtr<UWBP_PalCharacterSlotButtonBase_C> LastHoveredSlot;                // 0x0558 (size: 0x30)
    bool bDisplayBanMarkInExpedition;                                                 // 0x0588 (size: 0x1)
    FWBP_BoxPalList_COnSyncedSlot OnSyncedSlot;                                       // 0x0590 (size: 0x10)
    void OnSyncedSlot(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);

    void DisplayBanMark_InExpedition();
    void UpdateAllSlotFiltering();
    void UpdateSearchButton();
    void UpdateSlotFiltering(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void GetLastHoveredFocusTarget(class UWidget*& TargetWidget);
    void OnClosedSearchWindow(class UPalHUDDispatchParameterBase* Param);
    void OnClosedSortWindow(class UPalHUDDispatchParameterBase* Param);
    void Set Enable Page Control Action(bool bIsEnableAction);
    void GetCurrentBoxSlots(TArray<class UWBP_PalCommonCharacterSlotButton_C*>& Slots);
    void FindWidgetBySlot(class UPalIndividualCharacterSlot* Slot, class UWBP_PalCharacterSlotButtonBase_C*& Widget);
    void Setup();
    void Construct();
    void OnUpdatePagePalBoxList(int32 NowPage, const TArray<class UPalIndividualCharacterSlot*>& SlotList);
    void BndEvt__WBP_BoxPalList_WBP_BoxPalListBase_K2Node_ComponentBoundEvent_2_OnUpdatedPage__DelegateSignature(int32 NowPage);
    void BndEvt__WBP_BoxPalList_WBP_BoxPalListBase_K2Node_ComponentBoundEvent_3_OnClickedSortButton__DelegateSignature();
    void BndEvt__WBP_BoxPalList_WBP_BoxPalListBase_K2Node_ComponentBoundEvent_4_OnCreatedNewSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* NewSlot);
    void BndEvt__WBP_BoxPalList_WBP_BoxPalListBase_K2Node_ComponentBoundEvent_5_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_BoxPalList_WBP_BoxPalListBase_K2Node_ComponentBoundEvent_6_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_BoxPalList_WBP_BoxPalListBase_K2Node_ComponentBoundEvent_7_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_BoxPalList_WBP_BoxPalListBase_K2Node_ComponentBoundEvent_8_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_BoxPalList_WBP_BoxPalListBase_K2Node_ComponentBoundEvent_0_OnUpdateSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void Destruct();
    void BndEvt__WBP_BoxPalList_WBP_BoxPalListBase_K2Node_ComponentBoundEvent_1_OnClickedSearchButton__DelegateSignature();
    void BndEvt__WBP_BoxPalList_WBP_BoxPalListBase_K2Node_ComponentBoundEvent_9_OnSlotSynced__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void ExecuteUbergraph_WBP_BoxPalList(int32 EntryPoint);
    void OnSyncedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void OnUpdateSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void OnSorted__DelegateSignature();
    void OnSelectPalBoxPage__DelegateSignature(int32 Page);
    void OnCreatedNewSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* NewSlot);
    void OnUpdatedPage__DelegateSignature(int32 NowPage);
    void OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
}; // Size: 0x5A0

#endif
