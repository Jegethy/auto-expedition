#ifndef UE4SS_SDK_BP_SkillEffect_DragonCanon_Impact_HPP
#define UE4SS_SDK_BP_SkillEffect_DragonCanon_Impact_HPP

class ABP_SkillEffect_DragonCanon_Impact_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* ImpactEffect;                                            // 0x0438 (size: 0x8)
    class USphereComponent* ImpactDamage;                                             // 0x0440 (size: 0x8)
    float MaxEffectDuration;                                                          // 0x0448 (size: 0x4)
    float CollisionEnableTime;                                                        // 0x044C (size: 0x4)

    void ReceiveBeginPlay();
    void EndEffect();
    void FadeOutEffect(double DeltaSecond);
    void CollisionDisable();
    void ExecuteUbergraph_BP_SkillEffect_DragonCanon_Impact(int32 EntryPoint);
}; // Size: 0x450

#endif
