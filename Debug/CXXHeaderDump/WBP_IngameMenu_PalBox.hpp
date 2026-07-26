#ifndef UE4SS_SDK_WBP_IngameMenu_PalBox_HPP
#define UE4SS_SDK_WBP_IngameMenu_PalBox_HPP

class UWBP_IngameMenu_PalBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0288 (size: 0x8)
    class UCanvasPanel* Canvas_PalBox;                                                // 0x0290 (size: 0x8)
    class UCanvasPanel* Canvas_PalCamp;                                               // 0x0298 (size: 0x8)
    class UButton* CloseButton;                                                       // 0x02A0 (size: 0x8)
    class UImage* Image;                                                              // 0x02A8 (size: 0x8)
    class UImage* Image_4;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_5;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_6;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_7;                                                            // 0x02C8 (size: 0x8)
    class UImage* Image_8;                                                            // 0x02D0 (size: 0x8)
    class UImage* Image_9;                                                            // 0x02D8 (size: 0x8)
    class UImage* Image_10;                                                           // 0x02E0 (size: 0x8)
    class UImage* Image_11;                                                           // 0x02E8 (size: 0x8)
    class UImage* Image_12;                                                           // 0x02F0 (size: 0x8)
    class UImage* Image_13;                                                           // 0x02F8 (size: 0x8)
    class UImage* Image_14;                                                           // 0x0300 (size: 0x8)
    class UImage* Image_15;                                                           // 0x0308 (size: 0x8)
    class UImage* Image_16;                                                           // 0x0310 (size: 0x8)
    class UImage* Image_17;                                                           // 0x0318 (size: 0x8)
    class UImage* Image_18;                                                           // 0x0320 (size: 0x8)
    class UImage* Image_19;                                                           // 0x0328 (size: 0x8)
    class UImage* Image_20;                                                           // 0x0330 (size: 0x8)
    class UImage* Image_21;                                                           // 0x0338 (size: 0x8)
    class UImage* Image_104;                                                          // 0x0340 (size: 0x8)
    class UImage* Image_Frame;                                                        // 0x0348 (size: 0x8)
    class USizeBox* SizeBox_PresetButton;                                             // 0x0350 (size: 0x8)
    class UBP_PalTextBlock_C* Text_BaseCampName;                                      // 0x0358 (size: 0x8)
    class UWBP_PalCharacterScrollList_C* WBP_BaseCampPalList;                         // 0x0360 (size: 0x8)
    class UWBP_BoxPalList_C* WBP_BoxPalList;                                          // 0x0368 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton_Preset;                               // 0x0370 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_Return;                             // 0x0378 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;        // 0x0380 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalList_C* WBP_IngameMenu_PalBox_PalList_0;          // 0x0388 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalList_C* WBP_IngameMenu_PalBox_PalList_1;          // 0x0390 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalList_C* WBP_IngameMenu_PalBox_PalList_2;          // 0x0398 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalList_C* WBP_IngameMenu_PalBox_PalList_3;          // 0x03A0 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalList_C* WBP_IngameMenu_PalBox_PalList_4;          // 0x03A8 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x03B0 (size: 0x8)
    TArray<class UWBP_IngameMenu_PalBox_PalList_C*> PartyPalDetails;                  // 0x03B8 (size: 0x10)
    FWBP_IngameMenu_PalBox_COnClickedPartySlot OnClickedPartySlot;                    // 0x03C8 (size: 0x10)
    void OnClickedPartySlot(class UPalIndividualCharacterSlot* TargetSlot);
    FWBP_IngameMenu_PalBox_COnClickedPalBoxPal OnClickedPalBoxPal;                    // 0x03D8 (size: 0x10)
    void OnClickedPalBoxPal(class UPalIndividualCharacterSlot* Slot, EPalItemSlotPressType PressType);
    FWBP_IngameMenu_PalBox_COnClickedBaseCampPal OnClickedBaseCampPal;                // 0x03E8 (size: 0x10)
    void OnClickedBaseCampPal(class UPalIndividualCharacterSlot* Slot, EPalItemSlotPressType PressType);
    FWBP_IngameMenu_PalBox_COnClickedPalBoxNextPage OnClickedPalBoxNextPage;          // 0x03F8 (size: 0x10)
    void OnClickedPalBoxNextPage();
    FWBP_IngameMenu_PalBox_COnClickedPalBoxPrevPage OnClickedPalBoxPrevPage;          // 0x0408 (size: 0x10)
    void OnClickedPalBoxPrevPage();
    FWBP_IngameMenu_PalBox_COnClickedCloseButton OnClickedCloseButton;                // 0x0418 (size: 0x10)
    void OnClickedCloseButton();
    FWBP_IngameMenu_PalBox_COnAnySlotHovered OnAnySlotHovered;                        // 0x0428 (size: 0x10)
    void OnAnySlotHovered(class UPalIndividualCharacterSlot* Slot);
    FWBP_IngameMenu_PalBox_COnAnySlotUnhovered OnAnySlotUnhovered;                    // 0x0438 (size: 0x10)
    void OnAnySlotUnhovered();
    FWBP_IngameMenu_PalBox_COnHoveredPartySlot OnHoveredPartySlot;                    // 0x0448 (size: 0x10)
    void OnHoveredPartySlot(class UPalIndividualCharacterSlot* Slot);
    FWBP_IngameMenu_PalBox_COnHoveredBoxSlot OnHoveredBoxSlot;                        // 0x0458 (size: 0x10)
    void OnHoveredBoxSlot(class UPalIndividualCharacterSlot* Slot);
    FWBP_IngameMenu_PalBox_COnHoveredWorkerSlot OnHoveredWorkerSlot;                  // 0x0468 (size: 0x10)
    void OnHoveredWorkerSlot(class UPalIndividualCharacterSlot* Slot);
    FDataTableRowHandle BoxNameMsgID;                                                 // 0x0478 (size: 0x10)
    FWBP_IngameMenu_PalBox_COnRightClickedBoxSlot OnRightClickedBoxSlot;              // 0x0488 (size: 0x10)
    void OnRightClickedBoxSlot(class UPalIndividualCharacterSlot* Slot);
    FWBP_IngameMenu_PalBox_COnRightClickedWorkerSlot OnRightClickedWorkerSlot;        // 0x0498 (size: 0x10)
    void OnRightClickedWorkerSlot(class UPalIndividualCharacterSlot* Slot);
    bool bIsEnableDragDropControl;                                                    // 0x04A8 (size: 0x1)
    FWBP_IngameMenu_PalBox_COnSelectPalBoxPage OnSelectPalBoxPage;                    // 0x04B0 (size: 0x10)
    void OnSelectPalBoxPage(int32 Page);
    FWBP_IngameMenu_PalBox_COnSlotCreated OnSlotCreated;                              // 0x04C0 (size: 0x10)
    void OnSlotCreated(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    FWBP_IngameMenu_PalBox_COnReturnBox OnReturnBox;                                  // 0x04D0 (size: 0x10)
    void OnReturnBox();
    FWBP_IngameMenu_PalBox_COnCampEmptySlot OnCampEmptySlot;                          // 0x04E0 (size: 0x10)
    void OnCampEmptySlot(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);

    class UWidget* Custom Navigation to Party First(EUINavigation Navigation);
    class UWidget* Custom Navigation to List Bottom(EUINavigation Navigation);
    void SetEnableDragDrop(bool bIsEnableDragDrop);
    void FocusToWorkerTopSlot();
    void FocusToBoxTopSlot();
    void FocusToPartyTopSlot();
    void Display Pal Detail(class UPalIndividualCharacterSlot* Slot, TEnumAsByte<EPalBoxHoveredSlotType::Type> slotType);
    void SetBaseCampPalList(TArray<class UPalIndividualCharacterSlot*>& Slots);
    void GetFocusTarget(class UWidget*& TargetWidget);
    void Setup Party Pal();
    void Setup(class UPalHUDDispatchParameter_PalBox* Parameter);
    void AnmEvent_Open();
    void AnmEvent_Close();
    void OnInitialized();
    void OnClickedPartySlotInternal(class UPalIndividualCharacterSlot* TargetSlot);
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_0_OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* createdSlot);
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_3_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void OnHoveredPartySlot_Internal(class UPalIndividualCharacterSlot* Slot);
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_8_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnUnhoveredPartySlot_Internal();
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_5_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_10_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_InGameMainMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalList_K2Node_ComponentBoundEvent_6_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalList_K2Node_ComponentBoundEvent_13_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalList_K2Node_ComponentBoundEvent_14_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalList_K2Node_ComponentBoundEvent_16_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalList_K2Node_ComponentBoundEvent_17_OnSelectPalBoxPage__DelegateSignature(int32 Page);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalList_K2Node_ComponentBoundEvent_1_OnCreatedNewSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* NewSlot);
    void BndEvt__WBP_IngameMenu_PalBox_WBP_CommonButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_PalBox_WBP_CommonButton_Return_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_9_OnEmptySlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void ExecuteUbergraph_WBP_IngameMenu_PalBox(int32 EntryPoint);
    void OnCampEmptySlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void OnReturnBox__DelegateSignature();
    void OnSlotCreated__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void OnSelectPalBoxPage__DelegateSignature(int32 Page);
    void OnRightClickedWorkerSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void OnRightClickedBoxSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void OnAnySlotUnhovered__DelegateSignature();
    void OnHoveredWorkerSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void OnHoveredBoxSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void OnHoveredPartySlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void OnAnySlotHovered__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void OnClickedCloseButton__DelegateSignature();
    void OnClickedPalBoxPrevPage__DelegateSignature();
    void OnClickedPalBoxNextPage__DelegateSignature();
    void OnClickedBaseCampPal__DelegateSignature(class UPalIndividualCharacterSlot* Slot, EPalItemSlotPressType PressType);
    void OnClickedPalBoxPal__DelegateSignature(class UPalIndividualCharacterSlot* Slot, EPalItemSlotPressType PressType);
    void OnClickedPartySlot__DelegateSignature(class UPalIndividualCharacterSlot* TargetSlot);
}; // Size: 0x4F0

#endif
