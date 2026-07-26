#ifndef UE4SS_SDK_WBP_Altar_SelectItem_HPP
#define UE4SS_SDK_WBP_Altar_SelectItem_HPP

class UWBP_Altar_SelectItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0280 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList_Button;                 // 0x0288 (size: 0x8)
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;                                // 0x0290 (size: 0x8)
    FWBP_Altar_SelectItem_COnClickedCloseButton OnClickedCloseButton;                 // 0x0298 (size: 0x10)
    void OnClickedCloseButton();

    void GetTopFocusTarget(class UWidget*& Widget);
    void BndEvt__WBP_Altar_SelectItem_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_Altar_SelectItem(int32 EntryPoint);
    void OnClickedCloseButton__DelegateSignature();
}; // Size: 0x2A8

#endif
