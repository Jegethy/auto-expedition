#ifndef UE4SS_SDK_WBP_Ingame_Sleep_HPP
#define UE4SS_SDK_WBP_Ingame_Sleep_HPP

class UWBP_Ingame_Sleep_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0280 (size: 0x8)
    class UWBP_Ingame_Sleep_KeyGuide_C* Ingame_Sleep_KeyGuide_AllowSkipNight;         // 0x0288 (size: 0x8)
    class UWBP_Ingame_Sleep_KeyGuide_C* Ingame_Sleep_KeyGuide_Getup;                  // 0x0290 (size: 0x8)
    class UWBP_Ingame_Sleep_KeyGuide_C* Ingame_Sleep_KeyGuide_PhotoMode;              // 0x0298 (size: 0x8)
    class UCanvasPanel* SleepingCanvasPanel;                                          // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Num;                                               // 0x02A8 (size: 0x8)

    void OnChangeSleepingPlayerNum(class UPalTimeManager* Manager);
    void SetSleepCount(int32 Count);
    bool IsActionSleepOnSide(UClass* Class);
    void SetupKeyGuide();
    void SetupMenu();
    void CloseMenu();
    void ExecuteUbergraph_WBP_Ingame_Sleep(int32 EntryPoint);
}; // Size: 0x2B0

#endif
