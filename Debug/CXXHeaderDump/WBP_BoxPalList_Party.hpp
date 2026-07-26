#ifndef UE4SS_SDK_WBP_BoxPalList_Party_HPP
#define UE4SS_SDK_WBP_BoxPalList_Party_HPP

class UWBP_BoxPalList_Party_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UCanvasPanel* Canvas_PalBox;                                                // 0x0280 (size: 0x8)
    class UWBP_BoxPalList_C* WBP_BoxPalList;                                          // 0x0288 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton;      // 0x0290 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_1;    // 0x0298 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_2;    // 0x02A0 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_3;    // 0x02A8 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_4;    // 0x02B0 (size: 0x8)
    TArray<class UWBP_PalCommonCharacterSlotButton_C*> PartySlots;                    // 0x02B8 (size: 0x10)
    FWBP_BoxPalList_Party_COnLeftClickedSlot OnLeftClickedSlot;                       // 0x02C8 (size: 0x10)
    void OnLeftClickedSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    FWBP_BoxPalList_Party_COnRightClickedSlot OnRightClickedSlot;                     // 0x02D8 (size: 0x10)
    void OnRightClickedSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    FWBP_BoxPalList_Party_COnHoverSlot OnHoverSlot;                                   // 0x02E8 (size: 0x10)
    void OnHoverSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    FWBP_BoxPalList_Party_COnUnhoverSlot OnUnhoverSlot;                               // 0x02F8 (size: 0x10)
    void OnUnhoverSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    FWBP_BoxPalList_Party_COnCreatedNewSlot OnCreatedNewSlot;                         // 0x0308 (size: 0x10)
    void OnCreatedNewSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    FWBP_BoxPalList_Party_COnPageUpdated OnPageUpdated;                               // 0x0318 (size: 0x10)
    void OnPageUpdated(int32 Page);
    FPalDataTableRowName_UIInputAction OverrideLeftPageInputAction;                   // 0x0328 (size: 0x8)
    FPalDataTableRowName_UIInputAction OverrideRightPageInputAction;                  // 0x0330 (size: 0x8)

    void ToggleFavorite(class UPalIndividualCharacterSlot* TargetSlot);
    void OnClickSlot_Internal(class UWBP_PalCharacterSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void OnUnhoverSlot_Internal(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void OnHoverSlot_Internal(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void Setup Party Slot();
    void GetLastFocusBoxSlot(class UWidget*& TargetWidget);
    void SelectSlot(class UPalIndividualCharacterSlot* Slot, EPalItemSlotPressType PressType);
    void TryMoveToBox(class UPalIndividualCharacterSlot* Slot);
    void GetFirstFocusPartyButton(class UWidget*& Widget);
    void GetPartySlots(TArray<class UWBP_PalCommonCharacterSlotButton_C*>& PartySlots);
    void OnInitialized();
    void BndEvt__WBP_BoxPalList_Party_WBP_BoxPalList_K2Node_ComponentBoundEvent_0_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_BoxPalList_Party_WBP_BoxPalList_K2Node_ComponentBoundEvent_1_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_BoxPalList_Party_WBP_BoxPalList_K2Node_ComponentBoundEvent_2_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_BoxPalList_Party_WBP_BoxPalList_K2Node_ComponentBoundEvent_3_OnCreatedNewSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* NewSlot);
    void BndEvt__WBP_BoxPalList_Party_WBP_BoxPalList_K2Node_ComponentBoundEvent_4_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_BoxPalList_Party_WBP_BoxPalList_K2Node_ComponentBoundEvent_5_OnUpdatedPage__DelegateSignature(int32 NowPage);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_BoxPalList_Party(int32 EntryPoint);
    void OnPageUpdated__DelegateSignature(int32 Page);
    void OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void OnCreatedNewSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void OnUnhoverSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void OnHoverSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
}; // Size: 0x338

#endif
