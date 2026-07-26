#ifndef UE4SS_SDK_BP_UniqueSkillEffect_LegendDeer_RadiantPurge_Rock_HPP
#define UE4SS_SDK_BP_UniqueSkillEffect_LegendDeer_RadiantPurge_Rock_HPP

class ABP_UniqueSkillEffect_LegendDeer_RadiantPurge_Rock_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UCapsuleComponent* TraceBlockCollision;                                     // 0x0438 (size: 0x8)
    class UCapsuleComponent* BlockCollision;                                          // 0x0440 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0448 (size: 0x8)
    double Life;                                                                      // 0x0450 (size: 0x8)

    void ReceiveBeginPlay();
    void EndLife();
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_UniqueSkillEffect_LegendDeer_RadiantPurge_Rock(int32 EntryPoint);
}; // Size: 0x458

#endif
