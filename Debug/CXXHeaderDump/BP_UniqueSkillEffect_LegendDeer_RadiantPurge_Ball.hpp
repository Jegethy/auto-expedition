#ifndef UE4SS_SDK_BP_UniqueSkillEffect_LegendDeer_RadiantPurge_Ball_HPP
#define UE4SS_SDK_BP_UniqueSkillEffect_LegendDeer_RadiantPurge_Ball_HPP

class ABP_UniqueSkillEffect_LegendDeer_RadiantPurge_Ball_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0438 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0440 (size: 0x8)
    TMap<class AActor*, class UPrimitiveComponent*> Current Hitable Actor Map;        // 0x0448 (size: 0x50)
    FVector TargetLocation;                                                           // 0x0498 (size: 0x18)
    FTimerHandle SearchTimer;                                                         // 0x04B0 (size: 0x8)
    double Speed;                                                                     // 0x04B8 (size: 0x8)
    double CastTime;                                                                  // 0x04C0 (size: 0x8)
    double CurrentTime;                                                               // 0x04C8 (size: 0x8)
    FVector OriginalLocation;                                                         // 0x04D0 (size: 0x18)
    bool Casting;                                                                     // 0x04E8 (size: 0x1)
    FTimerHandle CameraShakeTimer;                                                    // 0x04F0 (size: 0x8)
    double Radius;                                                                    // 0x04F8 (size: 0x8)
    TMap<class APalCharacter*, class UArrowComponent*> SignMap;                       // 0x0500 (size: 0x50)
    class UCurveVector* Curve_RandomBall;                                             // 0x0550 (size: 0x8)
    double CurrentYaw;                                                                // 0x0558 (size: 0x8)
    double YawSpeed;                                                                  // 0x0560 (size: 0x8)
    double LengthX;                                                                   // 0x0568 (size: 0x8)
    double LengthZ;                                                                   // 0x0570 (size: 0x8)
    bool Reverse;                                                                     // 0x0578 (size: 0x1)
    FGuid PreserveID;                                                                 // 0x057C (size: 0x10)
    bool CurrentLocalMarking;                                                         // 0x058C (size: 0x1)

    void LocalWarningSign(bool IsAdd);
    void Warning Sign(class APalCharacter* Character, bool IsAdd);
    void ReceiveTick(float DeltaSeconds);
    void SearchTarget();
    void ReceiveBeginPlay();
    void SetParam(FVector Location, double Radius);
    void EnableCast();
    void FadeOutEffect(double DeltaSecond);
    void CameraShake();
    void BndEvt__BP_UniqueSkillEffect_LegendDeer_RadiantPurge_Purge_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ChangeYaw();
    void SetPreserveId(FGuid ID);
    void ExecuteUbergraph_BP_UniqueSkillEffect_LegendDeer_RadiantPurge_Ball(int32 EntryPoint);
}; // Size: 0x58D

#endif
