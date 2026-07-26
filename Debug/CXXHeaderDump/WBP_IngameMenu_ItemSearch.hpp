#ifndef UE4SS_SDK_WBP_IngameMenu_ItemSearch_HPP
#define UE4SS_SDK_WBP_IngameMenu_ItemSearch_HPP

class UWBP_IngameMenu_ItemSearch_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWBP_IngameMenu_ItemSearchList_C* WBP_IngameMenu_ItemSearchList;            // 0x0480 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0488 (size: 0x8)
    TArray<FPalItemAndNum> LegalItemInfos;                                            // 0x0490 (size: 0x10)
    TArray<FName> LegalItemIds;                                                       // 0x04A0 (size: 0x10)

    void CreateItemMap();
    void OnCancelAction();
    void Setup();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnSetup();
    void BndEvt__WBP_IngameMenu_ItemSearch_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void OnInitialized();
    void BndEvt__WBP_IngameMenu_ItemSearch_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_1_OnRightClickSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void ExecuteUbergraph_WBP_IngameMenu_ItemSearch(int32 EntryPoint);
}; // Size: 0x4B0

#endif
