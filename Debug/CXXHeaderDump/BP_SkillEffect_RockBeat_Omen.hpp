#ifndef UE4SS_SDK_BP_SkillEffect_RockBeat_Omen_HPP
#define UE4SS_SDK_BP_SkillEffect_RockBeat_Omen_HPP

class ABP_SkillEffect_RockBeat_Omen_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0438 (size: 0x8)
    double DelaySpawnRock;                                                            // 0x0440 (size: 0x8)
    double RockSpawnOffsetLocationZ;                                                  // 0x0448 (size: 0x8)
    double CameraShakeRadius;                                                         // 0x0450 (size: 0x8)

    void CalcLocationOnFloor(FVector BaesLocation, FVector& Location);
    void SpawnRock();
    void ReceiveBeginPlay();
    void CustomEvent();
    void ExecuteUbergraph_BP_SkillEffect_RockBeat_Omen(int32 EntryPoint);
}; // Size: 0x458

#endif
