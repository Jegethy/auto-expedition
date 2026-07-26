#ifndef UE4SS_SDK_BP_Status_PlayerInflictEffect_BurnExplosion_HPP
#define UE4SS_SDK_BP_Status_PlayerInflictEffect_BurnExplosion_HPP

class UBP_Status_PlayerInflictEffect_BurnExplosion_C : public UBP_Status_PlayerInflictEffect_ConditionHitEffectBase_C
{

    void CheckAdditionalCondition(FPalDamageResult& DamageResult, bool& CanActivate);
}; // Size: 0xF1

#endif
