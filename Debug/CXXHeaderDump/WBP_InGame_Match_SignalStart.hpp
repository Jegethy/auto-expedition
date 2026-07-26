#ifndef UE4SS_SDK_WBP_InGame_Match_SignalStart_HPP
#define UE4SS_SDK_WBP_InGame_Match_SignalStart_HPP

class UWBP_InGame_Match_SignalStart_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Fight;                                                // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Ready;                                                // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Fight;                                             // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Fight_1;                                           // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Fight_2;                                           // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Ready;                                             // 0x02A8 (size: 0x8)

    void SequenceEvent__ENTRYPOINTWBP_InGame_Match_SignalStart_0();
    void SequenceEvent__ENTRYPOINTWBP_InGame_Match_SignalStart();
    void SequenceEvent();
    void SequenceEvent_0();
    void ExecuteUbergraph_WBP_InGame_Match_SignalStart(int32 EntryPoint);
}; // Size: 0x2B0

#endif
