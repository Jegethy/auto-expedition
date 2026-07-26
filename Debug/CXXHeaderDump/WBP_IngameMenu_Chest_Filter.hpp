#ifndef UE4SS_SDK_WBP_IngameMenu_Chest_Filter_HPP
#define UE4SS_SDK_WBP_IngameMenu_Chest_Filter_HPP

class UWBP_IngameMenu_Chest_Filter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Image_Dark;                                                         // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* Text_GuildMenberHead;                                   // 0x0288 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_Confirm;                            // 0x0290 (size: 0x8)
    class UWBP_IngameMenu_ChestSetting_FilterBlock_C* WBP_IngameMenu_ChestSetting_FilterBlock; // 0x0298 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x02A0 (size: 0x8)
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;                                // 0x02A8 (size: 0x8)
    FWBP_IngameMenu_Chest_Filter_COnClickedCloseButton OnClickedCloseButton;          // 0x02B0 (size: 0x10)
    void OnClickedCloseButton();
    FWBP_IngameMenu_Chest_Filter_COnClickedAllCheckButton OnClickedAllCheckButton;    // 0x02C0 (size: 0x10)
    void OnClickedAllCheckButton();
    FWBP_IngameMenu_Chest_Filter_COnClickedAllUncheckButton OnClickedAllUncheckButton; // 0x02D0 (size: 0x10)
    void OnClickedAllUncheckButton();
    FWBP_IngameMenu_Chest_Filter_COnClickedApplyButton OnClickedApplyButton;          // 0x02E0 (size: 0x10)
    void OnClickedApplyButton();
    FDataTableRowHandle CustomNameHintText;                                           // 0x02F0 (size: 0x10)
    FWBP_IngameMenu_Chest_Filter_COnEditedCustomName OnEditedCustomName;              // 0x0300 (size: 0x10)
    void OnEditedCustomName(FString NewCustomName);
    FWBP_IngameMenu_Chest_Filter_COnClickedCustomNameEditButton OnClickedCustomNameEditButton; // 0x0310 (size: 0x10)
    void OnClickedCustomNameEditButton();

    void SetEnableCustomNameEdit(bool bEnableNameEdit);
    void IsEditingCustomName(bool& bEditing);
    void EndEditCustomName();
    void StartEditCustomName();
    void SetCustomName(FString InCustomName);
    void FocusToConfirmButton();
    void SetAllChecker(bool Checked);
    void SetupAsItemFilter();
    class UWBP_IngameMenu_Chest_FilterContent_C* AddContentItem(FName FilterId, FName FilterTextId);
    void ClearContent();
    void GetDesiredFocusTarget(class UWidget*& NewParam);
    void BndEvt__WBP_IngameMenu_Chest_Filter_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_Filter_WBP_CommonButton_Confirm_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_Filter_WBP_IngameMenu_ChestSetting_FilterBlock_K2Node_ComponentBoundEvent_6_OnClickedAllCheckButton__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_Filter_WBP_IngameMenu_ChestSetting_FilterBlock_K2Node_ComponentBoundEvent_7_OnClickedAllUncheckButton__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_Filter_WBP_IngameMenu_ChestSetting_FilterBlock_K2Node_ComponentBoundEvent_8_OnClickedEditCustomNameButton__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_Filter_WBP_IngameMenu_ChestSetting_FilterBlock_K2Node_ComponentBoundEvent_9_OnEditedCustomName__DelegateSignature(FString NewCustomName);
    void ExecuteUbergraph_WBP_IngameMenu_Chest_Filter(int32 EntryPoint);
    void OnClickedCustomNameEditButton__DelegateSignature();
    void OnEditedCustomName__DelegateSignature(FString NewCustomName);
    void OnClickedApplyButton__DelegateSignature();
    void OnClickedAllUncheckButton__DelegateSignature();
    void OnClickedAllCheckButton__DelegateSignature();
    void OnClickedCloseButton__DelegateSignature();
}; // Size: 0x320

#endif
