#ifndef UE4SS_SDK_BP_SphereLauncher_HPP
#define UE4SS_SDK_BP_SphereLauncher_HPP

class ABP_SphereLauncher_C : public ABP_RocketLauncher_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06F0 (size: 0x8)
    double ScatteredAngle;                                                            // 0x06F8 (size: 0x8)
    TArray<FName> ItemNameList;                                                       // 0x0700 (size: 0x10)
    TArray<class TSubclassOf<ABP_PalSphere_ThrowObject_C>> BulletClass;               // 0x0710 (size: 0x10)
    int32 CurrentBallIndex;                                                           // 0x0720 (size: 0x4)
    TMap<class FName, class EPalCaptureSphereLevelType> ItemName_LevelTypeMap;        // 0x0728 (size: 0x50)
    FBP_SphereLauncher_COnLaunchPalSphere OnLaunchPalSphere;                          // 0x0778 (size: 0x10)
    void OnLaunchPalSphere(class AActor* Bullet);
    double Const_BulletSpeed;                                                         // 0x0788 (size: 0x8)
    FVector SphereScale;                                                              // 0x0790 (size: 0x18)

    int32 GetRemainBulletCount();
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    bool IsEnableAutoAim();
    void GetMuzzleTransform(FTransform& Transform);
    void GetShootTransformList(double BaseAnglePitch, double BaseAngleYaw, double BlurAngle, TArray<FTransform>& ShootTransformList);
    void GetAimingBlurAngle(double& Angle);
    void GetBlurAngle(double& Angle);
    void OnShoot(class APalBullet* BulletActor);
    void GetShootInterval(double& Time);
    void GetMuzzleRotator(FRotator& Rotator);
    void GetMuzzleLocation(FVector& MuzzleLocation);
    void ShootBullet();
    void ChangeTransformForRocketWhenReloadIsDone(FVector Location, FRotator Lotation);
    void ChangeTransformForRocketReload(FVector Location, FRotator Rotation);
    void ReceiveBeginPlay();
    void CustomEvent(int32 bulletsNum);
    void OnPalSphereChangeSelectedIndex(EPalPlayerInventoryType inventoryType, int32 Index);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_SphereLauncher(int32 EntryPoint);
    void OnLaunchPalSphere__DelegateSignature(class AActor* Bullet);
}; // Size: 0x7A8

#endif
