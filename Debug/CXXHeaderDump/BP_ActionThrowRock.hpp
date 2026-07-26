#ifndef UE4SS_SDK_BP_ActionThrowRock_HPP
#define UE4SS_SDK_BP_ActionThrowRock_HPP

class UBP_ActionThrowRock_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    bool IsShooted;                                                                   // 0x02F0 (size: 0x1)
    class APalSkillEffectBase* Effect_0;                                              // 0x02F8 (size: 0x8)
    double ThrowReadyTime;                                                            // 0x0300 (size: 0x8)
    bool IsSpawned;                                                                   // 0x0308 (size: 0x1)
    FVector SpawnedLocation;                                                          // 0x0310 (size: 0x18)
    double ShootHeight;                                                               // 0x0328 (size: 0x8)
    TSubclassOf<class ABP_SkillEffect_ThrowRockBullet_C> Actor Class;                 // 0x0330 (size: 0x8)
    bool NearTarget;                                                                  // 0x0338 (size: 0x1)

    void MoveRock(double ElapsedTime);
    void OnStartProcessAnimation();
    void Shoot();
    void OnBreakAction();
    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_ActionThrowRock(int32 EntryPoint);
}; // Size: 0x339

#endif
