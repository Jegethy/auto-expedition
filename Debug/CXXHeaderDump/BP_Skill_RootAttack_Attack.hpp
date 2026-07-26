#ifndef UE4SS_SDK_BP_Skill_RootAttack_Attack_HPP
#define UE4SS_SDK_BP_Skill_RootAttack_Attack_HPP

class ABP_Skill_RootAttack_Attack_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0438 (size: 0x8)
    class UNiagaraComponent* RootAttack_2;                                            // 0x0440 (size: 0x8)
    double destroyTime;                                                               // 0x0448 (size: 0x8)

    void ReceiveBeginPlay();
    void DisableCollision();
    void ExecuteUbergraph_BP_Skill_RootAttack_Attack(int32 EntryPoint);
}; // Size: 0x450

#endif
