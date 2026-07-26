#ifndef UE4SS_SDK_WBP_Guild_HPP
#define UE4SS_SDK_WBP_Guild_HPP

class UWBP_Guild_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Log_NormalToFocus;                                    // 0x0280 (size: 0x8)
    class UCanvasPanel* Canvas_NameEdit;                                              // 0x0288 (size: 0x8)
    class UPalEditableTextBox* EditableTextBox_GuildName;                             // 0x0290 (size: 0x8)
    class UCanvasPanel* GuildMember;                                                  // 0x0298 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02A0 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_52;                                                           // 0x02B0 (size: 0x8)
    class UImage* Image_60;                                                           // 0x02B8 (size: 0x8)
    class UImage* Image_NameBase;                                                     // 0x02C0 (size: 0x8)
    class UImage* Image_NameBase_1;                                                   // 0x02C8 (size: 0x8)
    class UImage* Image_Symbol;                                                       // 0x02D0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_GuildMemberNum;                                    // 0x02D8 (size: 0x8)
    class UWBP_GuildButton_C* WBP_GuildButton_Leave;                                  // 0x02E0 (size: 0x8)
    class UWBP_GuildButton_C* WBP_GuildButton_Setting;                                // 0x02E8 (size: 0x8)
    class UWBP_GuildHeadButton_C* WBP_GuildHeadButton;                                // 0x02F0 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList_Members;                // 0x02F8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Rename;                   // 0x0300 (size: 0x8)
    FWBP_Guild_COnClickedEditGuildNameButton OnClickedEditGuildNameButton;            // 0x0308 (size: 0x10)
    void OnClickedEditGuildNameButton();
    FWBP_Guild_COnChangedGuildLogCategory OnChangedGuildLogCategory;                  // 0x0318 (size: 0x10)
    void OnChangedGuildLogCategory(FString SelectedCategoryName);
    FWBP_Guild_COnClickedGuildMemberButton OnClickedGuildMemberButton;                // 0x0328 (size: 0x10)
    void OnClickedGuildMemberButton(class UWBP_Guild_MemberList_C* Widget);
    TSoftObjectPtr<UWBP_Guild_MemberList_C> LastHoveredSoftGuildButton;               // 0x0338 (size: 0x30)
    FWBP_Guild_COnClickedLeaveButton OnClickedLeaveButton;                            // 0x0368 (size: 0x10)
    void OnClickedLeaveButton();
    FWBP_Guild_COnClickedGuildSettingButton OnClickedGuildSettingButton;              // 0x0378 (size: 0x10)
    void OnClickedGuildSettingButton();
    FWBP_Guild_COnCommiedGuildName OnCommiedGuildName;                                // 0x0388 (size: 0x10)
    void OnCommiedGuildName(FString NewName);
    TMap<class FGuid, class UWBP_Guild_MemberList_C*> DisplayWidgetMap;               // 0x0398 (size: 0x50)
    FString OriginalGuildName;                                                        // 0x03E8 (size: 0x10)
    FText TempEditableTextBox_GuildNameText;                                          // 0x03F8 (size: 0x18)

    void GetFocusTargetByPlayerUId(FGuid PlayerUId, class UWidget*& Widget);
    class UWidget* CustomNavi_ToGUildSettingButton(EUINavigation Navigation);
    void SetEnableGuildNameEditButton(bool IsEnableFlag);
    class UWidget* CustomNavi_ToGuildNameEdit(EUINavigation Navigation);
    void IsNameEditMode(bool& IsEditing);
    void SetGuildMemberNum(int32 NowMemberNum, int32 MaxMemberNum);
    void SetFocusToExitGuildButton();
    void SetEnableGuildExitButton(bool CanExit);
    class UWidget* CustomNavi_LastHoveredGuildMember(EUINavigation Navigation);
    void OnHoveredGuildMemberButton_Internal(class UWBP_Guild_MemberList_C* Widget);
    void OnClickedGuildMemberButton_Internal(class UWBP_Guild_MemberList_C* Widget);
    void GetTopMemberFocusTarget(class UWidget*& TopButton);
    void SetGuildLogCategoryOptions(TArray<FString>& Options);
    void EndGuildNameEditMode();
    void StartGuildNameMode();
    void RemoveMemberInfo(FGuid PlayerUId);
    void ClearMemberList();
    void UpdateMemberInfo(FGuid PlayerUId, FPalUIGuildMemberDisplayInfo NewDisplayInfo);
    void AddGuildMemberInfo(FGuid PlayerUId, FPalUIGuildMemberDisplayInfo DisplayInfo);
    void AddGuildMemberInfoMap(TMap<class FGuid, class FPalUIGuildMemberDisplayInfo> DisplayInfoMap);
    void SetGuildName(FString InGuildName, FGuid AdminPlayerUId);
    void Construct();
    void BndEvt__WBP_Guild_WBP_GuildButton_Leave_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void Destruct();
    void BndEvt__WBP_Guild_PalEditableTextBox_60_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__WBP_Guild_PalEditableTextBox_60_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_Guild_WBP_PalInvisibleButton_Rename_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Guild_WBP_GuildButton_Setting_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_Guild(int32 EntryPoint);
    void OnCommiedGuildName__DelegateSignature(FString NewName);
    void OnClickedGuildSettingButton__DelegateSignature();
    void OnClickedLeaveButton__DelegateSignature();
    void OnClickedGuildMemberButton__DelegateSignature(class UWBP_Guild_MemberList_C* Widget);
    void OnChangedGuildLogCategory__DelegateSignature(FString SelectedCategoryName);
    void OnClickedEditGuildNameButton__DelegateSignature();
}; // Size: 0x410

#endif
