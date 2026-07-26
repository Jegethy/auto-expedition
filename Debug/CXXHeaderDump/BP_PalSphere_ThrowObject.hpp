#ifndef UE4SS_SDK_BP_PalSphere_ThrowObject_HPP
#define UE4SS_SDK_BP_PalSphere_ThrowObject_HPP

class ABP_PalSphere_ThrowObject_C : public ABP_ThrowCaptureObjectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0440 (size: 0x8)
    class UNiagaraComponent* Trail;                                                   // 0x0448 (size: 0x8)
    class USkeletalMeshComponent* SK_Weapon_PalSphere_001;                            // 0x0450 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0458 (size: 0x8)
    class APalCharacter* TargetPal;                                                   // 0x0460 (size: 0x8)
    FVector preLocation;                                                              // 0x0468 (size: 0x18)
    bool IsBounce;                                                                    // 0x0480 (size: 0x1)
    FRotator ThrowRotator;                                                            // 0x0488 (size: 0x18)
    FRotator CurrentBallRotator;                                                      // 0x04A0 (size: 0x18)
    class UNiagaraSystem* sneakEffect;                                                // 0x04B8 (size: 0x8)
    bool tempCaptureAble;                                                             // 0x04C0 (size: 0x1)
    FPalDataTableRowName_SoundID SoundId_Bounce;                                      // 0x04C4 (size: 0x8)
    FPalDataTableRowName_SoundID SoundId_HitPal;                                      // 0x04CC (size: 0x8)
    bool IsLocalControlled;                                                           // 0x04D4 (size: 0x1)
    bool IsInServer;                                                                  // 0x04D5 (size: 0x1)
    bool IsSneakHit;                                                                  // 0x04D6 (size: 0x1)
    FVector2D CurveVelocity;                                                          // 0x04D8 (size: 0x10)
    FRotator StartVelocityRotation;                                                   // 0x04E8 (size: 0x18)
    double CurveInterval;                                                             // 0x0500 (size: 0x8)
    double CurveIntervalTimer;                                                        // 0x0508 (size: 0x8)
    EPalCurveBall CurveID;                                                            // 0x0510 (size: 0x1)
    double Forward Velocity;                                                          // 0x0518 (size: 0x8)
    FVector2D InitCurveVelocity;                                                      // 0x0520 (size: 0x10)
    bool bIsCriticalCapture;                                                          // 0x0530 (size: 0x1)

    void FillOverlap();
    void IsCritical(class UPrimitiveComponent* OverlappedComponent, bool& bCritical);
    void SetupCurveID();
    void Setup Horming();
    void SetCurveParameter(EPalCurveBall CurveID);
    void UpdateCurve(double DeltaTime);
    void GetOwnerCharacterOrRidingCharacter(class AActor*& RidingCharacter);
    void IsOwnerLocalControlActor(bool& IsLocalControlActor);
    void OnSpawnJudgeBall(FGuid SpawnGUID, class AActor* SpawnActor);
    void Play Sound Bounce(FHitResult HitResult);
    void IsCountDestroy(bool& IsDestroy);
    void Capture Start Process After Delay(class ABP_PalCaptureBodyBase_C* Body, class APalCharacter* TargetActor, bool SneakAttack);
    void SetProjectileMovement(class AActor* HitActor);
    void CaptureStartProcess();
    void IsCaptureablePal(class AActor* TargetActor, bool& Captureable, class APalCharacter*& TargetPalCharacter);
    void GetMaxBoundCount(int32& Count);
    void GetBodyClass(TSubclassOf<class ABP_PalCaptureBodyBase_C>& bodyClass);
    void UpdateRotator(double DeltaTime);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void DelayCaptureBodyStart(class ABP_PalCaptureBodyBase_C* BodyActor, class APalCharacter* Target, double Delay, bool SneakAttack);
    void OnOverlap(class AActor* Actor, class UPrimitiveComponent* PrimitiveComponent);
    void UpdateHoming();
    void ExecuteUbergraph_BP_PalSphere_ThrowObject(int32 EntryPoint);
}; // Size: 0x531

#endif
