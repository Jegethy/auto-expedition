#ifndef UE4SS_SDK_BP_Status_PlayerInflictEffect_PoisonedAttackDown_HPP
#define UE4SS_SDK_BP_Status_PlayerInflictEffect_PoisonedAttackDown_HPP

class UBP_Status_PlayerInflictEffect_PoisonedAttackDown_C : public UBP_Status_PlayerInflictEffect_ConditionHitEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00F8 (size: 0x8)
    EPalStatusID ConditionStatus;                                                     // 0x0100 (size: 0x1)

    void OnInflictDamage(const FPalDamageResult& DamageResult);
    void OnPassiveEffectTriggered(FPalPassiveEffectTriggerInfo TriggerInfo);
    void ExecuteUbergraph_BP_Status_PlayerInflictEffect_PoisonedAttackDown(int32 EntryPoint);
}; // Size: 0x101

#endif
