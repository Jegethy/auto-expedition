#ifndef UE4SS_SDK_WBP_MainMenu_Technology_SortSettingWindow_HPP
#define UE4SS_SDK_WBP_MainMenu_Technology_SortSettingWindow_HPP

class UWBP_MainMenu_Technology_SortSettingWindow_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UPalCheckBox* PalCheckBox_UnlockTec;                                        // 0x0480 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_CheckAll;                           // 0x0488 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_Confirm;                            // 0x0490 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_UncheckAll;                         // 0x0498 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x04A0 (size: 0x8)
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;                                // 0x04A8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_ShowUnlocked;             // 0x04B0 (size: 0x8)
    class UWrapBox* WrapBox_Build;                                                    // 0x04B8 (size: 0x8)
    class UWrapBox* WrapBox_Item;                                                     // 0x04C0 (size: 0x8)
    TArray<EPalItemTypeA> ItemFilterPrefab;                                           // 0x04C8 (size: 0x10)
    FWBP_MainMenu_Technology_SortSettingWindow_COnFilterChanged OnFilterChanged;      // 0x04D8 (size: 0x10)
    void OnFilterChanged(TSet<EPalItemTypeA> NewItemFilter, TSet<EPalBuildObjectTypeA> NewBuildFilter, bool ShowUnlocked);
    TArray<EPalBuildObjectTypeA> BuildFilterPrefab;                                   // 0x04E8 (size: 0x10)
    TSet<EPalItemTypeA> CurrentItemFilter;                                            // 0x04F8 (size: 0x50)
    TSet<EPalBuildObjectTypeA> CurrentBuildFilter;                                    // 0x0548 (size: 0x50)
    bool CurrentShowUnlocked;                                                         // 0x0598 (size: 0x1)

    class UWidget* Custom Navigation Up(EUINavigation Navigation);
    void SetAll(bool Check);
    void OnBuildFilterChanged(EPalBuildObjectTypeA BuildType, bool CheckState);
    void OnItemFilterChanged(EPalItemTypeA ItemType, bool CheckState);
    void Setup(TSet<EPalItemTypeA> NowItemFilter, TSet<EPalBuildObjectTypeA> NowBuildFilter);
    class UWidget* BP_GetDesiredFocusTarget();
    void BndEvt__WBP_MainMenu_Technology_SortSettingWindow_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_MainMenu_Technology_SortSettingWindow_WBP_CommonButton_Confirm_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void OnSetup();
    void BndEvt__WBP_MainMenu_Technology_SortSettingWindow_WBP_CommonButton_CheckAll_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__WBP_MainMenu_Technology_SortSettingWindow_WBP_CommonButton_UncheckAll_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__WBP_MainMenu_Technology_SortSettingWindow_WBP_PalInvisibleButton_ShowUnlocked_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void FocusToConfirm();
    void ExecuteUbergraph_WBP_MainMenu_Technology_SortSettingWindow(int32 EntryPoint);
    void OnFilterChanged__DelegateSignature(TSet<EPalItemTypeA> NewItemFilter, TSet<EPalBuildObjectTypeA> NewBuildFilter, bool ShowUnlocked);
}; // Size: 0x599

#endif
