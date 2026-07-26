#ifndef UE4SS_SDK_BP_UniqueSkillEffect_LegendDeer_WarpPillarBurst_ReadyPillar_HPP
#define UE4SS_SDK_BP_UniqueSkillEffect_LegendDeer_WarpPillarBurst_ReadyPillar_HPP

class ABP_UniqueSkillEffect_LegendDeer_WarpPillarBurst_ReadyPillar_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0438 (size: 0x8)

    void ReceiveBeginPlay();
    void Act();
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_UniqueSkillEffect_LegendDeer_WarpPillarBurst_ReadyPillar(int32 EntryPoint);
}; // Size: 0x440

#endif
