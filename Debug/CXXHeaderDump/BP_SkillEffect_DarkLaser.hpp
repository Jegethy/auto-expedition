#ifndef UE4SS_SDK_BP_SkillEffect_DarkLaser_HPP
#define UE4SS_SDK_BP_SkillEffect_DarkLaser_HPP

class ABP_SkillEffect_DarkLaser_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0438 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0440 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0448 (size: 0x8)
    double StartCollisionTime;                                                        // 0x0450 (size: 0x8)
    double EndCollisionTime;                                                          // 0x0458 (size: 0x8)

    void ReceiveBeginPlay();
    void EnableCollision();
    void EndCollision();
    void ExecuteUbergraph_BP_SkillEffect_DarkLaser(int32 EntryPoint);
}; // Size: 0x460

#endif
