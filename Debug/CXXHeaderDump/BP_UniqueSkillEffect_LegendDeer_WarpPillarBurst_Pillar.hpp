#ifndef UE4SS_SDK_BP_UniqueSkillEffect_LegendDeer_WarpPillarBurst_Pillar_HPP
#define UE4SS_SDK_BP_UniqueSkillEffect_LegendDeer_WarpPillarBurst_Pillar_HPP

class ABP_UniqueSkillEffect_LegendDeer_WarpPillarBurst_Pillar_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0438 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0440 (size: 0x8)
    float AttackDuration;                                                             // 0x0448 (size: 0x4)

    void ReceiveBeginPlay();
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_UniqueSkillEffect_LegendDeer_WarpPillarBurst_Pillar(int32 EntryPoint);
}; // Size: 0x44C

#endif
