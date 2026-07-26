#ifndef UE4SS_SDK_BP_SkillEffect_LightningStrike_HPP
#define UE4SS_SDK_BP_SkillEffect_LightningStrike_HPP

class ABP_SkillEffect_LightningStrike_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0438 (size: 0x8)
    class UNiagaraComponent* NS_LightningStrike;                                      // 0x0440 (size: 0x8)
    double StrikeDelay;                                                               // 0x0448 (size: 0x8)

    void ReceiveBeginPlay();
    void DisableCollision();
    void ExecuteUbergraph_BP_SkillEffect_LightningStrike(int32 EntryPoint);
}; // Size: 0x450

#endif
