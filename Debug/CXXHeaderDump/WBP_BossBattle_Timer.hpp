#ifndef UE4SS_SDK_WBP_BossBattle_Timer_HPP
#define UE4SS_SDK_WBP_BossBattle_Timer_HPP

class UWBP_BossBattle_Timer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Message_Loop;                                         // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Message_Out;                                          // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Message_In;                                           // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_CountDown;                              // 0x0298 (size: 0x8)
    class UImage* Image;                                                              // 0x02A0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_78;                                                           // 0x02C0 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x02C8 (size: 0x8)
    class UOverlay* Overlay_Message;                                                  // 0x02D0 (size: 0x8)
    class UOverlay* Overlay_Wave;                                                     // 0x02D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Altar_Preparing;                                   // 0x02E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_WaveNum_Current;                                   // 0x02E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_WaveNum_Max;                                       // 0x02F0 (size: 0x8)
    FTimerHandle LoopAnimTimer_RaidBossSummonHelp;                                    // 0x02F8 (size: 0x8)

    void HideWaveCount();
    void ShowWaveCount();
    void SetRemainWaveTime(double RemainWaveTime);
    void SetMaxWaveCount(int32 MaxWaveCount);
    void SetWaveCount(int32 CurrentWaveCount);
    void SetRemainSecond(int32 RemainSecond);
    void SetText(FText Text);
    void StartRaidBossReadyPhase(int32 RemainingSeconds);
    void EndRaidBossReadyPhase();
    void StartDisplayTimerSimple(int32 RemainingSeconds);
    void EndDisplayTimerSimple();
    void PlayAnim_RaidBossSummonHelp();
    void StopAnim_RaidBossSummonHelp();
    void ExecuteUbergraph_WBP_BossBattle_Timer(int32 EntryPoint);
}; // Size: 0x300

#endif
