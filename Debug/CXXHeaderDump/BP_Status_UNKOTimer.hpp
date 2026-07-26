#ifndef UE4SS_SDK_BP_Status_UNKOTimer_HPP
#define UE4SS_SDK_BP_Status_UNKOTimer_HPP

class UBP_Status_UNKOTimer_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x00B8 (size: 0x8)
    int32 OneDay_Second;                                                              // 0x00C0 (size: 0x4)

    void OnBeginStatus();
    void OnEndStatus();
    void カスタムイベント_0();
    void ExecuteUbergraph_BP_Status_UNKOTimer(int32 EntryPoint);
}; // Size: 0xC4

#endif
