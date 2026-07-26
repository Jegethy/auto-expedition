#ifndef UE4SS_SDK_BP_SkillEffect_DoubleTornadoBase_HPP
#define UE4SS_SDK_BP_SkillEffect_DoubleTornadoBase_HPP

class ABP_SkillEffect_DoubleTornadoBase_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    double SideOffset;                                                                // 0x0438 (size: 0x8)
    class APalSkillEffectBase* RightTornado;                                          // 0x0440 (size: 0x8)
    class APalSkillEffectBase* LeftTornado;                                           // 0x0448 (size: 0x8)
    TSubclassOf<class AActor> TornadoClass;                                           // 0x0450 (size: 0x8)
    FVector2D LeftTargetLocation2D;                                                   // 0x0458 (size: 0x10)
    FVector2D LeftNormalizedDirection2D;                                              // 0x0468 (size: 0x10)
    double DotThreshold;                                                              // 0x0478 (size: 0x8)
    double RotationDegree;                                                            // 0x0480 (size: 0x8)
    double MoveSpeed;                                                                 // 0x0488 (size: 0x8)
    FVector2D RightTargetLocation2D;                                                  // 0x0490 (size: 0x10)
    FVector2D RightNormalizedDirection2D;                                             // 0x04A0 (size: 0x10)
    float RightTornadoDelay;                                                          // 0x04B0 (size: 0x4)
    float LeftTornadoDelay;                                                           // 0x04B4 (size: 0x4)
    double StandbyTime;                                                               // 0x04B8 (size: 0x8)
    bool LeftReady;                                                                   // 0x04C0 (size: 0x1)
    bool RightReady;                                                                  // 0x04C1 (size: 0x1)

    void OnTornadoReady(class APalSkillEffectBase* SkillEffect);
    void ShootTornado(bool IsLeft, class APalSkillEffectBase*& SkillEffect);
    void MoveToTargetLocation(class APalSkillEffectBase*& Tornado, double DeltaTime, FVector2D TargetLocation2D, FVector2D NormalizedDirection2D, FVector2D& NewDirection, FVector2D& NewTargetLocation2D);
    void ShootBullet(FVector TargetLocation);
    void CancelShoot();
    void ReceiveTick(float DeltaSeconds);
    void OnInitialize();
    void SpawnLeftTornado();
    void SpawnRightTornado();
    void ExecuteUbergraph_BP_SkillEffect_DoubleTornadoBase(int32 EntryPoint);
}; // Size: 0x4C2

#endif
