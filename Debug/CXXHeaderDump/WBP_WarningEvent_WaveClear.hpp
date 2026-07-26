#ifndef UE4SS_SDK_WBP_WarningEvent_WaveClear_HPP
#define UE4SS_SDK_WBP_WarningEvent_WaveClear_HPP

class UWBP_WarningEvent_WaveClear_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Next_Out;                                             // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Next_In;                                              // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Clear_Next;                                           // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_Clear_In;                                             // 0x0298 (size: 0x8)
    class UHorizontalBox* Horizontal_ClearMark;                                       // 0x02A0 (size: 0x8)
    class UImage* Image_87;                                                           // 0x02A8 (size: 0x8)
    class UImage* Image_151;                                                          // 0x02B0 (size: 0x8)
    class UImage* Image_544;                                                          // 0x02B8 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x02C0 (size: 0x8)
    class UImage* Image_Base_1;                                                       // 0x02C8 (size: 0x8)
    class UImage* Image_Base_2;                                                       // 0x02D0 (size: 0x8)
    class UImage* Image_Base_3;                                                       // 0x02D8 (size: 0x8)
    class UImage* Image_Base_L;                                                       // 0x02E0 (size: 0x8)
    class UImage* Image_Base_L_1;                                                     // 0x02E8 (size: 0x8)
    class UImage* Image_Base_R;                                                       // 0x02F0 (size: 0x8)
    class UImage* Image_Base_R_1;                                                     // 0x02F8 (size: 0x8)
    class UImage* Image_BGShadow;                                                     // 0x0300 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NextWaveNum;                                       // 0x0308 (size: 0x8)
    class UWBP_WarningEvent_WaveClear_Mark_C* WBP_Warning_WaveClear_Mark_1;           // 0x0310 (size: 0x8)
    class UWBP_WarningEvent_WaveClear_Mark_C* WBP_Warning_WaveClear_Mark_2;           // 0x0318 (size: 0x8)
    class UWBP_WarningEvent_WaveClear_Mark_C* WBP_Warning_WaveClear_Mark_3;           // 0x0320 (size: 0x8)
    class UWBP_WarningEvent_WaveClear_Mark_C* WBP_Warning_WaveClear_Mark_4;           // 0x0328 (size: 0x8)
    class UWBP_WarningEvent_WaveClear_Mark_C* WBP_Warning_WaveClear_Mark_5;           // 0x0330 (size: 0x8)
    int32 Clear Wave Count;                                                           // 0x0338 (size: 0x4)
    int32 Max Wave Count;                                                             // 0x033C (size: 0x4)
    class UWBP_WarningEvent_WaveClear_Mark_C* CheckTargetWidget;                      // 0x0340 (size: 0x8)

    void SequenceEvent__ENTRYPOINTWBP_WarningEvent_WaveClear();
    void OnTimer_Out();
    void Play Next Wave Info();
    void OnTimerEvent_CheckMark();
    void Play Wave Clear Sequence(int32 ClearWaveCount, int32 MaxWaveCount);
    void SequenceEvent();
    void AnmEvent_Clear(bool IsNext);
    void AnmEvent_ClearToNextWave();
    void AnmEvent_NextWave();
    void AnmEvent_Out();
    void ExecuteUbergraph_WBP_WarningEvent_WaveClear(int32 EntryPoint);
}; // Size: 0x348

#endif
