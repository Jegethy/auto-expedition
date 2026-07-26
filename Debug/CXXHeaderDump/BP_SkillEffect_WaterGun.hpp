#ifndef UE4SS_SDK_BP_SkillEffect_WaterGun_HPP
#define UE4SS_SDK_BP_SkillEffect_WaterGun_HPP

class ABP_SkillEffect_WaterGun_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UPalProjectileMovementComponent* PalProjectileMovement;                     // 0x0438 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0440 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0448 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__BP_SkillEffect_WaterGun_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void FadeOutEffect(double DeltaSecond);
    void BndEvt__BP_SkillEffect_WaterGun_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void ExecuteUbergraph_BP_SkillEffect_WaterGun(int32 EntryPoint);
}; // Size: 0x450

#endif
