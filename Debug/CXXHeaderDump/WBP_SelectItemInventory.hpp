#ifndef UE4SS_SDK_WBP_SelectItemInventory_HPP
#define UE4SS_SDK_WBP_SelectItemInventory_HPP

class UWBP_SelectItemInventory_C : public UPalUISelectItemInventoryBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWBP_Common_Inventory_C* WBP_Common_Inventory;                              // 0x0480 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0488 (size: 0x8)
    bool isRequireSelectNum;                                                          // 0x0490 (size: 0x1)
    class UWBP_PalItemSlotButtonBase_C* selectedButton;                               // 0x0498 (size: 0x8)
    class UBP_PalInventoryModel_C* InventoryModel;                                    // 0x04A0 (size: 0x8)
    FDataTableRowHandle BgMsgID;                                                      // 0x04A8 (size: 0x10)

    void OnUpdatedSlot(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void BindUsabilityGrayout(class APalCharacter* TargetCharacter);
    void ApplyUsabilityGrayout(class APalCharacter* TargetCharacter, class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void ApplyUsabilityGrayoutAll(class APalCharacter* TargetCharacter);
    void GetTargetCharacter(class APalCharacter*& TargetCharacter);
    class UWidget* BP_GetDesiredFocusTarget();
    void OnFocusedSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void ComplateSelect(FPalItemSlotId SlotId, int32 selectNum);
    void OnComplateSelectNum(EPalUISelectNumResult resultType, int64 selectedNum);
    void DisplaySelectNumWidget();
    void OnLeftClicked(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void OnSetup();
    void BndEvt__WBP_SelectItemInventory_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void Destruct();
    void BndEvt__WBP_SelectItemInventory_WBP_Common_Inventory_K2Node_ComponentBoundEvent_2_OnLeftClickSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void ExecuteUbergraph_WBP_SelectItemInventory(int32 EntryPoint);
}; // Size: 0x4B8

#endif
