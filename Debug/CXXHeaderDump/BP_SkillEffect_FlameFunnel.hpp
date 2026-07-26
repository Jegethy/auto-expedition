#ifndef UE4SS_SDK_BP_SkillEffect_FlameFunnel_HPP
#define UE4SS_SDK_BP_SkillEffect_FlameFunnel_HPP

class ABP_SkillEffect_FlameFunnel_C : public ABP_Skill_ThunderFunnel_C
{
    TArray<double> EachFunnelTimeSpan;                                                // 0x0480 (size: 0x10)
    TArray<double> EachFunnelTimeSpanOffset;                                          // 0x0490 (size: 0x10)

    void SpawnSkillEffect(FTransform SpawTransform, class AActor* Owner, int32 Index, class ABP_SkillEffectBase_C*& SkillEffect);
}; // Size: 0x4A0

#endif
