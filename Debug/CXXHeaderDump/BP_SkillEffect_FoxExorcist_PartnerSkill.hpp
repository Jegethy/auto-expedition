#ifndef UE4SS_SDK_BP_SkillEffect_FoxExorcist_PartnerSkill_HPP
#define UE4SS_SDK_BP_SkillEffect_FoxExorcist_PartnerSkill_HPP

class ABP_SkillEffect_FoxExorcist_PartnerSkill_C : public ABP_PassiveAttackBase_C
{
    class UNiagaraComponent* ExplosionEffect;                                         // 0x0320 (size: 0x8)
    class USphereComponent* ImpactDamage;                                             // 0x0328 (size: 0x8)

    void GetCollision(class UPrimitiveComponent*& Collision);
    void GetElement(EPalElementType& Element);
}; // Size: 0x330

#endif
