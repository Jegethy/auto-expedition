#ifndef UE4SS_SDK_WBP_PalItemSlotButtonBase_HPP
#define UE4SS_SDK_WBP_PalItemSlotButtonBase_HPP

class UWBP_PalItemSlotButtonBase_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UCommonButtonBase* My Button;                                               // 0x0458 (size: 0x8)
    class UWBP_PalItemSlotBase_C* MyItemSlotWidget;                                   // 0x0460 (size: 0x8)
    FWBP_PalItemSlotButtonBase_COnClickedButton OnClickedButton;                      // 0x0468 (size: 0x10)
    void OnClickedButton(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    FWBP_PalItemSlotButtonBase_COnMiddleClickedButton OnMiddleClickedButton;          // 0x0478 (size: 0x10)
    void OnMiddleClickedButton(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    FWBP_PalItemSlotButtonBase_COnRightClickedButton OnRightClickedButton;            // 0x0488 (size: 0x10)
    void OnRightClickedButton(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    FWBP_PalItemSlotButtonBase_COnHoveredButton OnHoveredButton;                      // 0x0498 (size: 0x10)
    void OnHoveredButton(class UWBP_PalItemSlotButtonBase_C* Widget);
    FWBP_PalItemSlotButtonBase_COnUnhoveredButton OnUnhoveredButton;                  // 0x04A8 (size: 0x10)
    void OnUnhoveredButton(class UWBP_PalItemSlotButtonBase_C* Widget);
    FWBP_PalItemSlotButtonBase_COnFocusedWidget OnFocusedWidget;                      // 0x04B8 (size: 0x10)
    void OnFocusedWidget(class UWBP_PalItemSlotButtonBase_C* Widget);
    FWBP_PalItemSlotButtonBase_COnUnFocusedWidget OnUnFocusedWidget;                  // 0x04C8 (size: 0x10)
    void OnUnFocusedWidget(class UWBP_PalItemSlotButtonBase_C* Widget);
    FWBP_PalItemSlotButtonBase_COnDragged OnDragged;                                  // 0x04D8 (size: 0x10)
    void OnDragged(class UWBP_PalItemSlotButtonBase_C* Widget);
    FWBP_PalItemSlotButtonBase_COnDropped OnDropped;                                  // 0x04E8 (size: 0x10)
    void OnDropped(class UWBP_PalItemSlotButtonBase_C* Widget);
    FWBP_PalItemSlotButtonBase_COnDropCanceled OnDropCanceled;                        // 0x04F8 (size: 0x10)
    void OnDropCanceled(class UWBP_PalItemSlotButtonBase_C* Widget);
    bool IsEnableDragDrop;                                                            // 0x0508 (size: 0x1)
    FWBP_PalItemSlotButtonBase_COnLiftedButton OnLiftedButton;                        // 0x0510 (size: 0x10)
    void OnLiftedButton(int32 LiftNum, class UWBP_PalItemSlotButtonBase_C* Widget);
    FWBP_PalItemSlotButtonBase_COnFinishLiftedButton OnFinishLiftedButton;            // 0x0520 (size: 0x10)
    void OnFinishLiftedButton(class UWBP_PalItemSlotButtonBase_C* Widget);
    bool IsDisplayingItemInfo;                                                        // 0x0530 (size: 0x1)
    bool IsDisplayCommonItemInfoWindow;                                               // 0x0531 (size: 0x1)
    FWBP_PalItemSlotButtonBase_COnSetEmptySlot OnSetEmptySlot;                        // 0x0538 (size: 0x10)
    void OnSetEmptySlot();
    FWBP_PalItemSlotButtonBase_COnSetValidSlot OnSetValidSlot;                        // 0x0548 (size: 0x10)
    void OnSetValidSlot();
    bool IsEnableSpreadLift;                                                          // 0x0558 (size: 0x1)
    bool IsUsableSlot;                                                                // 0x0559 (size: 0x1)
    FPalDataTableRowName_UIInputAction HalfLiftAction_ForPad;                         // 0x055C (size: 0x8)
    FPalDataTableRowName_UIInputAction UseAction_ForPad;                              // 0x0564 (size: 0x8)
    FPalDataTableRowName_UIInputAction UseAction_Hold;                                // 0x056C (size: 0x8)
    FPalUIActionBindData HalfLiftActionHandle_ForPad;                                 // 0x0574 (size: 0x4)
    FPalUIActionBindData UseActionHandle_ForPad;                                      // 0x0578 (size: 0x4)
    FPalUIActionBindData UseActionHandle_Hold;                                        // 0x057C (size: 0x4)
    bool bIsLongPressUsableSLot;                                                      // 0x0580 (size: 0x1)
    bool IsSupportedQuickMove;                                                        // 0x0581 (size: 0x1)
    bool IsEnableQuickEquip;                                                          // 0x0582 (size: 0x1)
    FWBP_PalItemSlotButtonBase_COnNotifyDurability OnNotifyDurability;                // 0x0588 (size: 0x10)
    void OnNotifyDurability(double MaxDurability, double NowDurability, class UWBP_PalItemSlotButtonBase_C* SelfWidget);
    FWBP_PalItemSlotButtonBase_COnCorruptionUpdate OnCorruptionUpdate;                // 0x0598 (size: 0x10)
    void OnCorruptionUpdate();
    FWBP_PalItemSlotButtonBase_COnRequestUseItem OnRequestUseItem;                    // 0x05A8 (size: 0x10)
    void OnRequestUseItem(class UWBP_PalItemSlotButtonBase_C* Button);
    bool IsShowPrice;                                                                 // 0x05B8 (size: 0x1)
    FWBP_PalItemSlotButtonBase_COnTriedEquipSlot OnTriedEquipSlot;                    // 0x05C0 (size: 0x10)
    void OnTriedEquipSlot(class UWBP_PalItemSlotButtonBase_C* Widget);
    FWBP_PalItemSlotButtonBase_COnUpdateSlot OnUpdateSlot;                            // 0x05D0 (size: 0x10)
    void OnUpdateSlot(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    FText Override Num Count Text;                                                    // 0x05E0 (size: 0x18)
    bool bShouldDisplayItemInfo;                                                      // 0x05F8 (size: 0x1)
    FTimerHandle LongRightClickTimer;                                                 // 0x0600 (size: 0x8)
    bool bWaitingLongRightClick;                                                      // 0x0608 (size: 0x1)

    void OnLongRightClick();
    void OnLongPressUseItem();
    void GetItemAndNum(FPalItemAndNum& ItemAndNum);
    void GetDisplayDragItemNum(int32& DisplayNum);
    void TryEquipSlot();
    void OnUpdateSlot_Internal(class UPalItemSlot* TargetSlot);
    void On Use or Move Slot Input Pad();
    void OnNotifyDurability_Internal(double MaxDurability, double NowDurability);
    void OnCorruptionUpdate_Internal();
    void OnHalfLiftInput_Pad();
    void UnregisterAction();
    void RegisterAction();
    void Unbind Button Events();
    void OnFinishLiftedButton_Internal();
    void OnLiftedButton_Internal(int32 LiftedItemNum);
    void OnSetValid_Internal();
    void OnDropCanceled_Internal(class UDragDropOperation* Operation);
    void OnSetEmpty_internal();
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void OnDropped_Internal();
    void OnDragged_Internal();
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    void Focus();
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnUnhovered_Internal(class UCommonButtonBase* Button);
    void On Hovered Internal(class UCommonButtonBase* Button);
    void On Right Clicked Internal();
    void OnMiddleClicked_Internal();
    void OnClicked_Internal(class UCommonButtonBase* Button);
    void GetTargetSlot(class UPalItemSlot*& TargetSlot);
    void Bind Button Events();
    void RegisterItemSlotWidget(class UWBP_PalItemSlotBase_C*& itemSlotWidget);
    void Setup(class UPalItemSlot* TargetSlot);
    void RegisterButton(class UCommonButtonBase*& Button);
    void Construct();
    void OnInitialized();
    void OnAddedToFocusPath(FFocusEvent InFocusEvent);
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    void Destruct();
    void ExecuteUbergraph_WBP_PalItemSlotButtonBase(int32 EntryPoint);
    void OnUpdateSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void OnTriedEquipSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnRequestUseItem__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Button);
    void OnCorruptionUpdate__DelegateSignature();
    void OnNotifyDurability__DelegateSignature(double MaxDurability, double NowDurability, class UWBP_PalItemSlotButtonBase_C* SelfWidget);
    void OnSetValidSlot__DelegateSignature();
    void OnSetEmptySlot__DelegateSignature();
    void OnMiddleClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnFinishLiftedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnLiftedButton__DelegateSignature(int32 LiftNum, class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnDropCanceled__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnDropped__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnDragged__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnRightClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void OnUnhoveredButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnUnFocusedWidget__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnFocusedWidget__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnHoveredButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
}; // Size: 0x609

#endif
