#ifndef UE4SS_SDK_BP_Action_ParabolaBallBase_HPP
#define UE4SS_SDK_BP_Action_ParabolaBallBase_HPP

class UBP_Action_ParabolaBallBase_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    double Const_ShootDelay;                                                          // 0x02F0 (size: 0x8)
    class APalSkillEffectBase* MainEffect;                                            // 0x02F8 (size: 0x8)

    void GetTaegetLocation(FVector& Pos);
    void OnStartProcessAnimation();
    void ExecuteUbergraph_BP_Action_ParabolaBallBase(int32 EntryPoint);
}; // Size: 0x300

#endif
