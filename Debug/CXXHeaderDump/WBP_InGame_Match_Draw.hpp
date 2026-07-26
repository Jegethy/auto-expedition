#ifndef UE4SS_SDK_WBP_InGame_Match_Draw_HPP
#define UE4SS_SDK_WBP_InGame_Match_Draw_HPP

class UWBP_InGame_Match_Draw_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Draw;                                                 // 0x0280 (size: 0x8)

    void SequenceEvent__ENTRYPOINTWBP_InGame_Match_Draw();
    void SequenceEvent();
    void ExecuteUbergraph_WBP_InGame_Match_Draw(int32 EntryPoint);
}; // Size: 0x288

#endif
