#ifndef UE4SS_SDK_BP_Action_BlastCannon_HPP
#define UE4SS_SDK_BP_Action_BlastCannon_HPP

class UBP_Action_BlastCannon_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    bool bShowPredictLocation;                                                        // 0x02F0 (size: 0x1)
    double PredictDistanceRate;                                                       // 0x02F8 (size: 0x8)
    double IgnoreHeightDistance;                                                      // 0x0300 (size: 0x8)

    void GetPredictedTargetLocation(FVector& Location);
    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_BlastCannon(int32 EntryPoint);
}; // Size: 0x308

#endif
