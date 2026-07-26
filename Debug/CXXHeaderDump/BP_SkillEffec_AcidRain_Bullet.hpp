#ifndef UE4SS_SDK_BP_SkillEffec_AcidRain_Bullet_HPP
#define UE4SS_SDK_BP_SkillEffec_AcidRain_Bullet_HPP

class ABP_SkillEffec_AcidRain_Bullet_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* BulletEffect;                                            // 0x0438 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0440 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x0448 (size: 0x8)

    void SetRandomValueIntoNiagaraVariable(class UNiagaraComponent* NiagaraComp);
    void ReceiveBeginPlay();
    void FadeOutEffect(double DeltaSecond);
    void BndEvt__BP_SkillEffec_AcidRain_Bullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet(int32 EntryPoint);
}; // Size: 0x450

#endif
