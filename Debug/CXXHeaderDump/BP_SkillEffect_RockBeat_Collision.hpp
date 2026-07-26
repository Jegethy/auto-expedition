#ifndef UE4SS_SDK_BP_SkillEffect_RockBeat_Collision_HPP
#define UE4SS_SDK_BP_SkillEffect_RockBeat_Collision_HPP

class ABP_SkillEffect_RockBeat_Collision_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0438 (size: 0x8)
    class UCurveFloat* CurveFloat;                                                    // 0x0440 (size: 0x8)
    double Timer;                                                                     // 0x0448 (size: 0x8)
    FVector StartLocation;                                                            // 0x0450 (size: 0x18)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SkillEffect_RockBeat_Collision(int32 EntryPoint);
}; // Size: 0x468

#endif
