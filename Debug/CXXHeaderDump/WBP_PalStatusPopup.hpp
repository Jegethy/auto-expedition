#ifndef UE4SS_SDK_WBP_PalStatusPopup_HPP
#define UE4SS_SDK_WBP_PalStatusPopup_HPP

class UWBP_PalStatusPopup_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWBP_MainMenu_bg_C* WBP_MainMenu_bg;                                        // 0x0480 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0488 (size: 0x8)
    class UWBP_PalStatus_C* WBP_PalStatus;                                            // 0x0490 (size: 0x8)
    class UBP_InGamePalStatusModel_C* StatusModel;                                    // 0x0498 (size: 0x8)
    FDataTableRowHandle BackGroundTextID;                                             // 0x04A0 (size: 0x10)

    void OnCancelAction();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnSetup();
    void OnInitialized();
    void Construct();
    void BndEvt__WBP_PalStatusPopup_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_PalStatusPopup(int32 EntryPoint);
}; // Size: 0x4B0

#endif
