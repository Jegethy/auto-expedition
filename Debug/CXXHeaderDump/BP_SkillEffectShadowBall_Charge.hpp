#ifndef UE4SS_SDK_BP_SkillEffectShadowBall_Charge_HPP
#define UE4SS_SDK_BP_SkillEffectShadowBall_Charge_HPP

class ABP_SkillEffectShadowBall_Charge_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* Charge;                                                  // 0x0438 (size: 0x8)
    double ReadyTime;                                                                 // 0x0440 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x0448 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_SkillEffectShadowBall_Charge(int32 EntryPoint);
}; // Size: 0x450

#endif
