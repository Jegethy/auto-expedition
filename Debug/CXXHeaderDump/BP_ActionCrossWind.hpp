#ifndef UE4SS_SDK_BP_ActionCrossWind_HPP
#define UE4SS_SDK_BP_ActionCrossWind_HPP

class UBP_ActionCrossWind_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    bool FirstSpawn;                                                                  // 0x02F0 (size: 0x1)
    double OffsetAngle;                                                               // 0x02F8 (size: 0x8)
    double OffsetDistance;                                                            // 0x0300 (size: 0x8)

    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionCrossWind(int32 EntryPoint);
}; // Size: 0x308

#endif
