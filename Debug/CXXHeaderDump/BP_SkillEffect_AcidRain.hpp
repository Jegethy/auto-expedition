#ifndef UE4SS_SDK_BP_SkillEffect_AcidRain_HPP
#define UE4SS_SDK_BP_SkillEffect_AcidRain_HPP

class ABP_SkillEffect_AcidRain_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* ParticleEffect;                                          // 0x0438 (size: 0x8)
    FVector TargetOffset;                                                             // 0x0440 (size: 0x18)
    FVector preLocation;                                                              // 0x0458 (size: 0x18)
    double FollowSpeed;                                                               // 0x0470 (size: 0x8)
    FVector TargetLocation;                                                           // 0x0478 (size: 0x18)
    bool HasCloudSpawned;                                                             // 0x0490 (size: 0x1)
    class AActor* HomingTarget;                                                       // 0x0498 (size: 0x8)
    FVector InitLocation;                                                             // 0x04A0 (size: 0x18)

    void SetHomingTarget(class AActor* Target, bool& Success);
    void GetTargetLocation(FVector& Location);
    void ReceiveTick(float DeltaSeconds);
    void FadeOutEffect(double DeltaSecond);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SkillEffect_AcidRain(int32 EntryPoint);
}; // Size: 0x4B8

#endif
