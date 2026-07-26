#ifndef UE4SS_SDK_BP_SkillEffect_BeamSlicer_Beam_HPP
#define UE4SS_SDK_BP_SkillEffect_BeamSlicer_Beam_HPP

class ABP_SkillEffect_BeamSlicer_Beam_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0438 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0440 (size: 0x8)

    void ReceiveBeginPlay();
    void SetBeamSizeAndLife(double Length, double LifeTime, double Size);
    void EndBeam();
    void FadeOutEffect(double DeltaSecond);
    void SetBeamLength(double Length);
    void SetPowerRate(double PowerRate);
    void ExecuteUbergraph_BP_SkillEffect_BeamSlicer_Beam(int32 EntryPoint);
}; // Size: 0x448

#endif
