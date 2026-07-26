#ifndef UE4SS_SDK_BP_ActionElecWave_HPP
#define UE4SS_SDK_BP_ActionElecWave_HPP

class UBP_ActionElecWave_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)

    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void ExecuteUbergraph_BP_ActionElecWave(int32 EntryPoint);
}; // Size: 0x2F0

#endif
