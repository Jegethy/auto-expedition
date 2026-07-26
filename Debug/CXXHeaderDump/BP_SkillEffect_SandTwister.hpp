#ifndef UE4SS_SDK_BP_SkillEffect_SandTwister_HPP
#define UE4SS_SDK_BP_SkillEffect_SandTwister_HPP

class ABP_SkillEffect_SandTwister_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    double TargetTwisterLifeTime;                                                     // 0x0438 (size: 0x8)
    int32 NumAroundTwister;                                                           // 0x0440 (size: 0x4)
    double AroundTwisterSpawnRadius;                                                  // 0x0448 (size: 0x8)
    double AroundTwisterShakeLength;                                                  // 0x0450 (size: 0x8)
    double AroundTwisterShakeSpeed;                                                   // 0x0458 (size: 0x8)
    double AroundTwisterLifeTime;                                                     // 0x0460 (size: 0x8)
    double AroundTwisterSpeed;                                                        // 0x0468 (size: 0x8)
    bool AroundTwisterIsClockwise;                                                    // 0x0470 (size: 0x1)
    double AroundTwisterSpawnAngleOffset;                                             // 0x0478 (size: 0x8)
    TArray<class ABP_SkillEffect_SandTwister_Tornado_C*> AroundTornados;              // 0x0480 (size: 0x10)
    TArray<double> AroundTwisterShakeTimers;                                          // 0x0490 (size: 0x10)
    double OmenLifeTime;                                                              // 0x04A0 (size: 0x8)
    TArray<class ABP_SkillEffect_SandTwister_Omen_C*> Omens;                          // 0x04A8 (size: 0x10)

    void SpawnTornadoOmen(FVector Location, class ABP_SkillEffect_SandTwister_Omen_C*& NewParam);
    void Spawn Tornado(FVector Location, double LifeTime, class ABP_SkillEffect_SandTwister_Tornado_C*& SkillEffect);
    void StartSpawn();
    void ReceiveTick(float DeltaSeconds);
    void SpawnTargetTornadoInternal();
    void SpawnAroundTornadoInternal();
    void ExecuteUbergraph_BP_SkillEffect_SandTwister(int32 EntryPoint);
}; // Size: 0x4B8

#endif
