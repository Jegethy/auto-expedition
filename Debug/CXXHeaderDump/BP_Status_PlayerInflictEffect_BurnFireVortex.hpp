#ifndef UE4SS_SDK_BP_Status_PlayerInflictEffect_BurnFireVortex_HPP
#define UE4SS_SDK_BP_Status_PlayerInflictEffect_BurnFireVortex_HPP

class UBP_Status_PlayerInflictEffect_BurnFireVortex_C : public UBP_Status_PlayerInflictEffect_ConditionHitEffectBase_C
{
    int32 Max;                                                                        // 0x00F4 (size: 0x4)
    double Probability;                                                               // 0x00F8 (size: 0x8)
    TArray<class ABP_PassiveAttackBase_C*> EffectList;                                // 0x0100 (size: 0x10)

    void OnDestroyEffect(class AActor* DestroyedActor);
    void OnSpawnEffect(class ABP_PassiveAttackBase_C* SpawnEffect);
    void CheckAdditionalCondition(FPalDamageResult& DamageResult, bool& CanActivate);
}; // Size: 0x110

#endif
