#ifndef UE4SS_SDK_BP_SkillEffect_FlameFunnel_Bullet_HPP
#define UE4SS_SDK_BP_SkillEffect_FlameFunnel_Bullet_HPP

class ABP_SkillEffect_FlameFunnel_Bullet_C : public ABP_Skill_ThunderFunnel_Bullet_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0458 (size: 0x8)
    double InitHomingStrength;                                                        // 0x0460 (size: 0x8)
    double HomingAttenuation;                                                         // 0x0468 (size: 0x8)
    double HomingStregth;                                                             // 0x0470 (size: 0x8)
    float EnemySearchDistance;                                                        // 0x0478 (size: 0x4)
    double Speed;                                                                     // 0x0480 (size: 0x8)
    class APalCharacter* TempRandomTarget;                                            // 0x0488 (size: 0x8)

    void GetRandomTarget(class APalCharacter*& Target);
    FVector GetCurrentTargetLocation();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_FlameFunnel_Bullet(int32 EntryPoint);
}; // Size: 0x490

#endif
