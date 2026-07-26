#ifndef UE4SS_SDK_BP_CoopSkill_StatusUp_Anubis_HPP
#define UE4SS_SDK_BP_CoopSkill_StatusUp_Anubis_HPP

class UBP_CoopSkill_StatusUp_Anubis_C : public UPalCoopSkillModuleAssignPassiveSkill
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0050 (size: 0x8)
    class UNiagaraComponent* Effect;                                                  // 0x0058 (size: 0x8)

    void OnSkillOverheat();
    void OnStartSkill();
    void OnTick(float DeltaTime);
    void ExecuteUbergraph_BP_CoopSkill_StatusUp_Anubis(int32 EntryPoint);
}; // Size: 0x60

#endif
