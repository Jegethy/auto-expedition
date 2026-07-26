#ifndef UE4SS_SDK_WBP_Control_Settings_HPP
#define UE4SS_SDK_WBP_Control_Settings_HPP

class UWBP_Control_Settings_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C;                                      // 0x0280 (size: 0x8)
    class UImage* Image_52;                                                           // 0x0288 (size: 0x8)
    class UImage* Image_105;                                                          // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Language_tips;                                     // 0x0298 (size: 0x8)
    class UVerticalBox* VerticalBox_Common;                                           // 0x02A0 (size: 0x8)
    class UVerticalBox* VerticalBox_GP;                                               // 0x02A8 (size: 0x8)
    class UVerticalBox* VerticalBox_KM;                                               // 0x02B0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_AIM;                  // 0x02B8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_AimAssist;            // 0x02C0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Common_Disable_AutoPickItem; // 0x02C8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Common_Disable_GuildRequest; // 0x02D0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Common_HideCraftExpLog; // 0x02D8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Common_Language;      // 0x02E0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Dash;                 // 0x02E8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Glider_Y;             // 0x02F0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_GP_AIM;               // 0x02F8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_GP_Dash;              // 0x0300 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_GP_ToggleBuildMode;   // 0x0308 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_GP_ToggleLongPress;   // 0x0310 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_HideChat;             // 0x0318 (size: 0x8)
    class UWBP_OptionSettings_ListContent_ReticlePreview_C* WBP_OptionSettings_ListContent_ReticlePreview; // 0x0320 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_LStick_Glider_Y;      // 0x0328 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_LStick_Threshold;     // 0x0330 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_RStick_Sensitivity;   // 0x0338 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_RStick_Threshold;     // 0x0340 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_RStick_X;             // 0x0348 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_RStick_Y;             // 0x0350 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Sensitivity;          // 0x0358 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_ToggleBuildMode;      // 0x0360 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_ToggleLongPress;      // 0x0368 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_UI_ChatUICloseDelay;  // 0x0370 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_UI_DamageScale;       // 0x0378 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_UI_HideCommonKeyGuide; // 0x0380 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_UI_HideUINotInBattle; // 0x0388 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_UI_MaxDamageDisplayNum; // 0x0390 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_UI_MinFontSize;       // 0x0398 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_UI_ReticleColor;      // 0x03A0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_UI_ReticleOutlineOpacity; // 0x03A8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Vibration;            // 0x03B0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_X;                    // 0x03B8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Y;                    // 0x03C0 (size: 0x8)
    FPalOptionAudioSettings AudioSettingCache;                                        // 0x03C8 (size: 0x24)
    TArray<FDataTableRowHandle> LevelMsgIds;                                          // 0x03F0 (size: 0x10)
    bool SomethingChanged;                                                            // 0x0400 (size: 0x1)
    FPalOptionKeyboardSettings KeyboardSettingCache;                                  // 0x0404 (size: 0x14)
    FPalOptionLocalStaticSettings LocalStaticSettingCache;                            // 0x0418 (size: 0xA8)
    FPalOptionPadSettings PadSettingCache;                                            // 0x04C0 (size: 0x1C)
    TArray<class UVerticalBox*> VerticalBoxs;                                         // 0x04E0 (size: 0x10)
    TArray<class UWBP_PalCommonButtonBase_C*> FirstRows;                              // 0x04F0 (size: 0x10)
    int32 Current;                                                                    // 0x0500 (size: 0x4)
    FPalOptionUISettings UISettingCache;                                              // 0x0504 (size: 0x1C)
    FPalOptionCommonSettings CommonSettingCache;                                      // 0x0520 (size: 0x30)
    TArray<FDataTableRowHandle> ColorSelections;                                      // 0x0550 (size: 0x10)
    TArray<FDataTableRowHandle> FontSizeSelections;                                   // 0x0560 (size: 0x10)
    TMap<int32, int32> FontSizeMap;                                                   // 0x0570 (size: 0x50)
    TMap<class FString, class FDataTableRowHandle> LanguageNameMsgID;                 // 0x05C0 (size: 0x50)
    TMap<class EPalSupportedPlatformType, class FDataTableRowHandle> LanguageTipsMsgIDMap; // 0x0610 (size: 0x50)

    void SetDefault();
    void GetDesiredFocusTarget(class UWidget*& Target);
    void Construct();
    void ApplySettings();
    void SwitchTab(bool Next);
    void SwitchPanel(int32 Index);
    void OnDashChanged(bool IsOn);
    void OnMouseSensiChanged(double Value);
    void OnMouseAIMChanged(double Value);
    void OnMouseYChanged(bool IsOn);
    void OnMouseXChanged(bool IsOn);
    void OnGPDashChanged(bool IsOn);
    void OnGPAimChanged(double Value);
    void OnRStickThreChanged(double Value);
    void OnLStickThreChanged(double Value);
    void OnRStickSensiChanged(double Value);
    void OnRStickYChanged(bool IsOn);
    void OnRStickXChanged(bool IsOn);
    void OnVibChanged(bool IsOn);
    void OnHideChatChanged(bool IsOn);
    void OnToggleLongPressChanged_GP(bool IsOn);
    void OnToggleLongPressChanged(bool IsOn);
    void OnChangedDamageTextScale(double Value);
    void OnChangedMaxDamageDisplayNum(double Value);
    void OnChangedDisableAutoItemPick(bool IsOn);
    void OnChangedDisableGuildJoined(bool IsOn);
    void OnChangedReticleColor(int32 ColorIndex);
    void OnChangedReticleOutline(double Value);
    void OnChatUICloseDelayChanged(double Value);
    void OnMinFontSizeChanged(int32 Value);
    void OnToggleBuildModeChanged(bool IsOn);
    void OnToggleBuildModeChanged_GP(bool IsOn);
    void OnChangedHideCraftExpLog(bool IsOn);
    void OnChangedHideUINotInBattle(bool IsOn);
    void OnPadAimAssistChanged(bool OnPadAimAssistChanged);
    void OnGliderInvertYChanged(bool IsOn);
    void OnGliderInvertLStickYChanged(bool IsOn);
    void OnHideCommonKeyGuideChanged(bool IsOn);
    void ExecuteUbergraph_WBP_Control_Settings(int32 EntryPoint);
}; // Size: 0x660

#endif
