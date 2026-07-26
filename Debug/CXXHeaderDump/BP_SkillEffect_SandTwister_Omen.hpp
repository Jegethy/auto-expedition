#ifndef UE4SS_SDK_BP_SkillEffect_SandTwister_Omen_HPP
#define UE4SS_SDK_BP_SkillEffect_SandTwister_Omen_HPP

class ABP_SkillEffect_SandTwister_Omen_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class USceneComponent* Omen;                                                      // 0x0438 (size: 0x8)
    class USceneComponent* OmenRoot;                                                  // 0x0440 (size: 0x8)
    double TimeUntilFade;                                                             // 0x0448 (size: 0x8)
    double TornadoLifeTime;                                                           // 0x0450 (size: 0x8)

    void SpawnOmen();
    void ReceiveBeginPlay();
    void SetLifeTimer();
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_SandTwister_Omen(int32 EntryPoint);
}; // Size: 0x458

#endif
