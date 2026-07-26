#ifndef UE4SS_SDK_BP_UniqueSkillEffect_LegendDeer_ModeChange_Loop_HPP
#define UE4SS_SDK_BP_UniqueSkillEffect_LegendDeer_ModeChange_Loop_HPP

class ABP_UniqueSkillEffect_LegendDeer_ModeChange_Loop_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0438 (size: 0x8)

    void FadeOutEffect(double DeltaSecond);
    void SetEnd();
    void ExecuteUbergraph_BP_UniqueSkillEffect_LegendDeer_ModeChange_Loop(int32 EntryPoint);
}; // Size: 0x440

#endif
