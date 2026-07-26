#ifndef UE4SS_SDK_BP_SkillEffect_FlareTornado_HPP
#define UE4SS_SDK_BP_SkillEffect_FlareTornado_HPP

class ABP_SkillEffect_FlareTornado_C : public ABP_SkillEffect_DoubleTornadoBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C8 (size: 0x8)

    void ExecuteUbergraph_BP_SkillEffect_FlareTornado(int32 EntryPoint);
}; // Size: 0x4D0

#endif
