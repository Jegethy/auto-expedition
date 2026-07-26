#ifndef UE4SS_SDK_BP_SkillEffect_Inferno_HPP
#define UE4SS_SDK_BP_SkillEffect_Inferno_HPP

class ABP_SkillEffect_Inferno_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    int32 BulletNumLimit;                                                             // 0x0438 (size: 0x4)
    double SpawnRadius;                                                               // 0x0440 (size: 0x8)
    double ExplosionWaitTime;                                                         // 0x0448 (size: 0x8)
    double ExplosionInterval;                                                         // 0x0450 (size: 0x8)
    TArray<class APalSkillEffectBase*> SpawnEffects;                                  // 0x0458 (size: 0x10)
    FTimerHandle ExplosionTimer;                                                      // 0x0468 (size: 0x8)
    FTimerHandle IntervalTimer;                                                       // 0x0470 (size: 0x8)
    bool IsSpawned;                                                                   // 0x0478 (size: 0x1)
    int32 Index;                                                                      // 0x047C (size: 0x4)
    TArray<FVector> Locations;                                                        // 0x0480 (size: 0x10)
    double BulletRadius;                                                              // 0x0490 (size: 0x8)
    double SpawnCenterDistance;                                                       // 0x0498 (size: 0x8)
    FVector SpawnCenterLocation;                                                      // 0x04A0 (size: 0x18)

    void GetEffect(TSubclassOf<class ABP_SkillEffectBase_C>& NewParam);
    void GetRandomPointList(TArray<FVector2D>& NewParam);
    void GetInsertIndex(FVector Location, int32& Index, bool& IsInside);
    void SpawnBullet();
    void Explosion();
    void ReceiveTick(float DeltaSeconds);
    void OnExlosion();
    void StartInterval();
    void ExecuteUbergraph_BP_SkillEffect_Inferno(int32 EntryPoint);
}; // Size: 0x4B8

#endif
