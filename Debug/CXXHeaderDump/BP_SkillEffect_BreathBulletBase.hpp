#ifndef UE4SS_SDK_BP_SkillEffect_BreathBulletBase_HPP
#define UE4SS_SDK_BP_SkillEffect_BreathBulletBase_HPP

class ABP_SkillEffect_BreathBulletBase_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class USphereComponent* Collision;                                                // 0x0438 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x0440 (size: 0x8)
    double RootScale;                                                                 // 0x0448 (size: 0x8)
    class UNiagaraSystem* Const_HitEffect;                                            // 0x0450 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SkillEffect_BreathBulletBase(int32 EntryPoint);
}; // Size: 0x458

#endif
