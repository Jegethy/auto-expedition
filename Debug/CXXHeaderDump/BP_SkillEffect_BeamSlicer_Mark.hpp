#ifndef UE4SS_SDK_BP_SkillEffect_BeamSlicer_Mark_HPP
#define UE4SS_SDK_BP_SkillEffect_BeamSlicer_Mark_HPP

class ABP_SkillEffect_BeamSlicer_Mark_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0438 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0440 (size: 0x8)
    double WaitTime;                                                                  // 0x0448 (size: 0x8)
    double BrustHeight;                                                               // 0x0450 (size: 0x8)
    double BrustRadius;                                                               // 0x0458 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Brust();
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_BeamSlicer_Mark(int32 EntryPoint);
}; // Size: 0x460

#endif
