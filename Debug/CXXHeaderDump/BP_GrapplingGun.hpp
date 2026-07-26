#ifndef UE4SS_SDK_BP_GrapplingGun_HPP
#define UE4SS_SDK_BP_GrapplingGun_HPP

class ABP_GrapplingGun_C : public APalWeaponBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0688 (size: 0x8)
    class USkeletalMeshComponent* Weapon;                                             // 0x0690 (size: 0x8)
    bool IsEquip;                                                                     // 0x0698 (size: 0x1)
    double CableMaxLength;                                                            // 0x06A0 (size: 0x8)
    double CableShootSpeed;                                                           // 0x06A8 (size: 0x8)
    double CableReturnSpeed;                                                          // 0x06B0 (size: 0x8)
    double PlayerMoveSpeed;                                                           // 0x06B8 (size: 0x8)
    bool IsVisibleReticle;                                                            // 0x06C0 (size: 0x1)
    class ABP_GrapplingGun_Bullet_C* Bullet;                                          // 0x06C8 (size: 0x8)
    double NearCoolTimeDistance;                                                      // 0x06D0 (size: 0x8)
    double NearCoolTimeRate;                                                          // 0x06D8 (size: 0x8)
    class UPalGrapplingGunModule* GrapplingGunModule;                                 // 0x06E0 (size: 0x8)

    void IsShowReticle(bool& IsShow);
    bool CanDealDamageWeapon();
    void UpdateVisibleReticle();
    void UpdateBulletLocation();
    void OnPullTrigger();
    void ReceiveTick(float DeltaSeconds);
    void OnAttachWeapon(class AActor* attachActor);
    void OnDetachWeapon(class AActor* detachActor);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnGrapplingActionStart(const FVector HitLocation, double CoolTimeRate);
    void OnGrapplingActionEnd();
    void ExecuteUbergraph_BP_GrapplingGun(int32 EntryPoint);
}; // Size: 0x6E8

#endif
