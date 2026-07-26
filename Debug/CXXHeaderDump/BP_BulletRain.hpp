#ifndef UE4SS_SDK_BP_BulletRain_HPP
#define UE4SS_SDK_BP_BulletRain_HPP

class ABP_BulletRain_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    TSubclassOf<class AActor> BulletClass;                                            // 0x0438 (size: 0x8)
    double ShootTimeInterval;                                                         // 0x0440 (size: 0x8)
    double ShootDistanceInterval;                                                     // 0x0448 (size: 0x8)
    int32 ShootNum;                                                                   // 0x0450 (size: 0x4)
    int32 SplitNum;                                                                   // 0x0454 (size: 0x4)
    int32 ShootCounter;                                                               // 0x0458 (size: 0x4)
    FRotator RotatorLookingAtTarget;                                                  // 0x0460 (size: 0x18)
    FVector OwnerLocation;                                                            // 0x0478 (size: 0x18)
    FTimerHandle ThunderTimer;                                                        // 0x0490 (size: 0x8)

    void SpawnBullet(int32 Count);
    void Update Thunder Spawn();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_BulletRain(int32 EntryPoint);
}; // Size: 0x498

#endif
