#ifndef UE4SS_SDK_WBP_MenuESC_HPP
#define UE4SS_SDK_WBP_MenuESC_HPP

class UWBP_MenuESC_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWidgetAnimation* Anm_Clipboard_InToOut;                                    // 0x0480 (size: 0x8)
    class UWidgetAnimation* Anm_Copy_NormalToFocus;                                   // 0x0488 (size: 0x8)
    class UCheckBox* AimAssistKeyboard_CheckBox;                                      // 0x0490 (size: 0x8)
    class UCheckBox* AimAssistPad_CheckBox;                                           // 0x0498 (size: 0x8)
    class UCheckBox* bActiveUNKO_CheckBox;                                            // 0x04A0 (size: 0x8)
    class UCheckBox* bEnableFriendlyFire_CheckBox;                                    // 0x04A8 (size: 0x8)
    class UCheckBox* bEnableInvaderEnemy_CheckBox;                                    // 0x04B0 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_MultiTips;                      // 0x04B8 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_JitterNum;                               // 0x04C0 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_JoinNum;                                 // 0x04C8 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_PacketlossNum;                           // 0x04D0 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_RTTNum;                                  // 0x04D8 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_ServerFPSNum;                            // 0x04E0 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_WorldExplain;                            // 0x04E8 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_WorldName;                               // 0x04F0 (size: 0x8)
    class USpinBox* BuildObjectDamageRate_SpinBox;                                    // 0x04F8 (size: 0x8)
    class UCanvasPanel* Canvas_Buttons;                                               // 0x0500 (size: 0x8)
    class UCanvasPanel* Canvas_Content;                                               // 0x0508 (size: 0x8)
    class UCanvasPanel* CanvasPanel_EOSError;                                         // 0x0510 (size: 0x8)
    class UCanvasPanel* CanvasPanel_MultiTips;                                        // 0x0518 (size: 0x8)
    class UCanvasPanel* CanvasPanelPlayerList;                                        // 0x0520 (size: 0x8)
    class UCanvasPanel* CanvasPanelServerInfo;                                        // 0x0528 (size: 0x8)
    class USpinBox* CollectionDropRate_SpinBox;                                       // 0x0530 (size: 0x8)
    class USpinBox* CollectionObjectHpRate_SpinBox;                                   // 0x0538 (size: 0x8)
    class USpinBox* CollectionObjectRespawnSpeedRate;                                 // 0x0540 (size: 0x8)
    class UOverlay* CopyCode;                                                         // 0x0548 (size: 0x8)
    class USpinBox* DayTimeSpeedRateValue_SpinBox;                                    // 0x0550 (size: 0x8)
    class UComboBoxString* DeathPenalty_ComboBox;                                     // 0x0558 (size: 0x8)
    class UComboBoxString* Difficulty_ComboBox;                                       // 0x0560 (size: 0x8)
    class USpinBox* DropItemMaxNum_SpinBox;                                           // 0x0568 (size: 0x8)
    class USpinBox* DropItemMaxNum_UNKO_SpinBox;                                      // 0x0570 (size: 0x8)
    class USpinBox* EnemyDropItemRate_SpinBox;                                        // 0x0578 (size: 0x8)
    class USpinBox* ExpRate_SpinBox;                                                  // 0x0580 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Jitter;                                       // 0x0588 (size: 0x8)
    class UHorizontalBox* HorizontalBox_JoinNum;                                      // 0x0590 (size: 0x8)
    class UHorizontalBox* HorizontalBox_PacketLoss;                                   // 0x0598 (size: 0x8)
    class UHorizontalBox* HorizontalBox_RTT;                                          // 0x05A0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_ServerFPS;                                    // 0x05A8 (size: 0x8)
    class UImage* IconShowHide;                                                       // 0x05B0 (size: 0x8)
    class UImage* Image_115;                                                          // 0x05B8 (size: 0x8)
    class UImage* Image_CautionBase;                                                  // 0x05C0 (size: 0x8)
    class UHorizontalBox* InviteCode_HorizontalBox;                                   // 0x05C8 (size: 0x8)
    class USpinBox* NightTimeSpeedRate_SpinBox;                                       // 0x05D0 (size: 0x8)
    class UOverlay* Overlay_WorldExplain;                                             // 0x05D8 (size: 0x8)
    class USpinBox* PalAutoHPRegeneRate_SpinBox;                                      // 0x05E0 (size: 0x8)
    class USpinBox* PalAutoHpRegeneRateInSleep_SpinBOx;                               // 0x05E8 (size: 0x8)
    class USpinBox* PalCaptureRateAdd_SpinBox;                                        // 0x05F0 (size: 0x8)
    class USpinBox* PalDamageRateAttack_SpinBox;                                      // 0x05F8 (size: 0x8)
    class USpinBox* PalDamageRateDefense_SpinBox;                                     // 0x0600 (size: 0x8)
    class UPalRichTextBlockBase* PalRichTextBlockBase_370;                            // 0x0608 (size: 0x8)
    class USpinBox* PalSpawnNumRate_SpinBox;                                          // 0x0610 (size: 0x8)
    class USpinBox* PalStaminaDecreaceRate;                                           // 0x0618 (size: 0x8)
    class USpinBox* PalStomachDecreaceRate_SpinBox;                                   // 0x0620 (size: 0x8)
    class USpinBox* PlayerAutoHPRegeneRate_SpinBox;                                   // 0x0628 (size: 0x8)
    class USpinBox* PlayerAutoHpRegeneRateInSleep_SpinBox;                            // 0x0630 (size: 0x8)
    class USpinBox* PlayerDamageRateAttack_SpinBox;                                   // 0x0638 (size: 0x8)
    class USpinBox* PlayerDamageRateDefense_SpinBox;                                  // 0x0640 (size: 0x8)
    class USpinBox* PlayerStaminaDecreaceRate;                                        // 0x0648 (size: 0x8)
    class USpinBox* PlayerStomachDecreaceRate_SpinBox;                                // 0x0650 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichTextBlock_EOSError;                             // 0x0658 (size: 0x8)
    class UScrollBox* ScrollBox_Text;                                                 // 0x0660 (size: 0x8)
    class UBP_PalTextBlock_C* Text_InviteCode;                                        // 0x0668 (size: 0x8)
    class UVerticalBox* VerticalBox_PlayerList;                                       // 0x0670 (size: 0x8)
    class UVerticalBox* VerticalBox_ServerInfo;                                       // 0x0678 (size: 0x8)
    class UVerticalBox* VerticalBoxWorld;                                             // 0x0680 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_BlockList;                          // 0x0688 (size: 0x8)
    class UWBP_MenuESC_Button_C* WBP_MenuESC_Button_Note;                             // 0x0690 (size: 0x8)
    class UWBP_MenuESC_Button_C* WBP_MenuESC_Button_Option;                           // 0x0698 (size: 0x8)
    class UWBP_MenuESC_Button_S_C* WBP_MenuESC_Button_S_Discord;                      // 0x06A0 (size: 0x8)
    class UWBP_MenuESC_Button_S_C* WBP_MenuESC_Button_S_Eula;                         // 0x06A8 (size: 0x8)
    class UWBP_MenuESC_Button_S_C* WBP_MenuESC_Button_S_Form;                         // 0x06B0 (size: 0x8)
    class UWBP_MenuESC_Button_S_C* WBP_MenuESC_Button_S_Pause;                        // 0x06B8 (size: 0x8)
    class UWBP_MenuESC_Button_S_C* WBP_MenuESC_Button_S_ReturnTitle;                  // 0x06C0 (size: 0x8)
    class UWBP_MenuESC_Button_S_C* WBP_MenuESC_Button_S_XBInvite;                     // 0x06C8 (size: 0x8)
    class UWBP_MenuESC_Button_S_C* WBP_MenuESC_Button_Suicide;                        // 0x06D0 (size: 0x8)
    class UWBP_MenuESC_Button_C* WBP_MenuESC_Button_Tips;                             // 0x06D8 (size: 0x8)
    class UWBP_MenuESC_PlayerMenu_C* WBP_MenuESC_PlayerMenu;                          // 0x06E0 (size: 0x8)
    class UWBP_MenuESC_tabset_C* WBP_MenuESC_tabset1;                                 // 0x06E8 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList_Members;                // 0x06F0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_CopyCode;                 // 0x06F8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_ShoiwHideInviteCode;      // 0x0700 (size: 0x8)
    class UCanvasPanel* WorldOptionCanvas;                                            // 0x0708 (size: 0x8)
    FPalOptionWorldSettings OptionWorldSettingsCache;                                 // 0x0710 (size: 0x208)
    FPalOptionAudioSettings AudioSettingsCache;                                       // 0x0918 (size: 0x24)
    FPalOptionKeyboardSettings KeyboardSettingsCache;                                 // 0x093C (size: 0x14)
    FPalOptionPadSettings PadSettingsCache;                                           // 0x0950 (size: 0x1C)
    FPalOptionGraphicsSettings GraphicsSettingsCache;                                 // 0x096C (size: 0x68)
    FDataTableRowHandle CheckSucide_FirstStep;                                        // 0x09D8 (size: 0x10)
    FDataTableRowHandle CheckSucide_SecondStep;                                       // 0x09E8 (size: 0x10)
    FDataTableRowHandle ToTitleDialogMsgId;                                           // 0x09F8 (size: 0x10)
    bool bShowInviteCode;                                                             // 0x0A08 (size: 0x1)
    bool Close All;                                                                   // 0x0A09 (size: 0x1)
    FWBP_MenuESC_COnCloseEscMenu OnCloseEscMenu;                                      // 0x0A10 (size: 0x10)
    void OnCloseEscMenu();
    bool IsSelectingMemberMenu;                                                       // 0x0A20 (size: 0x1)
    TSoftObjectPtr<UWBP_MenuESCPlayerListItem_C> SelectionPlayerWidget;               // 0x0A28 (size: 0x30)
    FDataTableRowHandle MutePlayerDialogMsgID;                                        // 0x0A58 (size: 0x10)
    FGuid MutePlayerUId;                                                              // 0x0A68 (size: 0x10)
    FText Ban Reason;                                                                 // 0x0A78 (size: 0x18)
    FDataTableRowHandle UnMutePlayerDialogMsgID;                                      // 0x0A90 (size: 0x10)
    FDataTableRowHandle BlockPlayerDialogMsgID;                                       // 0x0AA0 (size: 0x10)
    FDataTableRowHandle UnBlockPlayerDialogMsgID;                                     // 0x0AB0 (size: 0x10)
    int32 TabIndex;                                                                   // 0x0AC0 (size: 0x4)
    bool IsFirstSetup;                                                                // 0x0AC4 (size: 0x1)
    class UWidgetAnimation* Anm_PalInfo;                                              // 0x0AC8 (size: 0x8)
    class UWidgetAnimation* Anm_PalinfoToMap;                                         // 0x0AD0 (size: 0x8)
    class UWidgetAnimation* Anm_MapToPalinfo;                                         // 0x0AD8 (size: 0x8)
    FPalDataTableRowName_UIInputAction ToPlayerlistInputAction;                       // 0x0AE0 (size: 0x8)
    FPalDataTableRowName_UIInputAction ToServerinfoInputAction;                       // 0x0AE8 (size: 0x8)
    FPalUIActionBindData ToPlayerlistInputHandle;                                     // 0x0AF0 (size: 0x4)
    FPalUIActionBindData ToServerinfoInputHandle;                                     // 0x0AF4 (size: 0x4)
    double ScrollPerSecond;                                                           // 0x0AF8 (size: 0x8)
    double RightStickAxisY;                                                           // 0x0B00 (size: 0x8)
    FTimerHandle CheckEOSStatusTimerHandle;                                           // 0x0B08 (size: 0x8)
    TArray<class UWBP_MenuESC_Button_Base_C*> MenuButtons;                            // 0x0B10 (size: 0x10)
    FDataTableRowHandle EOSConnectionIssueMsgID;                                      // 0x0B20 (size: 0x10)
    TEnumAsByte<E_PalEscMenuType::Type> CurrentMenuType;                              // 0x0B30 (size: 0x1)
    FWBP_MenuESC_COnLaunchHeilGuideOrSurvivalGuide OnLaunchHeilGuideOrSurvivalGuide;  // 0x0B38 (size: 0x10)
    void OnLaunchHeilGuideOrSurvivalGuide();
    FWBP_MenuESC_COnReturnFromGuideMenu OnReturnFromGuideMenu;                        // 0x0B48 (size: 0x10)
    void OnReturnFromGuideMenu();

    void OnClosedAnyGuideMenu(class UPalHUDDispatchParameterBase* Param);
    void CloseOverride();
    void OnClosedDialog_FirstCheck_Sucide(bool bResult);
    void HandleDiscordLink();
    void OnTimerEvent_CheckEOSStatus();
    bool IsLeftMenuFocused(class UPanelWidget* CanvasButtons);
    void OnClickedButton(TEnumAsByte<E_PalEscMenuType::Type> MenuType);
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void Open Form();
    void OpenEULA();
    void OpenUserReport();
    void CloseBlockList();
    void OpenBlockList();
    void ToPlayerlistDisplayMode();
    void ToServerinfoDisplayMode();
    void OnChangePlayerlistInput();
    void OnChangeServerinfoInput();
    void ChangeTab(int32 TabIndex);
    void CreatePlayerList();
    void On Session Member Change(FString UserId, const EPalSessionMemberChange ChangeType);
    void OnClosePlayerUnBlockDialog(bool bResult);
    void OnClosePlayerUnMuteDialog(bool bResult);
    void OnClosePlayerBlockDialog(bool bResult);
    void OnClosePlayerMuteDialog(bool bResult);
    void OpenPlayerBlockDialog(bool bInBlock);
    void OpenPlayerMuteDialog(bool bInMute);
    void CanClose(bool& CanCloseFlag);
    void Close Member Setting Window();
    void On Right Clicked Player List Item(class UWBP_MenuESCPlayerListItem_C* ButtonBase);
    void CloseAction();
    class UWidget* CustomNavi_ToLeftMenuBottom(EUINavigation Navigation);
    class UWidget* CustomNavi_ToLeftMenuTop(EUINavigation Navigation);
    class UWidget* CustomNavi_ToInviteCode(EUINavigation Navigation);
    void SetInviteCodeText();
    void ShowHideInviteCode();
    void CopyInviteCode();
    class UWidget* BP_GetDesiredFocusTarget();
    void ApplyWorldPreset(FString Difficulty);
    void InitOptionFieldBool(class UCheckBox* CheckBox, bool& CurrentValue);
    void InitOptionFieldInt(FPalOptionValueInt MinMaxValue, class USpinBox* SpinBox, int32& CurrentValue);
    void ApplyWorldSettings();
    void InitOptionFieldFloat(FPalOptionValueFloat MinMaxValue, class USpinBox* SpinBox, double& CurrentValue);
    void SetupWorldOptions();
    void BndEvt__WBP_MenuESC_ExpRate_SpinBox_K2Node_ComponentBoundEvent_4_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PalCaptureRateAdd_SpinBox_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_Value_4_K2Node_ComponentBoundEvent_6_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PalDamageRateAttack_SpinBox_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PalDamageRateDefense_SpinBox_K2Node_ComponentBoundEvent_8_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PlayerDamageRateAttack_SpinBox_K2Node_ComponentBoundEvent_9_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PlayerDamageRateDefense_SpinBox_K2Node_ComponentBoundEvent_10_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PlayerStomachDecreaceRate_SpinBox_K2Node_ComponentBoundEvent_11_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_Value_9_K2Node_ComponentBoundEvent_12_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PlayerAutoHPRegeneRate_SpinBox_K2Node_ComponentBoundEvent_13_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PlayerAutoHpRegenRateInSleep_SpinBox_K2Node_ComponentBoundEvent_14_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PalStomachDecreaceRate_SpinBox_K2Node_ComponentBoundEvent_15_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_Value_13_K2Node_ComponentBoundEvent_16_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PalAutoHPRegeneRate_SpinBox_K2Node_ComponentBoundEvent_17_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PalAutoHpRegenRateInSleep_SpinBOx_K2Node_ComponentBoundEvent_18_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_BuildObjectDamageRate_SpinBox_K2Node_ComponentBoundEvent_19_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_CollectionDropRate_SpinBox_K2Node_ComponentBoundEvent_20_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_CollectionObjectHpRate_SpinBox_K2Node_ComponentBoundEvent_21_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_Value_15_K2Node_ComponentBoundEvent_22_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_EnemyDropItemRate_SpinBox_K2Node_ComponentBoundEvent_23_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_bActiveUNKO_CheckBox_K2Node_ComponentBoundEvent_24_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__WBP_MenuESC_AimAssistPad_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__WBP_MenuESC_AimAssistKeyboard_CheckBox_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__WBP_MenuESC_ComboBoxString_153_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__WBP_MenuESC_bEnableFriendlyFire_CheckBox_K2Node_ComponentBoundEvent_51_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__WBP_MenuESC_bEnableInvaderEnemy_CheckBox_K2Node_ComponentBoundEvent_55_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__WBP_MenuESC_DropItemMaxNum_SpinBox_K2Node_ComponentBoundEvent_56_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_DropItemMaxNum_UNKO_SpinBox_K2Node_ComponentBoundEvent_57_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_NightTimeSpeedRate_SpinBox_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnKillExecute();
    void ConfirmKill(bool Confirm);
    void BndEvt__WBP_MenuESC_DayTimeSpeedRateValue_SpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnReturn2Title();
    void ConfirmReturnTitle(bool Confirm);
    void BndEvt__WBP_MenuESC_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MenuESC_WBP_PalInvisibleButton_CopyCode_K2Node_ComponentBoundEvent_25_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void UpdateRTT();
    void AnmEvent_ChnageTimeType(TEnumAsByte<E_PaldexDistributionTimeType::Type> timeType);
    void AnmEvent_FirstOpen();
    void AnmEvent_ToDistribution();
    void BndEvt__WBP_MenuESC_WBP_MenuESC_PlayerMenu_K2Node_ComponentBoundEvent_26_OnPlayerMenuCopyUserId__DelegateSignature(class UWBP_MenuESCPlayerListItem_C* inTargetWidget);
    void BndEvt__WBP_MenuESC_WBP_MenuESC_PlayerMenu_K2Node_ComponentBoundEvent_28_OnPlayerMenuCopyPlayerUId__DelegateSignature(class UWBP_MenuESCPlayerListItem_C* inTargetWidget);
    void BndEvt__WBP_MenuESC_WBP_MenuESC_PlayerMenu_K2Node_ComponentBoundEvent_29_OnPlayerMenuMute__DelegateSignature();
    void BndEvt__WBP_MenuESC_WBP_MenuESC_PlayerMenu_K2Node_ComponentBoundEvent_30_OnPlayerMenuBlock__DelegateSignature();
    void BndEvt__WBP_MenuESC_WBP_MenuESC_PlayerMenu_K2Node_ComponentBoundEvent_31_OnPlayerMenuUnMute__DelegateSignature();
    void BndEvt__WBP_MenuESC_WBP_MenuESC_PlayerMenu_K2Node_ComponentBoundEvent_32_OnPlayerMenuUnBlock__DelegateSignature();
    void BndEvt__WBP_MenuESC_WBP_MenuESC_PlayerMenu_K2Node_ComponentBoundEvent_33_OnPlayerMenuCancel__DelegateSignature();
    void BndEvt__WBP_MenuESC_WBP_MenuESC_tabset1_K2Node_ComponentBoundEvent_36_OnSelectedModelTab__DelegateSignature();
    void BndEvt__WBP_MenuESC_WBP_MenuESC_tabset1_K2Node_ComponentBoundEvent_37_OnSelectedDistributionTab__DelegateSignature();
    void BndEvt__WBP_MenuESC_WBP_CommonButton_BlockList_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature();
    void AnmEvent_ToModel();
    void BndEvt__WBP_MenuESC_WBP_MenuESC_PlayerMenu_K2Node_ComponentBoundEvent_35_OnPlayerMenuUserReport__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_MenuESC(int32 EntryPoint);
    void OnReturnFromGuideMenu__DelegateSignature();
    void OnLaunchHeilGuideOrSurvivalGuide__DelegateSignature();
    void OnCloseEscMenu__DelegateSignature();
}; // Size: 0xB58

#endif
