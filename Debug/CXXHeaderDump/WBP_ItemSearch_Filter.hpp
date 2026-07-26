#ifndef UE4SS_SDK_WBP_ItemSearch_Filter_HPP
#define UE4SS_SDK_WBP_ItemSearch_Filter_HPP

class UWBP_ItemSearch_Filter_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWBP_IngameMenu_Chest_Filter_C* WBP_IngameMenu_Chest_Filter;                // 0x0480 (size: 0x8)
    TArray<FName> CurrentFilterTypes;                                                 // 0x0488 (size: 0x10)

    void OnClickedCheck(FName TypeId, bool bChecked);
    class UWidget* BP_GetDesiredFocusTarget();
    void Setup();
    void OnSetup();
    void BndEvt__WBP_ItemChest_Preference_WBP_IngameMenu_Chest_Filter_K2Node_ComponentBoundEvent_1_OnClickedCloseButton__DelegateSignature();
    void BndEvt__WBP_ItemChest_Preference_WBP_IngameMenu_Chest_Filter_K2Node_ComponentBoundEvent_0_OnClickedAllCheckButton__DelegateSignature();
    void BndEvt__WBP_ItemChest_Preference_WBP_IngameMenu_Chest_Filter_K2Node_ComponentBoundEvent_2_OnClickedAllUncheckButton__DelegateSignature();
    void BndEvt__WBP_ItemSearch_Filter_WBP_IngameMenu_Chest_Filter_K2Node_ComponentBoundEvent_3_OnClickedApplyButton__DelegateSignature();
    void ExecuteUbergraph_WBP_ItemSearch_Filter(int32 EntryPoint);
}; // Size: 0x498

#endif
