#ifndef UE4SS_SDK_BP_HandGun_HPP
#define UE4SS_SDK_BP_HandGun_HPP

class ABP_HandGun_C : public ABP_AssaultRifleBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06C8 (size: 0x8)
    class USkeletalMeshComponent* Weapon;                                             // 0x06D0 (size: 0x8)
    bool IsCoolTime_0;                                                                // 0x06D8 (size: 0x1)
    class UAnimMontage* MagazineEmptyAnim;                                            // 0x06E0 (size: 0x8)

    float GetDefaultBlurAngle();
    void GetAmmoClass(TSubclassOf<class AActor>& AmmoClass);
    void PlayReloadAnimation();
    FTransform GetLeftHandTransform();
    void GetBlurAngle(double& Angle);
    void Is UseEjectionPort(bool& isUse);
    void GeyEjectionPortTransform(FTransform& Transform);
    void GetShotAnimation();
    bool IsUseLeftHandAttach();
    void GetMuzzleRotator(FRotator& Rotator);
    void GetInitializeInterval(double& Time);
    void GetShootInterval(double& Time);
    void GetMuzzleLocation(FVector& MuzzleLocation);
    void GetMuzzleEffect(class UNiagaraSystem*& NewParam);
    void OnAttachWeapon(class AActor* attachActor);
    void OnPullTrigger();
    void ResetCoolTime();
    void OnReleaseTrigger(bool bCanShootOnRelease);
    void ExecuteUbergraph_BP_HandGun(int32 EntryPoint);
}; // Size: 0x6E8

#endif
