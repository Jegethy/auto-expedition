#ifndef UE4SS_SDK_BP_SkillEffect_DragonCanon_HPP
#define UE4SS_SDK_BP_SkillEffect_DragonCanon_HPP

class ABP_SkillEffect_DragonCanon_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UPalProjectileMovementComponent* PalProjectileMovement;                     // 0x0438 (size: 0x8)
    class USphereComponent* ImpactTrigger;                                            // 0x0440 (size: 0x8)
    class UNiagaraComponent* MainEffect;                                              // 0x0448 (size: 0x8)
    float MaxEffectDuration;                                                          // 0x0450 (size: 0x4)
    FName DefaultCollisionProfile;                                                    // 0x0454 (size: 0x8)
    float StopBulletDelayTime;                                                        // 0x045C (size: 0x4)

    void ReceiveBeginPlay();
    void BndEvt__BP_SkillEffect_WaterBall_ImpactCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void FadeOutEffect(double DeltaSecond);
    void Explosion();
    void EnableCollision();
    void StopBullet();
    void BndEvt__BP_SkillEffect_DragonCanon_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_SkillEffect_DragonCanon(int32 EntryPoint);
}; // Size: 0x460

#endif
