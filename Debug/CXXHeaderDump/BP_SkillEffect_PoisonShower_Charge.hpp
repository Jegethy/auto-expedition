#ifndef UE4SS_SDK_BP_SkillEffect_PoisonShower_Charge_HPP
#define UE4SS_SDK_BP_SkillEffect_PoisonShower_Charge_HPP

class ABP_SkillEffect_PoisonShower_Charge_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    float MaxEffectDuration;                                                          // 0x0438 (size: 0x4)
    int32 SplitNum;                                                                   // 0x043C (size: 0x4)
    int32 bulletNum;                                                                  // 0x0440 (size: 0x4)
    int32 Angle;                                                                      // 0x0444 (size: 0x4)
    int32 BulletNumPerAngle;                                                          // 0x0448 (size: 0x4)
    FRandomStream Stream;                                                             // 0x044C (size: 0x8)
    double AttackMinRange;                                                            // 0x0458 (size: 0x8)
    double AttackMaxRange;                                                            // 0x0460 (size: 0x8)
    bool IsDirectAttackBulletSpawned;                                                 // 0x0468 (size: 0x1)
    double GravityScale;                                                              // 0x0470 (size: 0x8)
    double FallMinTime;                                                               // 0x0478 (size: 0x8)
    double FallMaxTime;                                                               // 0x0480 (size: 0x8)
    FVector TempEndLocation;                                                          // 0x0488 (size: 0x18)

    void OnInitialize();
    void SpawnBullet(int32 BulletIndex, int32 AngleIndex);
    void ExecuteUbergraph_BP_SkillEffect_PoisonShower_Charge(int32 EntryPoint);
}; // Size: 0x4A0

#endif
