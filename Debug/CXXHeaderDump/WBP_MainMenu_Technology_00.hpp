#ifndef UE4SS_SDK_WBP_MainMenu_Technology_00_HPP
#define UE4SS_SDK_WBP_MainMenu_Technology_00_HPP

class UWBP_MainMenu_Technology_00_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UCommonListView* CommonListView;                                            // 0x0280 (size: 0x8)
    class UImage* FrameFlare;                                                         // 0x0288 (size: 0x8)
    class UCanvasPanel* HorizontalBox_SearchName;                                     // 0x0290 (size: 0x8)
    class UPalEditableTextBox* PalEditableTextBox_Search;                             // 0x0298 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_Filter;                             // 0x02A0 (size: 0x8)
    class UWBP_MainMenu_Technology_Point_C* WBP_MainMenu_Technology_Point;            // 0x02A8 (size: 0x8)
    class UWBP_MainMenu_Technology_Point_C* WBP_MainMenu_Technology_Point_Boss;       // 0x02B0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_SerchName;                // 0x02B8 (size: 0x8)
    TMap<int32, FF_PalUITechnologyDataMapContent> TechnologyMap;                      // 0x02C0 (size: 0x50)
    FWBP_MainMenu_Technology_00_COnClickedTchnology OnClickedTchnology;               // 0x0310 (size: 0x10)
    void OnClickedTchnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    FWBP_MainMenu_Technology_00_COnHoveredTechnology OnHoveredTechnology;             // 0x0320 (size: 0x10)
    void OnHoveredTechnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    FWBP_MainMenu_Technology_00_COnUnhoveredTechnology OnUnhoveredTechnology;         // 0x0330 (size: 0x10)
    void OnUnhoveredTechnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    int32 MaxTechnologyLevel;                                                         // 0x0340 (size: 0x4)
    int32 MinTechnologyLevel;                                                         // 0x0344 (size: 0x4)
    class UWBP_MainMenu_Technology_List_C* LastHoveredListWidget;                     // 0x0348 (size: 0x8)
    class UWBP_MainMenu_Technology_Content_C* LastHoveredButtonWidget;                // 0x0350 (size: 0x8)
    TMap<class UObject*, class UWBP_MainMenu_Technology_List_C*> ListViewDisplayWidgetMap; // 0x0358 (size: 0x50)
    int32 LastFocusHorizontalIndex;                                                   // 0x03A8 (size: 0x4)
    class UObject* DesiredFocusEntry;                                                 // 0x03B0 (size: 0x8)
    FWBP_MainMenu_Technology_00_COnNameFilterApplied OnNameFilterApplied;             // 0x03B8 (size: 0x10)
    void OnNameFilterApplied(FText newText);
    FWBP_MainMenu_Technology_00_COnFilterButtonClicked OnFilterButtonClicked;         // 0x03C8 (size: 0x10)
    void OnFilterButtonClicked();
    bool FocusToggle;                                                                 // 0x03D8 (size: 0x1)
    int32 LastSelectIndex;                                                            // 0x03DC (size: 0x4)

    void IsSkillUnlockMask(TArray<FName>& ItemIds, bool& Masked);
    void GetUnlockFilter(bool ShowUnlocked, const FName& technologyName, bool& Return);
    void GetCategoryFilter(const FPalTechnologyRecipeUnlockDataTableRow& TechData, TSet<EPalItemTypeA> ItemTypes, TSet<EPalBuildObjectTypeA> BuildTypes, bool& Return);
    void GetNameFilter(FString Filter, const FPalTechnologyRecipeUnlockDataTableRow& TechData, bool& Return);
    void Apply Technology Filter(FText FilterName, TSet<EPalItemTypeA> ItemTypes, TSet<EPalBuildObjectTypeA> BuildTypes, bool ShowUnlocked);
    void FocusToFilter();
    void SetTechContentFocus(class UWBP_MainMenu_Technology_List_C* Target);
    void Focus To Local Player Level Technology Target();
    void UpdateAllTechnologyButton();
    class UWidget* CustomNavi_Up(EUINavigation Navigation);
    class UWidget* Custom Navi Down(EUINavigation Navigation);
    void OnHoveredAnyTechnology_Internal(class UWBP_MainMenu_Technology_Content_C* Widget, class UWBP_MainMenu_Technology_List_C* ListWidget);
    void OnUnhoveredAnyTechnology_Internal(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnClickedAnyTechnology_Internal(class UWBP_MainMenu_Technology_Content_C* Widget);
    void Focus To Top Target();
    void SetupTechnologyList();
    void CreateTechnologyMap();
    void Setup();
    void Construct();
    void Destruct();
    void BndEvt__WBP_MainMenu_Technology_00_CommonListView_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
    void BndEvt__WBP_MainMenu_Technology_00_CommonListView_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
    void BndEvt__WBP_MainMenu_Technology_00_CommonListView_K2Node_ComponentBoundEvent_4_OnListEntryReleasedDynamic__DelegateSignature(class UUserWidget* Widget);
    void BndEvt__WBP_MainMenu_Technology_00_WBP_PalInvisibleButton_SerchName_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Technology_00_WBP_PalInvisibleButton_SerchName_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Technology_00_WBP_PalInvisibleButton_SerchName_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Technology_00_WBP_CommonButton_Filter_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void BndEvt__WBP_MainMenu_Technology_00_PalEditableTextBox_Search_K2Node_ComponentBoundEvent_8_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_WBP_MainMenu_Technology_00(int32 EntryPoint);
    void OnFilterButtonClicked__DelegateSignature();
    void OnNameFilterApplied__DelegateSignature(FText newText);
    void OnUnhoveredTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnHoveredTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnClickedTchnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
}; // Size: 0x3E0

#endif
