#ifndef UE4SS_SDK_BP_SkillEffect_SelfDestruct_HPP
#define UE4SS_SDK_BP_SkillEffect_SelfDestruct_HPP

class ABP_SkillEffect_SelfDestruct_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class USphereComponent* AttackCollision;                                          // 0x0438 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0440 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SkillEffect_SelfDestruct(int32 EntryPoint);
}; // Size: 0x448

#endif
