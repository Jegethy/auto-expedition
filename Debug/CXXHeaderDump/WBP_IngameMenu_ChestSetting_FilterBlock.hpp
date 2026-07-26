#ifndef UE4SS_SDK_WBP_IngameMenu_ChestSetting_FilterBlock_HPP
#define UE4SS_SDK_WBP_IngameMenu_ChestSetting_FilterBlock_HPP

class UWBP_IngameMenu_ChestSetting_FilterBlock_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UCanvasPanel* Canvas_NameEdit;                                              // 0x0458 (size: 0x8)
    class UCanvasPanel* Canvas_NameEditRoot;                                          // 0x0460 (size: 0x8)
    class UCanvasPanel* Canvas_Supply;                                                // 0x0468 (size: 0x8)
    class UPalEditableTextBox* EditableTextBox_Name;                                  // 0x0470 (size: 0x8)
    class UImage* Image;                                                              // 0x0478 (size: 0x8)
    class UImage* Image_52;                                                           // 0x0480 (size: 0x8)
    class UImage* Image_80;                                                           // 0x0488 (size: 0x8)
    class UOverlay* Overlay_Desc;                                                     // 0x0490 (size: 0x8)
    class UPalCheckBox* PalCheckBox_43;                                               // 0x0498 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_CheckAll;                           // 0x04A0 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_UncheckAll;                         // 0x04A8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x04B0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_NameEdit;                 // 0x04B8 (size: 0x8)
    class UWrapBox* WrapBox_FilterList;                                               // 0x04C0 (size: 0x8)
    FWBP_IngameMenu_ChestSetting_FilterBlock_COnClickedAllCheckButton OnClickedAllCheckButton; // 0x04C8 (size: 0x10)
    void OnClickedAllCheckButton();
    FWBP_IngameMenu_ChestSetting_FilterBlock_COnClickedAllUncheckButton OnClickedAllUncheckButton; // 0x04D8 (size: 0x10)
    void OnClickedAllUncheckButton();
    FDataTableRowHandle CustomNameHintText;                                           // 0x04E8 (size: 0x10)
    FWBP_IngameMenu_ChestSetting_FilterBlock_COnClickedEditCustomNameButton OnClickedEditCustomNameButton; // 0x04F8 (size: 0x10)
    void OnClickedEditCustomNameButton();
    FWBP_IngameMenu_ChestSetting_FilterBlock_COnEditedCustomName OnEditedCustomName;  // 0x0508 (size: 0x10)
    void OnEditedCustomName(FString NewCustomName);
    class UPalWordFilterWaiter* CurrentFilteringWaiter;                               // 0x0518 (size: 0x8)

    void OnTextFiltered(class UPalWordFilterWaiter* Waiter, FString FilteredString);
    void SetEnableCustomNameEdit(bool bEnableNameEdit);
    class UWidget* DoCustomNavi_ToLockAllButton(EUINavigation Navigation);
    class UWidget* DoCustomNavi_ToEditCustomName(EUINavigation Navigation);
    void IsEditingCustomName(bool& bEditing);
    void EndEditCustomName();
    void StartEditCustomName();
    void SetCustomName(FString InCustomName);
    class UWidget* BP_GetDesiredFocusTarget();
    class UWBP_IngameMenu_Chest_FilterContent_C* AddContentItem(FName FilterId, FName FilterTextId);
    void ClearContent();
    void BndEvt__WBP_IngameMenu_Chest_Filter_WBP_CommonButton_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_Filter_WBP_CommonButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void Construct();
    void BndEvt__WBP_IngameMenu_ChestSetting_FilterBlock_WBP_PalInvisibleButton_NameEdit_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_ChestSetting_FilterBlock_EditableTextBox_Name_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void Destruct();
    void ExecuteUbergraph_WBP_IngameMenu_ChestSetting_FilterBlock(int32 EntryPoint);
    void OnEditedCustomName__DelegateSignature(FString NewCustomName);
    void OnClickedEditCustomNameButton__DelegateSignature();
    void OnClickedAllUncheckButton__DelegateSignature();
    void OnClickedAllCheckButton__DelegateSignature();
}; // Size: 0x520

#endif
