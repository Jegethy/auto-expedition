#ifndef UE4SS_SDK_BP_Status_PlayerInflictEffect_MeleeHitBarrier_HPP
#define UE4SS_SDK_BP_Status_PlayerInflictEffect_MeleeHitBarrier_HPP

class UBP_Status_PlayerInflictEffect_MeleeHitBarrier_C : public UBP_Status_PlayerInflictEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00D0 (size: 0x8)
    int32 RequiredHitCount;                                                           // 0x00D8 (size: 0x4)
    bool HasActiveBarrier;                                                            // 0x00DC (size: 0x1)
    double Barrier_HP;                                                                // 0x00E0 (size: 0x8)
    double Barrier_Time;                                                              // 0x00E8 (size: 0x8)
    double Cooldown;                                                                  // 0x00F0 (size: 0x8)
    double CoolDownTimer;                                                             // 0x00F8 (size: 0x8)
    float HitTime;                                                                    // 0x0100 (size: 0x4)
    TArray<double> HitTimestamps;                                                     // 0x0108 (size: 0x10)

    void BarrierEnd();
    void OnBarrierDestroy(class AActor* DestroyedActor);
    void UpdateCooldown(double DeltaTime);
    void OnInflictDamage(const FPalDamageResult& DamageResult);
    void On Barrier Broken();
    void TryActivateBarrier ();
    void IncrementHitCount ();
    void TickStatus(float DeltaTime);
    void OnBeginStatus();
    void ExecuteUbergraph_BP_Status_PlayerInflictEffect_MeleeHitBarrier(int32 EntryPoint);
}; // Size: 0x118

#endif
