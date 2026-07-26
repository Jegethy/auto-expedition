#ifndef UE4SS_SDK_WBP_PaldexFilteringSettingsWindow_HPP
#define UE4SS_SDK_WBP_PaldexFilteringSettingsWindow_HPP

class UWBP_PaldexFilteringSettingsWindow_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UGridPanel* GridPanel_ElementFilter;                                        // 0x0480 (size: 0x8)
    class UGridPanel* GridPanel_SortType;                                             // 0x0488 (size: 0x8)
    class UGridPanel* GridPanel_SuitabilityFilter;                                    // 0x0490 (size: 0x8)
    class UImage* Image;                                                              // 0x0498 (size: 0x8)
    class UImage* Image_1;                                                            // 0x04A0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x04A8 (size: 0x8)
    class UImage* Image_67;                                                           // 0x04B0 (size: 0x8)
    class UImage* Image_Dark;                                                         // 0x04B8 (size: 0x8)
    class UPalCheckBox* PalCheckBox_ExcludeReceivedBonus;                             // 0x04C0 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_Sort;                               // 0x04C8 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x04D0 (size: 0x8)
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;                                // 0x04D8 (size: 0x8)
    class UWBP_PaldexFilteringSettings_SortTypeButton_C* WBP_PaldexFilteringSettings_SortTypeButton; // 0x04E0 (size: 0x8)
    class UWBP_PaldexFilteringSettings_SortTypeButton_C* WBP_PaldexFilteringSettings_SortTypeButton_1; // 0x04E8 (size: 0x8)
    class UWBP_PaldexFilteringSettings_SortTypeButton_C* WBP_PaldexFilteringSettings_SortTypeButton_2; // 0x04F0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_ExcludeReceivedBonus;     // 0x04F8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x0500 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_91;                             // 0x0508 (size: 0x8)
    class UWBP_PalStorageSortElementFilterCheckBox_C* WBP_PalStorageSortElementFilterCheckBox; // 0x0510 (size: 0x8)
    class UWBP_PalStorageSortElementFilterCheckBox_C* WBP_PalStorageSortElementFilterCheckBox_1; // 0x0518 (size: 0x8)
    class UWBP_PalStorageSortElementFilterCheckBox_C* WBP_PalStorageSortElementFilterCheckBox_2; // 0x0520 (size: 0x8)
    class UWBP_PalStorageSortElementFilterCheckBox_C* WBP_PalStorageSortElementFilterCheckBox_3; // 0x0528 (size: 0x8)
    class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* WBP_PalStorageSortWorkSuitabilityFilterCheckBox; // 0x0530 (size: 0x8)
    class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* WBP_PalStorageSortWorkSuitabilityFilterCheckBox_1; // 0x0538 (size: 0x8)
    class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* WBP_PalStorageSortWorkSuitabilityFilterCheckBox_2; // 0x0540 (size: 0x8)
    class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* WBP_PalStorageSortWorkSuitabilityFilterCheckBox_3; // 0x0548 (size: 0x8)
    FPalUIPaldexFilterInfo DefaultSetting;                                            // 0x0550 (size: 0x30)
    TArray<class UWBP_PaldexFilteringSettings_SortTypeButton_C*> SortTypeButtonArray; // 0x0580 (size: 0x10)
    EPalUIPaldexSortType SelectedSortType;                                            // 0x0590 (size: 0x1)
    TMap<class EPalWorkSuitability, class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C*> WorkSuitabilityCheckBoxMap; // 0x0598 (size: 0x50)
    int32 MaxColumnNum_CheckBox;                                                      // 0x05E8 (size: 0x4)
    TMap<class EPalElementType, class UWBP_PalStorageSortElementFilterCheckBox_C*> ElementTypeCheckBoxMap; // 0x05F0 (size: 0x50)
    FPalUIPaldexFilterInfo CachedSortInfo;                                            // 0x0640 (size: 0x30)
    FPalDataTableRowName_UIInputAction ConfrimInputAction;                            // 0x0670 (size: 0x8)
    FPalDataTableRowName_UIInputAction ResetSettingsInputAction;                      // 0x0678 (size: 0x8)

    class UWidget* DoCustomNavi_ToExcludeReceivedBonusButton(EUINavigation Navigation);
    class UWidget* DoCustomNavi_ToConfirmButton(EUINavigation Navigation);
    class UWidget* BP_GetDesiredFocusTarget();
    void SaveSettingAndClose();
    void OnInputAction_ResetSetting();
    void OnInputAction_Confirm();
    class UWidget* DoCustomNavi_ToSortButtonTopLeft(EUINavigation Navigation);
    class UWidget* DoCustomNavi_ToCloseButton(EUINavigation Navigation);
    void ApplyCachedSortInfo();
    void CacheSortInfo();
    void CollectFilteringSuitability(TArray<EPalWorkSuitability>& SuitabilityArray);
    void CollectFilteringElementType(TArray<EPalElementType>& ElementTypeArray);
    void OnClickedElementTypeCheckBox(bool bChecked, EPalElementType ElementType);
    void OnClickedWorlSutabilityCheckBox(bool bChecked, EPalWorkSuitability WorkSuitbility);
    void OnClickedSortTypeButton(class UWBP_PaldexFilteringSettings_SortTypeButton_C* Widget);
    void Initialize();
    void OnSetup();
    void OnInitialized();
    void BndEvt__WBP_PaldexFilteringSettingsWindow_WBP_CommonButton_Sort_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_PaldexFilteringSettingsWindow_WBP_Menu_btn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_PaldexFilteringSettingsWindow_WBP_PalInvisibleButton_ExcludeReceivedBonus_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_PaldexFilteringSettingsWindow(int32 EntryPoint);
}; // Size: 0x680

#endif
