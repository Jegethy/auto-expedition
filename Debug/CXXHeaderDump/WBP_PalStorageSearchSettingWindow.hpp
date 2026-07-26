#ifndef UE4SS_SDK_WBP_PalStorageSearchSettingWindow_HPP
#define UE4SS_SDK_WBP_PalStorageSearchSettingWindow_HPP

class UWBP_PalStorageSearchSettingWindow_C : public UPalUIPalBoxSortWindow
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UGridPanel* GridPanel_ElementFilter;                                        // 0x0480 (size: 0x8)
    class UGridPanel* GridPanel_SuitabilityFilter;                                    // 0x0488 (size: 0x8)
    class UImage* Image;                                                              // 0x0490 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0498 (size: 0x8)
    class UImage* Image_2;                                                            // 0x04A0 (size: 0x8)
    class UImage* Image_3;                                                            // 0x04A8 (size: 0x8)
    class UImage* Image_4;                                                            // 0x04B0 (size: 0x8)
    class UImage* Image_21;                                                           // 0x04B8 (size: 0x8)
    class UImage* Image_22;                                                           // 0x04C0 (size: 0x8)
    class UImage* Image_103;                                                          // 0x04C8 (size: 0x8)
    class UImage* Image_140;                                                          // 0x04D0 (size: 0x8)
    class UImage* Image_Dark;                                                         // 0x04D8 (size: 0x8)
    class UPalCheckBox* PalCheckBox_Favorite_01;                                      // 0x04E0 (size: 0x8)
    class UPalCheckBox* PalCheckBox_Favorite_02;                                      // 0x04E8 (size: 0x8)
    class UPalCheckBox* PalCheckBox_Favorite_03;                                      // 0x04F0 (size: 0x8)
    class UPalCheckBox* PalCheckBox_Gender_Female;                                    // 0x04F8 (size: 0x8)
    class UPalCheckBox* PalCheckBox_Gender_GenderNone;                                // 0x0500 (size: 0x8)
    class UPalCheckBox* PalCheckBox_Gender_Male;                                      // 0x0508 (size: 0x8)
    class UPalCheckBox* PalCheckBox_ImportedPal;                                      // 0x0510 (size: 0x8)
    class UPalComboBoxString* PalComboBoxString_Passive;                              // 0x0518 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_ClearPassive;                       // 0x0520 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_Sort;                               // 0x0528 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0530 (size: 0x8)
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;                                // 0x0538 (size: 0x8)
    class UWBP_PalGenderIcon_C* WBP_PalGenderIcon_Female;                             // 0x0540 (size: 0x8)
    class UWBP_PalGenderIcon_C* WBP_PalGenderIcon_Male;                               // 0x0548 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Favorite_01;              // 0x0550 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Favorite_02;              // 0x0558 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Favorite_03;              // 0x0560 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_GenderFemale;             // 0x0568 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_GenderMale;               // 0x0570 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_GenderNone;               // 0x0578 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_ImportedPal;              // 0x0580 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x0588 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_91;                             // 0x0590 (size: 0x8)
    class UWBP_PalStorageSortElementFilterCheckBox_C* WBP_PalStorageSortElementFilterCheckBox; // 0x0598 (size: 0x8)
    class UWBP_PalStorageSortElementFilterCheckBox_C* WBP_PalStorageSortElementFilterCheckBox_1; // 0x05A0 (size: 0x8)
    class UWBP_PalStorageSortElementFilterCheckBox_C* WBP_PalStorageSortElementFilterCheckBox_2; // 0x05A8 (size: 0x8)
    class UWBP_PalStorageSortElementFilterCheckBox_C* WBP_PalStorageSortElementFilterCheckBox_3; // 0x05B0 (size: 0x8)
    class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* WBP_PalStorageSortWorkSuitabilityFilterCheckBox; // 0x05B8 (size: 0x8)
    class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* WBP_PalStorageSortWorkSuitabilityFilterCheckBox_1; // 0x05C0 (size: 0x8)
    class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* WBP_PalStorageSortWorkSuitabilityFilterCheckBox_2; // 0x05C8 (size: 0x8)
    class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* WBP_PalStorageSortWorkSuitabilityFilterCheckBox_3; // 0x05D0 (size: 0x8)
    TMap<class EPalElementType, class UWBP_PalStorageSortElementFilterCheckBox_C*> ElementTypeCheckBoxMap; // 0x05D8 (size: 0x50)
    TArray<class UWBP_PalStorageSortTypeButton_C*> SortTypeButtonArray;               // 0x0628 (size: 0x10)
    TMap<class EPalWorkSuitability, class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C*> WorkSuitabilityCheckBoxMap; // 0x0638 (size: 0x50)
    FPalCharacterContainerSortInfo CachedSortInfo;                                    // 0x0688 (size: 0x48)
    int32 MaxColumnNum_CheckBox;                                                      // 0x06D0 (size: 0x4)
    TArray<FName> PassiveIds;                                                         // 0x06D8 (size: 0x10)
    bool IgnoreCloseEvent;                                                            // 0x06E8 (size: 0x1)
    FPalDataTableRowName_UIInputAction SortActionName;                                // 0x06EC (size: 0x8)
    FPalDataTableRowName_UIInputAction ResetSettingsInputAction;                      // 0x06F4 (size: 0x8)
    FPalCharacterContainerSortInfo DefaultSetting;                                    // 0x0700 (size: 0x48)

    void On Input Action Reset Setting();
    void ChooseCachedSettings(FPalCharacterContainerSortInfo& SortInfo);
    void CollectFavoriteIndex(TArray<uint8>& ByteArray);
    void SetupFavoriteCheck(TArray<uint8>& IndexArray);
    void SortInternal();
    void CloseEvent();
    class UWidget* CustomNavi_ToFavoriteCheckBox(EUINavigation Navigation);
    class UWidget* CustomNavi_ToSortButton(EUINavigation Navigation);
    void CacheSortInfo();
    class UWidget* CustomNavi_ToCloseButton(EUINavigation Navigation);
    void ApplyCachedSortInfo(bool bResetDefault);
    class UWidget* BP_GetDesiredFocusTarget();
    void CollectFilteringSuitability(TArray<EPalWorkSuitability>& SuitabilityArray);
    void CollectFilteringElementType(TArray<EPalElementType>& ElementTypeArray);
    void OnClickedElementTypeCheckBox(bool bChecked, EPalElementType ElementType);
    void OnClickedWorkSuitabilityCheckBox(bool bChecked, EPalWorkSuitability WorkSuitbility);
    void Setup Sort Type Button();
    void Setup Passive Combo Box();
    void SetupWorkSuitabilityCheckBox();
    void SetupElementTypeCheckBox();
    void OnInitialized();
    void Destruct();
    void BndEvt__WBP_PalStorageSortSettingWindow_WBP_CommonButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_Favorite_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnSetup();
    void BndEvt__WBP_PalStorageSortSettingWindow_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_GenderMale_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_GenderFemale_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_PalStorageSortSettingWindow_WBP_CommonButton_Sort_1_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void BndEvt__WBP_PalStorageSortSettingWindow_PalComboBoxString_Passive_K2Node_ComponentBoundEvent_7_OnOpeningEvent__DelegateSignature();
    void BndEvt__WBP_PalStorageSortSettingWindow_PalComboBoxString_Passive_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_Favorite_02_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_Favorite_03_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_ImportedPal_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_GenderNone_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_PalStorageSearchSettingWindow(int32 EntryPoint);
}; // Size: 0x748

#endif
