#ifndef UE4SS_SDK_WBP_Expedition_HPP
#define UE4SS_SDK_WBP_Expedition_HPP

class UWBP_Expedition_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UCanvasPanel* Canvas_Item_Title;                                            // 0x0458 (size: 0x8)
    class UCanvasPanel* Canvas_PalSelect;                                             // 0x0460 (size: 0x8)
    class UCanvasPanel* Canvas_SelectPal;                                             // 0x0468 (size: 0x8)
    class UCanvasPanel* Canvas_StageImage;                                            // 0x0470 (size: 0x8)
    class UCanvasPanel* Canvas_StageInfo;                                             // 0x0478 (size: 0x8)
    class UCanvasPanel* Canvas_StageSelect;                                           // 0x0480 (size: 0x8)
    class UHorizontalBox* HorizontalBox_NoRequireElement;                             // 0x0488 (size: 0x8)
    class UImage* Image_StageBase;                                                    // 0x0490 (size: 0x8)
    class UOverlay* Overlay_Element_Required;                                         // 0x0498 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Condition_TimeNum;                                 // 0x04A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ElementName;                                       // 0x04A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalNum;                                            // 0x04B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalNum_Max;                                        // 0x04B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Power_Required;                                    // 0x04C0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Power_Value;                                       // 0x04C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PowerNum;                                          // 0x04D0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RewardPercent;                                     // 0x04D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RewardRateValue;                                   // 0x04E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SelectedMission_CurrentElementNum;                 // 0x04E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SelectedMission_ElementNum_Required;               // 0x04F0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SelectedMissionDifficulty;                         // 0x04F8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SelectedMissionName;                               // 0x0500 (size: 0x8)
    class UBP_PalTextBlock_C* Text_TimeNum;                                           // 0x0508 (size: 0x8)
    class UVerticalBox* VerticalBox_RequireInfo;                                      // 0x0510 (size: 0x8)
    class UWBP_BoxPalList_C* WBP_BoxPalList;                                          // 0x0518 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_0_Auto;                             // 0x0520 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_0_ExcludeConfirm;                   // 0x0528 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_0_ExcludeStart;                     // 0x0530 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_0_Reset;                            // 0x0538 (size: 0x8)
    class UWBP_CommonButton_2_C* WBP_CommonButton_CanStart;                           // 0x0540 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_ReturnMissionSelect;                // 0x0548 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton_Start;                                // 0x0550 (size: 0x8)
    class UWBP_Expedition_PalPowerPopup_C* WBP_ExpeditionPalPowerPopup;               // 0x0558 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;        // 0x0560 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0568 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn_1;                                            // 0x0570 (size: 0x8)
    class UWBP_NoData_C* WBP_NoData_AssignPalList;                                    // 0x0578 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList_RewardItem;             // 0x0580 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList_SelectPal;              // 0x0588 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList_Stage;                  // 0x0590 (size: 0x8)
    class UWBP_PalElementIcon_C* WBP_PalElementIcon;                                  // 0x0598 (size: 0x8)
    class UWBP_PalElementIcon_C* WBP_PalElementIcon_28;                               // 0x05A0 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x05A8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_77;                             // 0x05B0 (size: 0x8)
    FWBP_Expedition_COnClickedMissionPanel OnClickedMissionPanel;                     // 0x05B8 (size: 0x10)
    void OnClickedMissionPanel(class UWBP_Expedition_StageList_C* Widget);
    FWBP_Expedition_COnClickedCloseButton OnClickedCloseButton;                       // 0x05C8 (size: 0x10)
    void OnClickedCloseButton();
    FWBP_Expedition_COnClickedCharacterSlot OnClickedCharacterSlot;                   // 0x05D8 (size: 0x10)
    void OnClickedCharacterSlot(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    FWBP_Expedition_COnHoveredCharacterSlot OnHoveredCharacterSlot;                   // 0x05E8 (size: 0x10)
    void OnHoveredCharacterSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_Expedition_COnUnhoveredCharacterSlot OnUnhoveredCharacterSlot;               // 0x05F8 (size: 0x10)
    void OnUnhoveredCharacterSlot();
    FWBP_Expedition_COnClickedReturnMissionSelectButton OnClickedReturnMissionSelectButton; // 0x0608 (size: 0x10)
    void OnClickedReturnMissionSelectButton();
    FWBP_Expedition_COnClickedAutoSelectButton OnClickedAutoSelectButton;             // 0x0618 (size: 0x10)
    void OnClickedAutoSelectButton();
    FWBP_Expedition_COnClickedAllUnassignButton OnClickedAllUnassignButton;           // 0x0628 (size: 0x10)
    void OnClickedAllUnassignButton();
    FWBP_Expedition_COnClickedAssignedPalPanel OnClickedAssignedPalPanel;             // 0x0638 (size: 0x10)
    void OnClickedAssignedPalPanel(class UWBP_Expedition_PalList_C* Widget);
    FWBP_Expedition_COnClickedStartMissionButton OnClickedStartMissionButton;         // 0x0648 (size: 0x10)
    void OnClickedStartMissionButton();
    FPalDataTableRowName_UIInputAction ChangeMissionInputActionHandle;                // 0x0658 (size: 0x8)
    FPalUIActionBindData ChangeMissionInputHandle;                                    // 0x0660 (size: 0x4)
    bool bIsSelectingTeam;                                                            // 0x0664 (size: 0x1)
    FWBP_Expedition_COnHoveredAssignedPalPanel OnHoveredAssignedPalPanel;             // 0x0668 (size: 0x10)
    void OnHoveredAssignedPalPanel(class UWBP_Expedition_PalList_C* Widget);
    TSoftObjectPtr<UWBP_Expedition_PalList_C> LastHoveredAssignedPalPanel;            // 0x0678 (size: 0x30)
    TMap<class FPalInstanceID, class UWBP_Expedition_PalList_C*> SelectedPalPanelMap; // 0x06A8 (size: 0x50)
    FGuid CurrentMapObjectModelInstanceId;                                            // 0x06F8 (size: 0x10)
    FWBP_Expedition_COnClickedStartExcludeSettingsButton OnClickedStartExcludeSettingsButton; // 0x0708 (size: 0x10)
    void OnClickedStartExcludeSettingsButton();
    FWBP_Expedition_COnClickedEndExcludeSettingsButton OnClickedEndExcludeSettingsButton; // 0x0718 (size: 0x10)
    void OnClickedEndExcludeSettingsButton();
    bool bExcludeSettingMode;                                                         // 0x0728 (size: 0x1)

    void ResetCurrentPageExcludeCheckMark();
    void IsExcludeSettingMode(bool& bInMode);
    void EndExcludeSetting();
    void ToExcludeSettingMode();
    void ClearMissionList();
    void UpdateSlotDetail(class UWBP_PalCommonCharacterSlotButton_C* SlotButton);
    void UpdateCurrentPageSlotDetail();
    void Set Current Map Object Model Instance Id(FGuid InstanceId);
    void ResetRewardItemListScroll();
    void AddRewardItemListScrollOffset(double AddOffset);
    void OnHoveredBoxSlot_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void GetFocusTarget_AssignedPalByIndex(int32 ListIndex, class UWidget*& TargetWidget);
    void OnHoveredAssignedPalPanel_Internal(class UWBP_Expedition_PalList_C* Widget);
    void SetMissionCompleteTime(int64 Seconds, bool bOverPower);
    void IsSelectiongTeam(bool& bIsSelection);
    void OnInputAction_ChangeMission();
    void HideCharacterPowerInfo();
    void DisplayCharacterPowerInfo(class UWBP_PalCharacterSlotButtonBase_C* TargetSlotButton, int32 Power);
    void OnClickedAssignedPalPanel_Internal(class UWBP_Expedition_PalList_C* Widget);
    void SetCanStart(bool bCanStart);
    void SetRewardRate(double Rate);
    void SetRequireElementInfo(int32 CurrentElementNum, bool bConfition);
    void SetTeamPower(int32 Power);
    void Update Assign Character List(TArray<FPalUIMapObjectCharacterTeamMissionIndividual>& AssignInfo);
    void SetSelectedMission(FPalCharacterTeamMissionInfo MissionInfo);
    void GetTopPalSlotFocusTarget(class UWidget*& Widget);
    void GetTopMissionFocusTarget(class UWidget*& TargetWidget);
    void ToTeamSelect();
    void ToMissionSelect();
    void DisplayMissionInfo(FPalCharacterTeamMissionInfo MissionInfo);
    void OnHoveredMissionPanel_Internal(class UWBP_Expedition_StageList_C* Widget);
    void OnClickedMissionPanel_Internal(class UWBP_Expedition_StageList_C* Widget);
    void AddSelectableMissions(TArray<FPalCharacterTeamMissionInfo>& MissionInfoArray);
    void Construct();
    void BndEvt__WBP_Expedition_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_Expedition_WBP_Menu_btn_1_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
    void OnInitialized();
    void Destruct();
    void BndEvt__WBP_Expedition_WBP_BoxPalList_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_Expedition_WBP_CommonButton_0_Auto_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_Expedition_WBP_CommonButton_0_Auto_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void BndEvt__WBP_Expedition_WBP_CommonButton_0_Reset_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void BndEvt__WBP_Expedition_WBP_BoxPalList_K2Node_ComponentBoundEvent_6_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_Expedition_WBP_BoxPalList_K2Node_ComponentBoundEvent_7_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_Expedition_WBP_BoxPalList_K2Node_ComponentBoundEvent_11_OnUpdatedPage__DelegateSignature(int32 NowPage);
    void BndEvt__WBP_Expedition_WBP_CommonButton_2_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
    void BndEvt__WBP_Expedition_WBP_CommonButton_0_ExcludeStart_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
    void BndEvt__WBP_Expedition_WBP_CommonButton_0_ExcludeConfirm_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
    void BndEvt__WBP_Expedition_WBP_BoxPalList_K2Node_ComponentBoundEvent_12_OnSyncedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void ExecuteUbergraph_WBP_Expedition(int32 EntryPoint);
    void OnClickedEndExcludeSettingsButton__DelegateSignature();
    void OnClickedStartExcludeSettingsButton__DelegateSignature();
    void OnHoveredAssignedPalPanel__DelegateSignature(class UWBP_Expedition_PalList_C* Widget);
    void OnClickedStartMissionButton__DelegateSignature();
    void OnUnhoveredCharacterSlot__DelegateSignature();
    void OnHoveredCharacterSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnClickedAssignedPalPanel__DelegateSignature(class UWBP_Expedition_PalList_C* Widget);
    void OnClickedAllUnassignButton__DelegateSignature();
    void OnClickedAutoSelectButton__DelegateSignature();
    void OnClickedReturnMissionSelectButton__DelegateSignature();
    void OnClickedCharacterSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void OnClickedCloseButton__DelegateSignature();
    void OnClickedMissionPanel__DelegateSignature(class UWBP_Expedition_StageList_C* Widget);
}; // Size: 0x729

#endif
