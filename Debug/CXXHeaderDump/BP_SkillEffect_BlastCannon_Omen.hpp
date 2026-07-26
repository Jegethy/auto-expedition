#ifndef UE4SS_SDK_BP_SkillEffect_BlastCannon_Omen_HPP
#define UE4SS_SDK_BP_SkillEffect_BlastCannon_Omen_HPP

class ABP_SkillEffect_BlastCannon_Omen_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* OmenEffect;                                              // 0x0438 (size: 0x8)
    float MaxEffectDuration;                                                          // 0x0440 (size: 0x4)
    float ExplosionTime;                                                              // 0x0444 (size: 0x4)

    void ReceiveBeginPlay();
    void Explosion();
    void ExecuteUbergraph_BP_SkillEffect_BlastCannon_Omen(int32 EntryPoint);
}; // Size: 0x448

#endif
