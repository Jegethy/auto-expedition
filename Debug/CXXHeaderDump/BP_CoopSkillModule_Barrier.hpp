#ifndef UE4SS_SDK_BP_CoopSkillModule_Barrier_HPP
#define UE4SS_SDK_BP_CoopSkillModule_Barrier_HPP

class UBP_CoopSkillModule_Barrier_C : public UPalCoopSkillModuleBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)

    void OnStartSkill();
    void OnSkillOverheat();
    void OnBarrierBreak();
    void ExecuteUbergraph_BP_CoopSkillModule_Barrier(int32 EntryPoint);
}; // Size: 0x40

#endif
