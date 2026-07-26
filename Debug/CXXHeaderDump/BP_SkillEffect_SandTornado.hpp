#ifndef UE4SS_SDK_BP_SkillEffect_SandTornado_HPP
#define UE4SS_SDK_BP_SkillEffect_SandTornado_HPP

class ABP_SkillEffect_SandTornado_C : public ABP_SkillEffect_DoubleTornadoBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C8 (size: 0x8)

    void OnTornadoReady(class APalSkillEffectBase* SkillEffect);
    void ExecuteUbergraph_BP_SkillEffect_SandTornado(int32 EntryPoint);
}; // Size: 0x4D0

#endif
