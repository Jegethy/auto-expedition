#ifndef UE4SS_SDK_BP_SkillEffect_FlareTornadoBullet_HPP
#define UE4SS_SDK_BP_SkillEffect_FlareTornadoBullet_HPP

class ABP_SkillEffect_FlareTornadoBullet_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0438 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0440 (size: 0x8)
    FVector2D TargetLocation2D;                                                       // 0x0448 (size: 0x10)
    FVector2D NormalizedDirection2D;                                                  // 0x0458 (size: 0x10)
    double RotationDegree;                                                            // 0x0468 (size: 0x8)
    double Speed;                                                                     // 0x0470 (size: 0x8)
    double DotThreshold;                                                              // 0x0478 (size: 0x8)

    void SetRandomValueIntoNiagaraVariable(class UNiagaraComponent* NiagaraComp);
    void MoveToTargetLocation(double DeltaTime);
    void ReceiveBeginPlay();
    void カスタムイベント_0();
    void FadeOutEffect(double DeltaSecond);
    void BndEvt__BP_SkillEffect_FlareTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void ExecuteUbergraph_BP_SkillEffect_FlareTornadoBullet(int32 EntryPoint);
}; // Size: 0x480

#endif
