#ifndef UE4SS_SDK_BP_SkillEffect_StoneShotgun_HPP
#define UE4SS_SDK_BP_SkillEffect_StoneShotgun_HPP

class ABP_SkillEffect_StoneShotgun_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    double BaseAngle;                                                                 // 0x0438 (size: 0x8)
    double BlurAngle;                                                                 // 0x0440 (size: 0x8)
    int32 WidthShotNum;                                                               // 0x0448 (size: 0x4)
    int32 HightShotNum;                                                               // 0x044C (size: 0x4)

    void GetBulletTransform(TArray<FTransform>& Result);
    void OnInitialize();
    void OnAttackDelegate_イベント_0(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void ExecuteUbergraph_BP_SkillEffect_StoneShotgun(int32 EntryPoint);
}; // Size: 0x450

#endif
