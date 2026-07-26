#ifndef UE4SS_SDK_BP_Status_Poison_HPP
#define UE4SS_SDK_BP_Status_Poison_HPP

class UBP_Status_Poison_C : public UBP_Status_WithVisualEffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C8 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x00D0 (size: 0x8)
    double Rate;                                                                      // 0x00D8 (size: 0x8)

    void GetDamageRate(double& NewParam);
    void OnBeginStatus();
    void カスタムイベント_SlipDamage();
    void OnEndStatus();
    void ExecuteUbergraph_BP_Status_Poison(int32 EntryPoint);
}; // Size: 0xE0

#endif
