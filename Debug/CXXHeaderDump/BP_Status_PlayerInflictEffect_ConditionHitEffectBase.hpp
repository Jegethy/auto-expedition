#ifndef UE4SS_SDK_BP_Status_PlayerInflictEffect_ConditionHitEffectBase_HPP
#define UE4SS_SDK_BP_Status_PlayerInflictEffect_ConditionHitEffectBase_HPP

class UBP_Status_PlayerInflictEffect_ConditionHitEffectBase_C : public UBP_Status_PlayerInflictEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00D0 (size: 0x8)
    bool IsInCooldown;                                                                // 0x00D8 (size: 0x1)
    double CooldownTime ;                                                             // 0x00E0 (size: 0x8)
    TSubclassOf<class ABP_PassiveAttackBase_C> SkillEffectClass;                      // 0x00E8 (size: 0x8)
    EPalStatusID Status ID;                                                           // 0x00F0 (size: 0x1)

    class ABP_PassiveAttackBase_C* SpawnEffect(FPalPassiveEffectTriggerInfo TriggerInfo);
    void OnSpawnEffect(class ABP_PassiveAttackBase_C* SpawnEffect);
    void CheckAdditionalCondition(FPalDamageResult& DamageResult, bool& CanActivate);
    void CanActivate(FPalDamageResult& DamageResult, bool& CanActivate);
    void OnEndCooldown();
    void OnInflictDamage(const FPalDamageResult& DamageResult);
    void TickStatus(float DeltaTime);
    void OnPassiveEffectTriggered(FPalPassiveEffectTriggerInfo TriggerInfo);
    void ExecuteUbergraph_BP_Status_PlayerInflictEffect_ConditionHitEffectBase(int32 EntryPoint);
}; // Size: 0xF1

#endif
