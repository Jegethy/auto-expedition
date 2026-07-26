#ifndef UE4SS_SDK_BP_UniqueSkillEffect_LegendDeer_BarrierRelease_Release_HPP
#define UE4SS_SDK_BP_UniqueSkillEffect_LegendDeer_BarrierRelease_Release_HPP

class ABP_UniqueSkillEffect_LegendDeer_BarrierRelease_Release_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0438 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0440 (size: 0x8)
    FTimerHandle ShakeTimer;                                                          // 0x0448 (size: 0x8)

    void ReceiveBeginPlay();
    void CameraShake();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_UniqueSkillEffect_LegendDeer_BarrierRelease_Release(int32 EntryPoint);
}; // Size: 0x450

#endif
