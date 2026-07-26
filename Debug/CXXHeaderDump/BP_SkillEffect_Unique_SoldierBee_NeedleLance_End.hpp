#ifndef UE4SS_SDK_BP_SkillEffect_Unique_SoldierBee_NeedleLance_End_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_SoldierBee_NeedleLance_End_HPP

class ABP_SkillEffect_Unique_SoldierBee_NeedleLance_End_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* NS_Environment_Butterfly;                                // 0x0438 (size: 0x8)
    double TimeUntilFade;                                                             // 0x0440 (size: 0x8)

    void ReceiveBeginPlay();
    void OnLifeTime();
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_Unique_SoldierBee_NeedleLance_End(int32 EntryPoint);
}; // Size: 0x448

#endif
