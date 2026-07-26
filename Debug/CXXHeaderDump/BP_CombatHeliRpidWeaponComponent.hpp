#ifndef UE4SS_SDK_BP_CombatHeliRpidWeaponComponent_HPP
#define UE4SS_SDK_BP_CombatHeliRpidWeaponComponent_HPP

class UBP_CombatHeliRpidWeaponComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    class UMeshComponent* GunMesh;                                                    // 0x00A8 (size: 0x8)
    double Const_ShootingTime;                                                        // 0x00B0 (size: 0x8)
    int32 Const_WeaponDamage;                                                         // 0x00B8 (size: 0x4)
    double Const_BulletSpeed;                                                         // 0x00C0 (size: 0x8)
    double Const_BulletAngle;                                                         // 0x00C8 (size: 0x8)
    FTimerHandle TimerHandle;                                                         // 0x00D0 (size: 0x8)
    double Const_ShootInterval;                                                       // 0x00D8 (size: 0x8)
    TSubclassOf<class APalBullet> Const_BulletClass;                                  // 0x00E0 (size: 0x8)
    int32 CurrentShootCount;                                                          // 0x00E8 (size: 0x4)
    bool IsShooting;                                                                  // 0x00EC (size: 0x1)
    double Const_RestTime;                                                            // 0x00F0 (size: 0x8)

    void GetMuzzleFlashEffect(class UNiagaraSystem*& Effect);
    void GunAim(double DeltaTime, class AActor* Target);
    void GetMuzzleTransform(FTransform& MzlTF);
    void ShootBullet();
    void SetGunMesh(class UMeshComponent* GunMesh);
    void PullTrigger();
    void ReleaseTrigger();
    void ExecuteUbergraph_BP_CombatHeliRpidWeaponComponent(int32 EntryPoint);
}; // Size: 0xF8

#endif
