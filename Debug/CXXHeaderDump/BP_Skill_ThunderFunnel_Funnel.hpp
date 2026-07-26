#ifndef UE4SS_SDK_BP_Skill_ThunderFunnel_Funnel_HPP
#define UE4SS_SDK_BP_Skill_ThunderFunnel_Funnel_HPP

class ABP_Skill_ThunderFunnel_Funnel_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* NS_CommonSkill_ThunderFunnel_Main;                       // 0x0438 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0440 (size: 0x8)
    double FunnelSpeed;                                                               // 0x0448 (size: 0x8)
    double ShotSpan;                                                                  // 0x0450 (size: 0x8)
    double TempTime;                                                                  // 0x0458 (size: 0x8)
    double EasePos;                                                                   // 0x0460 (size: 0x8)
    double EaseRot;                                                                   // 0x0468 (size: 0x8)
    double DelayTime;                                                                 // 0x0470 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> Object Types;                               // 0x0478 (size: 0x10)
    double FunnelSpeedWeight;                                                         // 0x0488 (size: 0x8)
    FVector FunnelLocationOffset_;                                                    // 0x0490 (size: 0x18)
    bool IsReady;                                                                     // 0x04A8 (size: 0x1)
    double FadeOutDelay;                                                              // 0x04B0 (size: 0x8)
    TArray<class ABP_Skill_ThunderFunnel_Bullet_C*> Bullets;                          // 0x04B8 (size: 0x10)
    double ShootingLifeTime;                                                          // 0x04C8 (size: 0x8)
    double TimeUntilFade;                                                             // 0x04D0 (size: 0x8)
    double TimeSpanOffset;                                                            // 0x04D8 (size: 0x8)
    class UAkAudioEvent* EndAkEvent;                                                  // 0x04E0 (size: 0x8)
    float EnemySearchDistance;                                                        // 0x04E8 (size: 0x4)

    void InitMoveFunnelLocation(double DeltaTime);
    void SpawnSkillEffect(class AActor* Owner, class ABP_SkillEffectBase_C*& SkillEffect);
    void GetNearestTargetLocation(FVector& NearestTargetLocation);
    void Get Bullet Rotat(FRotator& Rotation);
    void SpawnBullet();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void FadeOutEffect(double DeltaSecond);
    void SetLifeTimer();
    void Terminate();
    void ExecuteUbergraph_BP_Skill_ThunderFunnel_Funnel(int32 EntryPoint);
}; // Size: 0x4EC

#endif
