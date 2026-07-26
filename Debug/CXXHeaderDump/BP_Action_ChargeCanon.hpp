#ifndef UE4SS_SDK_BP_Action_ChargeCanon_HPP
#define UE4SS_SDK_BP_Action_ChargeCanon_HPP

class UBP_Action_ChargeCanon_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    double ImpactRadius;                                                              // 0x02F0 (size: 0x8)
    bool bShowPredictLocation;                                                        // 0x02F8 (size: 0x1)

    void GetPredictedTargetLocation(FVector& Location);
    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_ChargeCanon(int32 EntryPoint);
}; // Size: 0x2F9

#endif
