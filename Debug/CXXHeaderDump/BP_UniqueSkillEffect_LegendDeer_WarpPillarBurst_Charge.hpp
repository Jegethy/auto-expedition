#ifndef UE4SS_SDK_BP_UniqueSkillEffect_LegendDeer_WarpPillarBurst_Charge_HPP
#define UE4SS_SDK_BP_UniqueSkillEffect_LegendDeer_WarpPillarBurst_Charge_HPP

class ABP_UniqueSkillEffect_LegendDeer_WarpPillarBurst_Charge_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0438 (size: 0x8)

    void SetFade();
    void FadeOutEffect(double DeltaSecond);
    void SetScale(double Scale);
    void ExecuteUbergraph_BP_UniqueSkillEffect_LegendDeer_WarpPillarBurst_Charge(int32 EntryPoint);
}; // Size: 0x440

#endif
