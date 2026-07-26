#ifndef UE4SS_SDK_BP_SkillEffect_Eruption_Bullet_HPP
#define UE4SS_SDK_BP_SkillEffect_Eruption_Bullet_HPP

class ABP_SkillEffect_Eruption_Bullet_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class USphereComponent* ImpactTrigger;                                            // 0x0438 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x0440 (size: 0x8)
    class UNiagaraComponent* BulletEffect;                                            // 0x0448 (size: 0x8)
    float MaxEffectDuration;                                                          // 0x0450 (size: 0x4)
    FVector TargetLocation;                                                           // 0x0458 (size: 0x18)
    double ShowSignDelayTime;                                                         // 0x0470 (size: 0x8)
    double FallTotalTime;                                                             // 0x0478 (size: 0x8)
    FDateTime StartTime;                                                              // 0x0480 (size: 0x8)
    class UNiagaraComponent* SignEffect;                                              // 0x0488 (size: 0x8)

    void ReceiveBeginPlay();
    void FadeOutEffect(double DeltaSecond);
    void BndEvt__BP_SkillEffect_Eruption_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__BP_SkillEffect_Eruption_Bullet_ImpactTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Explosion();
    void SetTargetLocation(FVector TargetLocation);
    void ReceiveTick(float DeltaSeconds);
    void SpawnSign();
    void ExecuteUbergraph_BP_SkillEffect_Eruption_Bullet(int32 EntryPoint);
}; // Size: 0x490

#endif
