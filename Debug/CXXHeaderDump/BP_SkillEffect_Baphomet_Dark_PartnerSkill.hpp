#ifndef UE4SS_SDK_BP_SkillEffect_Baphomet_Dark_PartnerSkill_HPP
#define UE4SS_SDK_BP_SkillEffect_Baphomet_Dark_PartnerSkill_HPP

class ABP_SkillEffect_Baphomet_Dark_PartnerSkill_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0438 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0440 (size: 0x8)
    class UPalSkillDamageReactionComponent* PalSkillDamageReaction;                   // 0x0448 (size: 0x8)
    class UNiagaraSystem* BarrierBreakEffect;                                         // 0x0450 (size: 0x8)
    TMap<double, FName> StateControl;                                                 // 0x0458 (size: 0x50)
    int32 CurrentState;                                                               // 0x04A8 (size: 0x4)
    class UNiagaraSystem* LastBreakEffect;                                            // 0x04B0 (size: 0x8)
    FBP_SkillEffect_Baphomet_Dark_PartnerSkill_COnBarrierBreak OnBarrierBreak;        // 0x04B8 (size: 0x10)
    void OnBarrierBreak();
    bool BarrierActivated;                                                            // 0x04C8 (size: 0x1)

    void SetActorCollision(bool isDisable);
    void ReceiveTick(float DeltaSeconds);
    void ProcessDamage(double CurrentHP, double MaxHP);
    void ReceiveBeginPlay();
    void FadeOutEffect(double DeltaSecond);
    void SetFade();
    void SetParam(double Hp, double Time);
    void BndEvt__BP_UniqueSkillEffect_LegendDeer_CoopBarrier_Barrier_PalSkillDamageReaction_K2Node_ComponentBoundEvent_1_OnSkillHPUpdateDelegate__DelegateSignature(float CurrentHP, float MaxHP);
    void AbortBarrier();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_SkillEffect_Baphomet_Dark_PartnerSkill(int32 EntryPoint);
    void OnBarrierBreak__DelegateSignature();
}; // Size: 0x4C9

#endif
