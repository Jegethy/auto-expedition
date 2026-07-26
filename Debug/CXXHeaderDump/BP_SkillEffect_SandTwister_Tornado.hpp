#ifndef UE4SS_SDK_BP_SkillEffect_SandTwister_Tornado_HPP
#define UE4SS_SDK_BP_SkillEffect_SandTwister_Tornado_HPP

class ABP_SkillEffect_SandTwister_Tornado_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0438 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0440 (size: 0x8)
    class USceneComponent* TornadoRotateRoot;                                         // 0x0448 (size: 0x8)

    void SpawnTornadoEnd();
    void ReceiveBeginPlay();
    void SetFadeOutTimer(double LifeTime);
    void Dest();
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_SandTwister_Tornado(int32 EntryPoint);
}; // Size: 0x450

#endif
