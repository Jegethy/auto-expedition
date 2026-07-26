#ifndef UE4SS_SDK_BP_SkillEffect_Unique_SoldierBee_NeedleLance_Loop_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_SoldierBee_NeedleLance_Loop_HPP

class ABP_SkillEffect_Unique_SoldierBee_NeedleLance_Loop_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* NS_ThunderBall;                                          // 0x0438 (size: 0x8)
    class USceneComponent* Extra_LoopEffect;                                          // 0x0440 (size: 0x8)
    class UNiagaraComponent* NS_UniqueSkill_Alpaca_Tossin_Loop;                       // 0x0448 (size: 0x8)
    FName LoopSpearEffectBone;                                                        // 0x0450 (size: 0x8)

    void FadeOutEffect(double DeltaSecond);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SkillEffect_Unique_SoldierBee_NeedleLance_Loop(int32 EntryPoint);
}; // Size: 0x458

#endif
