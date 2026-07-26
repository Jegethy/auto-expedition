#ifndef UE4SS_SDK_BP_SkillEffect_GhostFlame_Bullet_HPP
#define UE4SS_SDK_BP_SkillEffect_GhostFlame_Bullet_HPP

class ABP_SkillEffect_GhostFlame_Bullet_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UPalProjectileMovementComponent* PalProjectileMovement;                     // 0x0438 (size: 0x8)
    class USphereComponent* DamageCollision;                                          // 0x0440 (size: 0x8)
    class UNiagaraComponent* GhostFlame;                                              // 0x0448 (size: 0x8)
    float RandSpeed;                                                                  // 0x0450 (size: 0x4)
    double InitialSpeed;                                                              // 0x0458 (size: 0x8)
    double HomingSpeed;                                                               // 0x0460 (size: 0x8)
    double Gravity;                                                                   // 0x0468 (size: 0x8)
    double MaxHoming;                                                                 // 0x0470 (size: 0x8)
    double AddHoming;                                                                 // 0x0478 (size: 0x8)
    bool StartDeceleration;                                                           // 0x0480 (size: 0x1)
    double DecelerationEasingSpeed;                                                   // 0x0488 (size: 0x8)
    float AccumulatedTime;                                                            // 0x0490 (size: 0x4)
    float DamageCollisionLifeTime;                                                    // 0x0494 (size: 0x4)
    class UNiagaraSystem* BurstEffect;                                                // 0x0498 (size: 0x8)
    float MaxEffectDuration;                                                          // 0x04A0 (size: 0x4)

    void InitShot();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnHitDelegate_イベント(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet(int32 EntryPoint);
}; // Size: 0x4A4

#endif
