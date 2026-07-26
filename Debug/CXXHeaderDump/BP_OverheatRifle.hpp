#ifndef UE4SS_SDK_BP_OverheatRifle_HPP
#define UE4SS_SDK_BP_OverheatRifle_HPP

class ABP_OverheatRifle_C : public ABP_NormalRifle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0710 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0718 (size: 0x8)
    double HeatValue;                                                                 // 0x0720 (size: 0x8)
    double Const_HeatUpOneShot;                                                       // 0x0728 (size: 0x8)
    double Const_HeatDownSpeed;                                                       // 0x0730 (size: 0x8)
    bool IsOverHeatMode;                                                              // 0x0738 (size: 0x1)
    bool IsPull;                                                                      // 0x0739 (size: 0x1)
    FBP_OverheatRifle_COnChangedHeatValue OnChangedHeatValue;                         // 0x0740 (size: 0x10)
    void OnChangedHeatValue(bool bOverHeated, double HeatValue);
    double Heat Value;                                                                // 0x0750 (size: 0x8)

    int32 GetRemainBulletCount();
    void GetAmmoClass(TSubclassOf<class AActor>& AmmoClass);
    void GetMuzzleEffectAttached(class UNiagaraSystem*& Effect);
    void GetHeatValue(double& CurrentHeatValue);
    void IsOverHeated(bool& bOverHeated);
    void GetMuzzleLocation(FVector& MuzzleLocation);
    void GetMuzzleEffect(class UNiagaraSystem*& NewParam);
    void ShootBullet();
    void TickCoolDown(double DeltaTime);
    void CanShoot(bool& can);
    void OnShoot(class APalBullet* BulletActor);
    void OnWeaponNotify(EWeaponNotifyType Type);
    void OnPullTrigger();
    void OnReleaseTrigger(bool bCanShootOnRelease);
    void OnReloadStart(float InReloadSpeedPlayRate);
    void ReceiveBeginPlay();
    void OnChangedHeatValue_Event(bool bOverHeated, double HeatValue);
    void DecreaseLightIntensify();
    void OnAttachWeapon(class AActor* attachActor);
    void ReceiveTick(float DeltaSeconds);
    void OnDetachWeapon(class AActor* detachActor);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_OverheatRifle(int32 EntryPoint);
    void OnChangedHeatValue__DelegateSignature(bool bOverHeated, double HeatValue);
}; // Size: 0x758

#endif
