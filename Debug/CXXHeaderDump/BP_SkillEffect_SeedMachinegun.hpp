#ifndef UE4SS_SDK_BP_SkillEffect_SeedMachinegun_HPP
#define UE4SS_SDK_BP_SkillEffect_SeedMachinegun_HPP

class ABP_SkillEffect_SeedMachinegun_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class USphereComponent* Sphere1;                                                  // 0x0438 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0440 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0448 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0450 (size: 0x8)
    double StartCollisionTime;                                                        // 0x0458 (size: 0x8)
    double EndCollisionTime;                                                          // 0x0460 (size: 0x8)

    void CalcCapsuleLocation(FVector& Location);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void EnableCollision();
    void EndCollision();
    void BndEvt__BP_SkillEffect_SeedMachinegun_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void ExecuteUbergraph_BP_SkillEffect_SeedMachinegun(int32 EntryPoint);
}; // Size: 0x468

#endif
