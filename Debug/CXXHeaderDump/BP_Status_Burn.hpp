#ifndef UE4SS_SDK_BP_Status_Burn_HPP
#define UE4SS_SDK_BP_Status_Burn_HPP

class UBP_Status_Burn_C : public UBP_Status_WithVisualEffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C8 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x00D0 (size: 0x8)
    double DurationTimer_BP;                                                          // 0x00D8 (size: 0x8)
    FName KeyName;                                                                    // 0x00E0 (size: 0x8)
    double Rate;                                                                      // 0x00E8 (size: 0x8)

    void OnBeginStatus();
    void OnEndStatus();
    void カスタムイベント_SlipDamage();
    void OnRolling();
    void TickStatus(float DeltaTime);
    void ExecuteUbergraph_BP_Status_Burn(int32 EntryPoint);
}; // Size: 0xF0

#endif
