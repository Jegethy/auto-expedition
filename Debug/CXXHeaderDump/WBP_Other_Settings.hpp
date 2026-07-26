#ifndef UE4SS_SDK_WBP_Other_Settings_HPP
#define UE4SS_SDK_WBP_Other_Settings_HPP

class UWBP_Other_Settings_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Language;             // 0x0280 (size: 0x8)
    FPalOptionAudioSettings AudioSettingCache;                                        // 0x0288 (size: 0x24)
    TArray<FDataTableRowHandle> LangMsgIds;                                           // 0x02B0 (size: 0x10)
    bool SomethingChanged;                                                            // 0x02C0 (size: 0x1)
    FPalOptionAudioSettings OriginalSettingCache;                                     // 0x02C4 (size: 0x24)
    FString NewLang;                                                                  // 0x02E8 (size: 0x10)
    TMap<class FString, class FDataTableRowHandle> LangMap;                           // 0x02F8 (size: 0x50)

    void Construct();
    void OnLanguageChanged(int32 Value);
    void ApplySettings(bool ApplyOriginal);
    void SetDefault();
    void ExecuteUbergraph_WBP_Other_Settings(int32 EntryPoint);
}; // Size: 0x348

#endif
