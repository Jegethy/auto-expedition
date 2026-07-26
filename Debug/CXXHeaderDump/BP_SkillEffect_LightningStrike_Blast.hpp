#ifndef UE4SS_SDK_BP_SkillEffect_LightningStrike_Blast_HPP
#define UE4SS_SDK_BP_SkillEffect_LightningStrike_Blast_HPP

class ABP_SkillEffect_LightningStrike_Blast_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* NS_Hedgehog_Grenade;                                     // 0x0438 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0440 (size: 0x8)
    double EffectDuration;                                                            // 0x0448 (size: 0x8)

    void ReceiveBeginPlay();
    void DisableCollision();
    void EffectTimeout();
    void ExecuteUbergraph_BP_SkillEffect_LightningStrike_Blast(int32 EntryPoint);
}; // Size: 0x450

#endif
