#ifndef UE4SS_SDK_WBP_PalCharacterSlotButtonBase_HPP
#define UE4SS_SDK_WBP_PalCharacterSlotButtonBase_HPP

class UWBP_PalCharacterSlotButtonBase_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UCommonButtonBase* My Button;                                               // 0x0458 (size: 0x8)
    class UWBP_PalCharacterSlotBase_C* MyCharacterSlotWidget;                         // 0x0460 (size: 0x8)
    FWBP_PalCharacterSlotButtonBase_COnClickedButton OnClickedButton;                 // 0x0468 (size: 0x10)
    void OnClickedButton(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    FWBP_PalCharacterSlotButtonBase_COnRightClickedButton OnRightClickedButton;       // 0x0478 (size: 0x10)
    void OnRightClickedButton(class UWBP_PalCharacterSlotButtonBase_C* ButtonBase);
    FWBP_PalCharacterSlotButtonBase_COnHoveredButton OnHoveredButton;                 // 0x0488 (size: 0x10)
    void OnHoveredButton(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_PalCharacterSlotButtonBase_COnUnhoveredButton OnUnhoveredButton;             // 0x0498 (size: 0x10)
    void OnUnhoveredButton(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_PalCharacterSlotButtonBase_COnFocusedWidget OnFocusedWidget;                 // 0x04A8 (size: 0x10)
    void OnFocusedWidget(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_PalCharacterSlotButtonBase_COnUnFocusedWidget OnUnFocusedWidget;             // 0x04B8 (size: 0x10)
    void OnUnFocusedWidget(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_PalCharacterSlotButtonBase_COnDragged OnDragged;                             // 0x04C8 (size: 0x10)
    void OnDragged(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_PalCharacterSlotButtonBase_COnDropped OnDropped;                             // 0x04D8 (size: 0x10)
    void OnDropped(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    bool isDragging;                                                                  // 0x04E8 (size: 0x1)
    bool IsEnableDragDrop;                                                            // 0x04E9 (size: 0x1)
    bool IsEnableClick;                                                               // 0x04EA (size: 0x1)
    FWBP_PalCharacterSlotButtonBase_COnSlotSync OnSlotSync;                           // 0x04F0 (size: 0x10)
    void OnSlotSync(class UWBP_PalCharacterSlotButtonBase_C* SelfButton);
    FWBP_PalCharacterSlotButtonBase_COnUpdateSlot OnUpdateSlot;                       // 0x0500 (size: 0x10)
    void OnUpdateSlot(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    FWBP_PalCharacterSlotButtonBase_COnEmptySlot OnEmptySlot;                         // 0x0510 (size: 0x10)
    void OnEmptySlot(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);

    void OnEmptySlot_Binded();
    void SetupBySaveParameter(FPalIndividualCharacterSaveParameter SaveParam);
    void OnUpdateSlot_Binded(class UPalIndividualCharacterSlot* TargetSlot);
    void SetupByCharacterID(FName CharacterID);
    void GetIndividualParameter(class UPalIndividualCharacterParameter*& IndividualParameter);
    void GetIsSlotSync(bool& WaitingSync);
    void On Slot Synced();
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnDropped_Internal();
    void OnDragged_Internal();
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    void Focus();
    void OnRightClicked_Internal();
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnUnhovered_Internal(class UCommonButtonBase* Button);
    void OnHovered_Internal(class UCommonButtonBase* Button);
    void OnClicked_Internal(class UCommonButtonBase* Button);
    void BindButtonEvents();
    void GetTargetSlot(class UPalIndividualCharacterSlot*& TargetSlot);
    void SetupByIndividualId(FPalInstanceID IndividualId);
    void RegisterCharacterSlotWidget(class UWBP_PalCharacterSlotBase_C*& characterSlotWidget);
    void Setup(class UPalIndividualCharacterSlot* TargetSlot);
    void RegisterButton(class UCommonButtonBase*& Button);
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalCharacterSlotButtonBase(int32 EntryPoint);
    void OnEmptySlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void OnUpdateSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void OnSlotSync__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SelfButton);
    void OnDropped__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnDragged__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnRightClickedButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* ButtonBase);
    void OnUnhoveredButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnUnFocusedWidget__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnFocusedWidget__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnHoveredButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnClickedButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
}; // Size: 0x520

#endif
