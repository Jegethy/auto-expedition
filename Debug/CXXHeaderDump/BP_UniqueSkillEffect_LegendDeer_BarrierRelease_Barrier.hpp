#ifndef UE4SS_SDK_BP_UniqueSkillEffect_LegendDeer_BarrierRelease_Barrier_HPP
#define UE4SS_SDK_BP_UniqueSkillEffect_LegendDeer_BarrierRelease_Barrier_HPP

class ABP_UniqueSkillEffect_LegendDeer_BarrierRelease_Barrier_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class USphereComponent* Sphere_Attack;                                            // 0x0438 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0440 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0448 (size: 0x8)
    class UPalSkillDamageReactionComponent* PalSkillDamageReaction;                   // 0x0450 (size: 0x8)
    double BarrierHP;                                                                 // 0x0458 (size: 0x8)
    FBP_UniqueSkillEffect_LegendDeer_BarrierRelease_Barrier_COnBarrierBreak OnBarrierBreak; // 0x0460 (size: 0x10)
    void OnBarrierBreak();
    double BarrierHP_Ultra;                                                           // 0x0470 (size: 0x8)
    class UNiagaraSystem* BarrierBreakEffect;                                         // 0x0478 (size: 0x8)
    TMap<double, FName> StateControl;                                                 // 0x0480 (size: 0x50)
    int32 CurrentState;                                                               // 0x04D0 (size: 0x4)
    class UNiagaraSystem* LastBreakEffect;                                            // 0x04D8 (size: 0x8)

    void ProcessDamage(double CurrentHP, double MaxHP);
    void ReceiveBeginPlay();
    void FadeOutEffect(double DeltaSecond);
    void SetFade();
    void BndEvt__BP_UniqueSkillEffect_LegendDeer_BarrierRelease_Barrier_PalSkillDamageReaction_K2Node_ComponentBoundEvent_1_OnSkillHPUpdateDelegate__DelegateSignature(float CurrentHP, float MaxHP);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_UniqueSkillEffect_LegendDeer_BarrierRelease_Barrier(int32 EntryPoint);
    void OnBarrierBreak__DelegateSignature();
}; // Size: 0x4E0

#endif
