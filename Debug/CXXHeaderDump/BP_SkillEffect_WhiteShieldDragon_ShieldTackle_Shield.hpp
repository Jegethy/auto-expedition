#ifndef UE4SS_SDK_BP_SkillEffect_WhiteShieldDragon_ShieldTackle_Shield_HPP
#define UE4SS_SDK_BP_SkillEffect_WhiteShieldDragon_ShieldTackle_Shield_HPP

class ABP_SkillEffect_WhiteShieldDragon_ShieldTackle_Shield_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UBoxComponent* Attacker;                                                    // 0x0438 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0440 (size: 0x8)
    double TimeUntilFade;                                                             // 0x0448 (size: 0x8)
    double Time Until Fade Timer;                                                     // 0x0450 (size: 0x8)

    void OnOtherActionBegin(const class UPalActionBase* action);
    void ReceiveBeginPlay();
    void FadeOutEffect(double DeltaSecond);
    void FadeOut();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SkillEffect_WhiteShieldDragon_ShieldTackle_Shield(int32 EntryPoint);
}; // Size: 0x458

#endif
