#ifndef UE4SS_SDK_BP_SkillEffect_PlayerElementStepAttackBase_HPP
#define UE4SS_SDK_BP_SkillEffect_PlayerElementStepAttackBase_HPP

class ABP_SkillEffect_PlayerElementStepAttackBase_C : public ABP_PassiveAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0328 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0330 (size: 0x8)

    void GetWeaponAttackType(EPalAttackType& AttackType);
    void GetCollision(class UPrimitiveComponent*& Collision);
    void ReceiveBeginPlay();
    void OnRollingFinishDelegate();
    void FadeOutEffect(double DeltaSecond);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SkillEffect_PlayerElementStepAttackBase(int32 EntryPoint);
}; // Size: 0x338

#endif
