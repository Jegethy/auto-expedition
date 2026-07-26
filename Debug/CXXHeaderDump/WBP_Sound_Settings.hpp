#ifndef UE4SS_SDK_WBP_Sound_Settings_HPP
#define UE4SS_SDK_WBP_Sound_Settings_HPP

class UWBP_Sound_Settings_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C;                                      // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_2;                                    // 0x0288 (size: 0x8)
    class UOverlay* CautionText;                                                      // 0x0290 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Ambient;              // 0x0298 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_BGM;                  // 0x02A0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Discord_Connect;      // 0x02A8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Discord_FriendList;   // 0x02B0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Master;               // 0x02B8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_PalVoice;             // 0x02C0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_SE;                   // 0x02C8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Toggle_GameMachine;   // 0x02D0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Toggle_NPCVoice;      // 0x02D8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Toggle_PalEffect;     // 0x02E0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Toggle_PalWorking;    // 0x02E8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Toggle_PlayerVoice;   // 0x02F0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Toggle_RarePalEffect; // 0x02F8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_UI;                   // 0x0300 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_VoiceChat_Device;     // 0x0308 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_VoiceChat_Input_Setting; // 0x0310 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_VoiceChat_Input_Volume; // 0x0318 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_VoiceChat_Mute_Myself; // 0x0320 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_VoiceChat_Mute_Others; // 0x0328 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_VoiceChat_Output_Volume; // 0x0330 (size: 0x8)
    FPalOptionAudioSettings AudioSettingCache;                                        // 0x0338 (size: 0x24)
    TArray<FDataTableRowHandle> LevelMsgIds;                                          // 0x0360 (size: 0x10)
    bool SomethingChanged;                                                            // 0x0370 (size: 0x1)
    FPalOptionAudioSettings OriginalSettingCache;                                     // 0x0374 (size: 0x24)
    FPalOptionVoiceChatSettings VoiceChatSettingCache;                                // 0x0398 (size: 0x50)
    class UWBP_Option_DiscordFriendList_C* OptionDiscordFriend;                       // 0x03E8 (size: 0x8)
    TArray<FDataTableRowHandle> VoiceChatModeMsgIds;                                  // 0x03F0 (size: 0x10)
    TArray<FString> VoiceChatDevices;                                                 // 0x0400 (size: 0x10)
    int32 CurrentVoiceChatDeviceIndex;                                                // 0x0410 (size: 0x4)
    int32 DefaultVoiceChatDeviceIndex;                                                // 0x0414 (size: 0x4)

    void Construct();
    void OnMasterChanged(double Value);
    void OnBGMChanged(double Value);
    void OnSEChanged(double Value);
    void ApplySettings(bool ApplyOriginal);
    void SetDefault();
    void OnPalVoiceChanged(double Value);
    void OnPlayerVoiceChanged(double Value);
    void OnAmbientChanged(double Value);
    void OnUIChanged(double Value);
    void OnChangedSwitch_GameMachine(bool IsOn);
    void OnChangedSwitch_PalEffect(bool IsOn);
    void OnChangedSwitch_RarePalEffect(bool IsOn);
    void OnChangedSwitch_VoiceChat_Mute_MySelf(bool IsOn);
    void OnChangedSwitch_VoiceChat_Mute_Others(bool IsOn);
    void OnChangedSlider_VoiceChat_Input_Volume(double Volume);
    void OnChangedSlider_VoiceChat_Output_Volume(double Volume);
    void UpdateDiscordUI();
    void OnSwitchDiscordLinkAccount(bool IsOn);
    void OnClickShowDiscordFriiendList();
    void OnClickCloseDiscordFriiendList();
    void OnChangedSwitch_PalWorking(bool IsOn);
    void WBP_Sound_Settings_AutoGenFunc(double Value);
    void OnChangedSelection_VoiceChat_Input_Setting(int32 Selection);
    void OnChangeVoiceChatDevice(int32 Selection);
    void ExecuteUbergraph_WBP_Sound_Settings(int32 EntryPoint);
}; // Size: 0x418

#endif
