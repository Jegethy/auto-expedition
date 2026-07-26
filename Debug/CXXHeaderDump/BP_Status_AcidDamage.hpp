#ifndef UE4SS_SDK_BP_Status_AcidDamage_HPP
#define UE4SS_SDK_BP_Status_AcidDamage_HPP

class UBP_Status_AcidDamage_C : public UBP_Status_WithVisualEffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C8 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x00D0 (size: 0x8)
    double DurationTimer_BP;                                                          // 0x00D8 (size: 0x8)
    double DamageRate;                                                                // 0x00E0 (size: 0x8)
    FGuid BurnStatusInvokerID;                                                        // 0x00E8 (size: 0x10)

    void Setup();
    void AcidDamage();
    int32 GetAcidDamage();
    void OnBeginStatus();
    void OnEndStatus();
    void TickStatus(float DeltaTime);
    void OnCompleteInitializeParameter(class APalCharacter* InCharacter);
    void ExecuteUbergraph_BP_Status_AcidDamage(int32 EntryPoint);
}; // Size: 0xF8

#endif
