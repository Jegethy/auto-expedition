#ifndef UE4SS_SDK_BP_SkillEffect_GhostFlame_HPP
#define UE4SS_SDK_BP_SkillEffect_GhostFlame_HPP

class ABP_SkillEffect_GhostFlame_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    int32 Shoot_volume;                                                               // 0x0438 (size: 0x4)
    double Shoot_extent;                                                              // 0x0440 (size: 0x8)
    double ShootInterval;                                                             // 0x0448 (size: 0x8)
    double Temp time;                                                                 // 0x0450 (size: 0x8)
    int32 Shoot_Count;                                                                // 0x0458 (size: 0x4)
    double ShootDegree;                                                               // 0x0460 (size: 0x8)
    double ShootHeight;                                                               // 0x0468 (size: 0x8)

    void Explosion();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SkillEffect_GhostFlame(int32 EntryPoint);
}; // Size: 0x470

#endif
