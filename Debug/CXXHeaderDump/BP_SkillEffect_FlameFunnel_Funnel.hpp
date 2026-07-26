#ifndef UE4SS_SDK_BP_SkillEffect_FlameFunnel_Funnel_HPP
#define UE4SS_SDK_BP_SkillEffect_FlameFunnel_Funnel_HPP

class ABP_SkillEffect_FlameFunnel_Funnel_C : public ABP_Skill_ThunderFunnel_Funnel_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04F0 (size: 0x8)

    void GetShotSpan(double& ShotSpan);
    void SpawnSkillEffect(class AActor* Owner, class ABP_SkillEffectBase_C*& SkillEffect);
    void SetLifeTimer();
    void FadeOutEffect(double DeltaSecond);
    void Terminate();
    void ExecuteUbergraph_BP_SkillEffect_FlameFunnel_Funnel(int32 EntryPoint);
}; // Size: 0x4F8

#endif
