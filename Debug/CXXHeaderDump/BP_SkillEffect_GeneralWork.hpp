#ifndef UE4SS_SDK_BP_SkillEffect_GeneralWork_HPP
#define UE4SS_SDK_BP_SkillEffect_GeneralWork_HPP

class ABP_SkillEffect_GeneralWork_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0438 (size: 0x8)
    class UParticleSystemComponent* PS_Scratch2;                                      // 0x0440 (size: 0x8)
    class UParticleSystemComponent* PS_Scratch1;                                      // 0x0448 (size: 0x8)
    class UParticleSystemComponent* PS_Scratch;                                       // 0x0450 (size: 0x8)
    double StartCollisionTime;                                                        // 0x0458 (size: 0x8)
    double EndCollisionTime;                                                          // 0x0460 (size: 0x8)

    void SetupCollision(FVector TargetLocationPoint, FVector ImpactPoint);
    void ReceiveBeginPlay();
    void EnableCollision();
    void EndCollision();
    void ExecuteUbergraph_BP_SkillEffect_GeneralWork(int32 EntryPoint);
}; // Size: 0x468

#endif
