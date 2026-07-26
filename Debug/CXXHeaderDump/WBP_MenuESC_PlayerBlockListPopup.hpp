#ifndef UE4SS_SDK_WBP_MenuESC_PlayerBlockListPopup_HPP
#define UE4SS_SDK_WBP_MenuESC_PlayerBlockListPopup_HPP

class UWBP_MenuESC_PlayerBlockListPopup_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UImage* Image_224;                                                          // 0x0480 (size: 0x8)
    class UImage* Image_225;                                                          // 0x0488 (size: 0x8)
    class UImage* Image_226;                                                          // 0x0490 (size: 0x8)
    class UImage* Image_227;                                                          // 0x0498 (size: 0x8)
    class UWBP_PalCommonScrollList_C* TRASH_WBP_PalCommonScrollList_Members_0;        // 0x04A0 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x04A8 (size: 0x8)
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;                                // 0x04B0 (size: 0x8)
    FWBP_MenuESC_PlayerBlockListPopup_COnCloseBlockList OnCloseBlockList;             // 0x04B8 (size: 0x10)
    void OnCloseBlockList();
    class UWBP_MenuESCPlayerBlockListItem_C* WBP_MenuESCPlayerBlockItem;              // 0x04C8 (size: 0x8)

    class UWidget* BP_GetDesiredFocusTarget();
    void OnSessionMemberUnBlockList(FString UserId);
    void CreateBlockList();
    void OnInitialized();
    void BndEvt__WBP_MenuESC_PlayerBlockListPopup_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void OnClose();
    void OnSetup();
    void ExecuteUbergraph_WBP_MenuESC_PlayerBlockListPopup(int32 EntryPoint);
    void OnCloseBlockList__DelegateSignature();
}; // Size: 0x4D0

#endif
