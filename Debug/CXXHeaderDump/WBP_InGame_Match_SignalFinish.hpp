#ifndef UE4SS_SDK_WBP_InGame_Match_SignalFinish_HPP
#define UE4SS_SDK_WBP_InGame_Match_SignalFinish_HPP

class UWBP_InGame_Match_SignalFinish_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Finish;                                               // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Finish;                                            // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Finish_1;                                          // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Finish_2;                                          // 0x0298 (size: 0x8)

    void SequenceEvent__ENTRYPOINTWBP_InGame_Match_SignalFinish();
    void SequenceEvent();
    void ExecuteUbergraph_WBP_InGame_Match_SignalFinish(int32 EntryPoint);
}; // Size: 0x2A0

#endif
