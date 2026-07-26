#ifndef UE4SS_SDK_BP_Status_LifeDrainPower_AttackUp_HPP
#define UE4SS_SDK_BP_Status_LifeDrainPower_AttackUp_HPP

class UBP_Status_LifeDrainPower_AttackUp_C : public UPalStatusLifeDrainPower_AttackUp
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00D0 (size: 0x8)
    int32 AttackUp;                                                                   // 0x00D8 (size: 0x4)
    double MaxHpDamageRatePerSec ;                                                    // 0x00E0 (size: 0x8)
    float LifeDrainIntervalSec;                                                       // 0x00E8 (size: 0x4)
    FTimerHandle LifeDrainTimerHandle;                                                // 0x00F0 (size: 0x8)
    float LifeDrainIntervalSecInitialStartDelay;                                      // 0x00F8 (size: 0x4)
    EPalVisualEffectID Visual Effect ID;                                              // 0x00FC (size: 0x1)

    void DebugOnTick();
    void DebugOnEnd();
    void DebugOnBegin();
    void OnEndStatus();
    void TickStatus(float DeltaTime);
    void OnSlipDamage();
    void OnBeginSomeStatus();
    void OnBeginStatus();
    void ExecuteUbergraph_BP_Status_LifeDrainPower_AttackUp(int32 EntryPoint);
}; // Size: 0xFD

#endif
