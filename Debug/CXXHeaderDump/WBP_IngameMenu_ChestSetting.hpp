#ifndef UE4SS_SDK_WBP_IngameMenu_ChestSetting_HPP
#define UE4SS_SDK_WBP_IngameMenu_ChestSetting_HPP

class UWBP_IngameMenu_ChestSetting_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Tab;                                          // 0x0480 (size: 0x8)
    class UImage* Image_Dark;                                                         // 0x0488 (size: 0x8)
    class UWBP_IngameMenu_ChestSetting_FilterBlock_C* WBP_IngameMenu_ChestSetting_FilterBlock; // 0x0490 (size: 0x8)
    class UWBP_IngameMenu_ChestSetting_SecurityBlock_C* WBP_IngameMenu_ChestSetting_SecurityBlock; // 0x0498 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x04A0 (size: 0x8)
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;                                // 0x04A8 (size: 0x8)
    class UWBP_Paldex_tab_C* WBP_Paldex_tab_Filter;                                   // 0x04B0 (size: 0x8)
    class UWBP_Paldex_tab_C* WBP_Paldex_tab_Security;                                 // 0x04B8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_Next;                           // 0x04C0 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_Prev;                           // 0x04C8 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher;                                            // 0x04D0 (size: 0x8)
    FWBP_IngameMenu_ChestSetting_COnClickedCloseButton OnClickedCloseButton;          // 0x04D8 (size: 0x10)
    void OnClickedCloseButton();
    FWBP_IngameMenu_ChestSetting_COnClickedAllCheckButton OnClickedAllCheckButton;    // 0x04E8 (size: 0x10)
    void OnClickedAllCheckButton();
    FWBP_IngameMenu_ChestSetting_COnClickedAllUncheckButton OnClickedAllUncheckButton; // 0x04F8 (size: 0x10)
    void OnClickedAllUncheckButton();
    FWBP_IngameMenu_ChestSetting_COnClickedApplyButton OnClickedApplyButton;          // 0x0508 (size: 0x10)
    void OnClickedApplyButton();
    class UPalUIItemChestFilterModel* PreferenceModel;                                // 0x0518 (size: 0x8)
    bool NowFilter;                                                                   // 0x0520 (size: 0x1)
    bool Can Edit Security;                                                           // 0x0521 (size: 0x1)

    void WBP_IngameMenu_ChestSetting_AutoGenFunc();
    void SetupNameEdit();
    void SWITCH(bool ToFilter);
    void OnClickedCheck(FName FilterId, bool bChecked);
    void SetupFilter();
    class UWidget* BP_GetDesiredFocusTarget();
    void BndEvt__WBP_IngameMenu_Chest_Filter_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void OnSetup();
    void OnFilterTabClicked();
    void OnSecuTabClicked();
    void SwitchTab();
    void BndEvt__WBP_IngameMenu_ChestSetting_WBP_IngameMenu_ChestSetting_FilterBlock_K2Node_ComponentBoundEvent_2_OnClickedAllCheckButton__DelegateSignature();
    void BndEvt__WBP_IngameMenu_ChestSetting_WBP_IngameMenu_ChestSetting_FilterBlock_K2Node_ComponentBoundEvent_5_OnClickedAllUncheckButton__DelegateSignature();
    void BndEvt__WBP_IngameMenu_ChestSetting_WBP_IngameMenu_ChestSetting_SecurityBlock_K2Node_ComponentBoundEvent_1_OnGetLockedNotLocal__DelegateSignature();
    void BndEvt__WBP_IngameMenu_ChestSetting_WBP_IngameMenu_ChestSetting_FilterBlock_K2Node_ComponentBoundEvent_3_OnClickedEditCustomNameButton__DelegateSignature();
    void BndEvt__WBP_IngameMenu_ChestSetting_WBP_IngameMenu_ChestSetting_FilterBlock_K2Node_ComponentBoundEvent_4_OnEditedCustomName__DelegateSignature(FString NewCustomName);
    void ExecuteUbergraph_WBP_IngameMenu_ChestSetting(int32 EntryPoint);
    void OnClickedApplyButton__DelegateSignature();
    void OnClickedAllUncheckButton__DelegateSignature();
    void OnClickedAllCheckButton__DelegateSignature();
    void OnClickedCloseButton__DelegateSignature();
}; // Size: 0x522

#endif
