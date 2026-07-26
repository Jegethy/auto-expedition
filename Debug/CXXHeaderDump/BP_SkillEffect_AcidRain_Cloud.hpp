#ifndef UE4SS_SDK_BP_SkillEffect_AcidRain_Cloud_HPP
#define UE4SS_SDK_BP_SkillEffect_AcidRain_Cloud_HPP

class ABP_SkillEffect_AcidRain_Cloud_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UPalSkillDamageReactionComponent* PalSkillDamageReaction;                   // 0x0438 (size: 0x8)
    class UBoxComponent* HitBoxCollision;                                             // 0x0440 (size: 0x8)
    class UNiagaraComponent* CloudEffect;                                             // 0x0448 (size: 0x8)
    FVector TargetOffset;                                                             // 0x0450 (size: 0x18)
    double FollowSpeed;                                                               // 0x0468 (size: 0x8)
    FVector ShotExtent;                                                               // 0x0470 (size: 0x18)
    double ShotInterval;                                                              // 0x0488 (size: 0x8)
    double TempTime;                                                                  // 0x0490 (size: 0x8)
    double ShotStartTime;                                                             // 0x0498 (size: 0x8)
    FVector preLocation;                                                              // 0x04A0 (size: 0x18)
    bool IsInitialized;                                                               // 0x04B8 (size: 0x1)
    double FindTargetDistance;                                                        // 0x04C0 (size: 0x8)
    int32 Hp;                                                                         // 0x04C8 (size: 0x4)
    FVector TargetLocation;                                                           // 0x04D0 (size: 0x18)
    class ABP_SkillEffec_AcidRain_Bullet_C* Bullet;                                   // 0x04E8 (size: 0x8)
    float SpawnRainBulletTimeOffset;                                                  // 0x04F0 (size: 0x4)
    class AActor* HomingTarget;                                                       // 0x04F8 (size: 0x8)

    void GetTargetLocation(FVector& Location);
    void SetHomingTarget(class AActor* Target, bool& Success);
    void FindNearestTarget(bool& IsExist);
    void ReceiveTick(float DeltaSeconds);
    void OnDamageSkill(const FPalDamageInfo& DamageInfo);
    void OnInitialize();
    void FadeOutEffect(double DeltaSecond);
    void EndSkill();
    void SpawnRainBullet();
    void ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud(int32 EntryPoint);
}; // Size: 0x500

#endif
