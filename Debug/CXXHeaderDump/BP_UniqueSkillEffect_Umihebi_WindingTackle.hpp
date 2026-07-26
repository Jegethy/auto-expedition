#ifndef UE4SS_SDK_BP_UniqueSkillEffect_Umihebi_WindingTackle_HPP
#define UE4SS_SDK_BP_UniqueSkillEffect_Umihebi_WindingTackle_HPP

class ABP_UniqueSkillEffect_Umihebi_WindingTackle_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UCapsuleComponent* TailCapsule;                                             // 0x0438 (size: 0x8)
    class UCapsuleComponent* HeadCapsule;                                             // 0x0440 (size: 0x8)
    class UNiagaraSystem* NeckEffect;                                                 // 0x0448 (size: 0x8)
    class UNiagaraSystem* LoopEffect;                                                 // 0x0450 (size: 0x8)
    class UNiagaraComponent* Effect1;                                                 // 0x0458 (size: 0x8)
    class UNiagaraComponent* Effect2;                                                 // 0x0460 (size: 0x8)
    class UNiagaraComponent* Effect3;                                                 // 0x0468 (size: 0x8)
    class UAkAudioEvent* Audio Event;                                                 // 0x0470 (size: 0x8)

    void ReceiveBeginPlay();
    void SetEffect();
    void SetFade();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void SetEffectParam();
    void ExecuteUbergraph_BP_UniqueSkillEffect_Umihebi_WindingTackle(int32 EntryPoint);
}; // Size: 0x478

#endif
