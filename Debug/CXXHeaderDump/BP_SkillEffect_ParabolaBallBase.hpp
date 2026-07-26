#ifndef UE4SS_SDK_BP_SkillEffect_ParabolaBallBase_HPP
#define UE4SS_SDK_BP_SkillEffect_ParabolaBallBase_HPP

class ABP_SkillEffect_ParabolaBallBase_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x0438 (size: 0x8)
    class USphereComponent* ExplosionSphere;                                          // 0x0440 (size: 0x8)
    class UNiagaraComponent* Charge;                                                  // 0x0448 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0450 (size: 0x8)
    class UNiagaraComponent* ball;                                                    // 0x0458 (size: 0x8)
    class UNiagaraSystem* Const_ImpactEffect;                                         // 0x0460 (size: 0x8)
    class UAkAudioEvent* Const_AK_Charge;                                             // 0x0468 (size: 0x8)
    class UAkAudioEvent* Const_AK_Loop;                                               // 0x0470 (size: 0x8)
    class UAkAudioEvent* Const_AK_Cast;                                               // 0x0478 (size: 0x8)
    class UAkAudioEvent* Const_AK_Hit;                                                // 0x0480 (size: 0x8)

    void ReceiveBeginPlay();
    void ShootBullet(FVector TargetLocation);
    void CancelShoot();
    void BndEvt__BP_SkillEffect_PowerBall_1_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void EndCollision();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase(int32 EntryPoint);
}; // Size: 0x488

#endif
