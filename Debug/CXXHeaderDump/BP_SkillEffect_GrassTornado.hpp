#ifndef UE4SS_SDK_BP_SkillEffect_GrassTornado_HPP
#define UE4SS_SDK_BP_SkillEffect_GrassTornado_HPP

class ABP_SkillEffect_GrassTornado_C : public ABP_SkillEffect_DoubleTornadoBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C8 (size: 0x8)

    void OnInitialize();
    void OnTornadoReady(class APalSkillEffectBase* SkillEffect);
    void ExecuteUbergraph_BP_SkillEffect_GrassTornado(int32 EntryPoint);
}; // Size: 0x4D0

#endif
