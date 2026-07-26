#ifndef UE4SS_SDK_BP_SkillEffect_DarkBall_HPP
#define UE4SS_SDK_BP_SkillEffect_DarkBall_HPP

class ABP_SkillEffect_DarkBall_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UPalProjectileMovementComponent* PalProjectileMovement;                     // 0x0438 (size: 0x8)
    class USphereComponent* DamageCollisionSphere;                                    // 0x0440 (size: 0x8)
    class UNiagaraComponent* P_Pentagon01;                                            // 0x0448 (size: 0x8)
    float SkillDuration;                                                              // 0x0450 (size: 0x4)

    void ReceiveBeginPlay();
    void BndEvt__BP_SkillEffect_ThunderBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__BP_SkillEffect_ThunderBall_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void ReachEndOfLife();
    void ExecuteUbergraph_BP_SkillEffect_DarkBall(int32 EntryPoint);
}; // Size: 0x454

#endif
