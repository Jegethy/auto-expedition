#ifndef UE4SS_SDK_BP_SkillEffect_Apocalypse_TornadoBullet_HPP
#define UE4SS_SDK_BP_SkillEffect_Apocalypse_TornadoBullet_HPP

class ABP_SkillEffect_Apocalypse_TornadoBullet_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* OmenEffect;                                              // 0x0438 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0440 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0448 (size: 0x8)
    FVector2D TargetLocation2D;                                                       // 0x0450 (size: 0x10)
    FVector2D NormalizedDirection2D;                                                  // 0x0460 (size: 0x10)
    double RotationDegree;                                                            // 0x0470 (size: 0x8)
    double Speed;                                                                     // 0x0478 (size: 0x8)
    double DotThreshold;                                                              // 0x0480 (size: 0x8)
    float EffectDuration;                                                             // 0x0488 (size: 0x4)
    FTimerHandle Timer;                                                               // 0x0490 (size: 0x8)

    void Explosion();
    void ReceiveBeginPlay();
    void EndProcess();
    void FadeOutEffect(double DeltaSecond);
    void BndEvt__BP_SkillEffect_SandTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void OnExplosion();
    void ExecuteUbergraph_BP_SkillEffect_Apocalypse_TornadoBullet(int32 EntryPoint);
}; // Size: 0x498

#endif
