#ifndef UE4SS_SDK_BP_SkillEffect_Unique_WhiteShieldDragon_ShieldTackle_Loop_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_WhiteShieldDragon_ShieldTackle_Loop_HPP

class ABP_SkillEffect_Unique_WhiteShieldDragon_ShieldTackle_Loop_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0438 (size: 0x8)

    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_Unique_WhiteShieldDragon_ShieldTackle_Loop(int32 EntryPoint);
}; // Size: 0x440

#endif
