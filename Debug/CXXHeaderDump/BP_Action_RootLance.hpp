#ifndef UE4SS_SDK_BP_Action_RootLance_HPP
#define UE4SS_SDK_BP_Action_RootLance_HPP

class UBP_Action_RootLance_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    class UNiagaraComponent* SkillSign;                                               // 0x02F0 (size: 0x8)

    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void OnBeginAction();
    void OnBreakAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_RootLance(int32 EntryPoint);
}; // Size: 0x2F8

#endif
