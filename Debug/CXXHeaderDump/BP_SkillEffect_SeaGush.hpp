#ifndef UE4SS_SDK_BP_SkillEffect_SeaGush_HPP
#define UE4SS_SDK_BP_SkillEffect_SeaGush_HPP

class ABP_SkillEffect_SeaGush_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    double SpawnRadius;                                                               // 0x0438 (size: 0x8)
    double ExplosionWaitTime;                                                         // 0x0440 (size: 0x8)
    double ExplosionInterval;                                                         // 0x0448 (size: 0x8)
    FTimerHandle IntervalTimer;                                                       // 0x0450 (size: 0x8)
    int32 CurrentPhase;                                                               // 0x0458 (size: 0x4)
    TArray<FVector> Locations;                                                        // 0x0460 (size: 0x10)
    double BulletRadius;                                                              // 0x0470 (size: 0x8)
    TArray<int32> PhaseSetting;                                                       // 0x0478 (size: 0x10)
    int32 CurrentIndex;                                                               // 0x0488 (size: 0x4)

    void SwitchPhase();
    void GetEffect(TSubclassOf<class ABP_SkillEffectBase_C>& NewParam);
    void Get Random Locations(int32 PointCount);
    void SpawnBullet();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SkillEffect_SeaGush(int32 EntryPoint);
}; // Size: 0x48C

#endif
