#ifndef UE4SS_SDK_WBP_WarningEvent_WaveClear_Mark_HPP
#define UE4SS_SDK_WBP_WarningEvent_WaveClear_Mark_HPP

class UWBP_WarningEvent_WaveClear_Mark_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0280 (size: 0x8)
    class UImage* Image_87;                                                           // 0x0288 (size: 0x8)
    class UImage* Image_151;                                                          // 0x0290 (size: 0x8)
    class UImage* Image_Off;                                                          // 0x0298 (size: 0x8)
    class UImage* Image_On;                                                           // 0x02A0 (size: 0x8)

    void AnmEvent_Check();
    void AnmEvent_CheckInstant();
    void AnmEvent_UncheckInstant();
    void Construct();
    void ExecuteUbergraph_WBP_WarningEvent_WaveClear_Mark(int32 EntryPoint);
}; // Size: 0x2A8

#endif
