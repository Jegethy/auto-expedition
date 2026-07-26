#ifndef UE4SS_SDK_BP_Status_Muddy_HPP
#define UE4SS_SDK_BP_Status_Muddy_HPP

class UBP_Status_Muddy_C : public UBP_Status_WithVisualEffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C8 (size: 0x8)
    double DurationTimer_BP;                                                          // 0x00D0 (size: 0x8)

    void OnBeginStatus();
    void OnEndStatus();
    void カスタムイベント_2();
    void TickStatus(float DeltaTime);
    void ExecuteUbergraph_BP_Status_Muddy(int32 EntryPoint);
}; // Size: 0xD8

#endif
