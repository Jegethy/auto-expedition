#ifndef UE4SS_SDK_BP_Skill_ThunderFunnel_Bullet_HPP
#define UE4SS_SDK_BP_Skill_ThunderFunnel_Bullet_HPP

class ABP_Skill_ThunderFunnel_Bullet_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* NS_CommonSkill_ThunderFunnel_Bullet;                     // 0x0438 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0440 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x0448 (size: 0x8)
    double LifeTimeAfterDestroyFunnel;                                                // 0x0450 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__BP_SkillEffect_SpreadPulse_Bullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void BndEvt__BP_SkillEffect_SpreadPulse_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void OnHitGround();
    void FadeOutEffect(double DeltaSecond);
    void SetDelayFadeOutEffect(double Delay);
    void SetDelayFadeOutEffectInternal();
    void ExecuteUbergraph_BP_Skill_ThunderFunnel_Bullet(int32 EntryPoint);
}; // Size: 0x458

#endif
