#ifndef UE4SS_SDK_BP_Status_LifeSteal_HPP
#define UE4SS_SDK_BP_Status_LifeSteal_HPP

class UBP_Status_LifeSteal_C : public UPalStatusLifeSteal
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    FString OutText;                                                                  // 0x00B8 (size: 0x10)
    double EffectIntervalTimeSec;                                                     // 0x00C8 (size: 0x8)
    double SpawnEffectWaitTimer;                                                      // 0x00D0 (size: 0x8)

    void GetTargetActor(class AActor*& Target);
    void OnBeginStatus();
    void OnEndStatus();
    void OnLifeSteal(int32 Damage);
    void TickStatus(float DeltaTime);
    void ExecuteUbergraph_BP_Status_LifeSteal(int32 EntryPoint);
}; // Size: 0xD8

#endif
