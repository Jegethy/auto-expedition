#ifndef UE4SS_SDK_BP_SkillEffect_IcicleThrow_HPP
#define UE4SS_SDK_BP_SkillEffect_IcicleThrow_HPP

class ABP_SkillEffect_IcicleThrow_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* Effect_Charge;                                           // 0x0438 (size: 0x8)
    class UNiagaraComponent* Effect_MainBullet;                                       // 0x0440 (size: 0x8)
    class UCapsuleComponent* AttackCollision;                                         // 0x0448 (size: 0x8)
    class USphereComponent* ChildSpawnPosition;                                       // 0x0450 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x0458 (size: 0x8)
    double AttachEffectScale;                                                         // 0x0460 (size: 0x8)
    double ShotStartTime;                                                             // 0x0468 (size: 0x8)
    double ExplosionTime;                                                             // 0x0470 (size: 0x8)
    int32 Explosion_volume;                                                           // 0x0478 (size: 0x4)
    int32 Explosion_Num;                                                              // 0x047C (size: 0x4)
    double Explosion_Rot_Y;                                                           // 0x0480 (size: 0x8)
    double BulletExtent;                                                              // 0x0488 (size: 0x8)
    FVector BulletPos;                                                                // 0x0490 (size: 0x18)
    FRotator BulletRot;                                                               // 0x04A8 (size: 0x18)
    bool IsHit;                                                                       // 0x04C0 (size: 0x1)
    bool HitGround;                                                                   // 0x04C1 (size: 0x1)
    bool OnRide;                                                                      // 0x04C2 (size: 0x1)
    bool EndWait;                                                                     // 0x04C3 (size: 0x1)
    class UNiagaraComponent* AttachedEffect;                                          // 0x04C8 (size: 0x8)
    double Rate of ImpactPoint;                                                       // 0x04D0 (size: 0x8)
    int32 RandSeedNum;                                                                // 0x04D8 (size: 0x4)
    bool IsCharging;                                                                  // 0x04DC (size: 0x1)
    double MainBulletSize;                                                            // 0x04E0 (size: 0x8)
    double CurrentTime;                                                               // 0x04E8 (size: 0x8)
    double MainBulletSpeed;                                                           // 0x04F0 (size: 0x8)

    void ShootMainBullet();
    void UpdateMainBulletScale();
    void UpdateMainBulletRotation();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ExplosionMainBullet();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_SkillEffect_IcicleThrow_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void FadeOutEffect(double DeltaSecond);
    void BndEvt__BP_SkillEffect_IcicleThrow_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_SkillEffect_IcicleThrow(int32 EntryPoint);
}; // Size: 0x4F8

#endif
