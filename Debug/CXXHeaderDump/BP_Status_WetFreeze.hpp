#ifndef UE4SS_SDK_BP_Status_WetFreeze_HPP
#define UE4SS_SDK_BP_Status_WetFreeze_HPP

class UBP_Status_WetFreeze_C : public UBP_Status_PlayerInflictEffect_ConditionHitEffectBase_C
{

    void OnInflictDamage(const FPalDamageResult& DamageResult);
    void CheckAdditionalCondition(FPalDamageResult& DamageResult, bool& CanActivate);
}; // Size: 0xF1

#endif
