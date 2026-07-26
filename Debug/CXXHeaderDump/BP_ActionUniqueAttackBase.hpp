#ifndef UE4SS_SDK_BP_ActionUniqueAttackBase_HPP
#define UE4SS_SDK_BP_ActionUniqueAttackBase_HPP

class UBP_ActionUniqueAttackBase_C : public UPalActionWazaBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0180 (size: 0x8)
    double RotateSpeed;                                                               // 0x0188 (size: 0x8)
    class UAnimMontage* CurrentMontage;                                               // 0x0190 (size: 0x8)
    class AActor* UniqueActionTarget;                                                 // 0x0198 (size: 0x8)
    double FindFrontTargetDegree;                                                     // 0x01A0 (size: 0x8)
    double FindFrontTargetDistance;                                                   // 0x01A8 (size: 0x8)
    double FindFrontTargetHeight;                                                     // 0x01B0 (size: 0x8)
    FName flagName;                                                                   // 0x01B8 (size: 0x8)
    bool IsTargetInFrontCamera;                                                       // 0x01C0 (size: 0x1)
    TArray<TSoftObjectPtr<APalSkillEffectBase>> SpawnedEffects;                       // 0x01C8 (size: 0x10)
    TMap<class FName, class FSkillEffectSpawnParameter> SkillEffectSpawnParameters;   // 0x01D8 (size: 0x50)
    bool IsHoldTarget;                                                                // 0x0228 (size: 0x1)
    TSubclassOf<class UPalUniqueSkillModule> SkillModuleClass;                        // 0x0230 (size: 0x8)
    bool IsUseDummy;                                                                  // 0x0238 (size: 0x1)
    bool OriginalImmortality;                                                         // 0x0239 (size: 0x1)
    TArray<EPalStatusID> OriginalDisableAddStatus;                                    // 0x0240 (size: 0x10)
    bool OriginalBlowDisable;                                                         // 0x0250 (size: 0x1)
    bool OriginalLeanBackDisable;                                                     // 0x0251 (size: 0x1)
    FShooterSpringCameraParameter CurrentCameraOffset;                                // 0x0258 (size: 0x28)
    TArray<class UPalShooterSpringArmComponent*> RegistedCameraOffsetComponents;      // 0x0280 (size: 0x10)
    bool NowCameraOffseting;                                                          // 0x0290 (size: 0x1)
    bool MutekiCached;                                                                // 0x0291 (size: 0x1)
    bool CacheGliderVisibility;                                                       // 0x0292 (size: 0x1)
    bool GliderVisibilityCached;                                                      // 0x0293 (size: 0x1)

    void SetAcceptRiderClientMovement(bool IsEnable);
    void SwitchRiderVisibility(bool IsVisible, class APalCharacter* DirectCharacter);
    void SetMoveState_NonBlock(bool IsEnable);
    bool LineTraceForBlock(const FVector Start, const FVector End, bool IgnoreWater, FHitResult& OutHit);
    void OnLocalPlayerGetOff(class AActor* RideActor);
    void OnLocalPlayerRide(class AActor* RideActor);
    void SetLocalPlayerCameraOffset(bool isDisable, FShooterSpringCameraParameter Camera Offset);
    void SetState_Muteki(bool isDisable, bool ToggleImmortality);
    void GetPredictedTargetLocation(double MaxPredictDistance, double PredictPowerRate, FVector& PredictLocation);
    void SetMoveState_Collision(bool isDisable);
    void SweepAdjustToTargetLocation(FVector TargetLocation);
    void SetMoveState_BlowVelocity(bool isDisable);
    void GetCheckedTeleportDestination(int32 WarpCheckCount, double WarpFaceOriDegree, double WarpDestinationDistance, double WarpDestinationDistance_MapOb, bool AcceptSideBlockPos, bool IgnoreFloor, bool IsRiding, bool SearchUpper, FVector& TargetLocation, bool& HasFloor);
    void CalculateTeleportDestination(bool IsCharacter, double SearchDegree, double TeleportCheckDistance, FVector& Destination);
    void GetCapsuleHalfRadius(double& HalfRadius);
    void GetCapsuleHalfHeight(double& HalfHeight);
    void GetPalAnimInstance(class UPalAnimInstance*& AnimInstance);
    void CreateSkillActionModule(TSubclassOf<class UPalUniqueSkillModule> UniqueSkillModuleClass, class UBP_UniqueSkillModule_Tackle_C*& Module, class UPalUniqueSkillModule*& NativeModule);
    void FindEffectByClass(TSubclassOf<class APalSkillEffectBase> EffectClass, class APalSkillEffectBase*& Effect);
    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void AttachToOwner(class APalSkillEffectBase* Effect, FVector Offset, FName SocketName);
    void SetMoveState_Gravity(double GravityRate);
    void SetMoveState_Rotate(bool isDisable);
    void SetMoveState_Common(bool isDisable);
    void GetFootLocation(FVector& Location);
    void GetHeightToFloor(double& Height);
    void IsMontagePlaying(class UAnimMontage* Montage, bool& IsPlaying);
    void GetUniqueActionTarget(class AActor*& TargetActor);
    void GetAttackTargetLocation(bool IsFrontLocation, double FrontDistance, FVector& Location);
    void GetRotation(double DeltaTime, bool NoInterp, FRotator& Rotation);
    void FindActionTarget();
    void OnEndAction();
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void SpawnEffect(FName EffectKey);
    void ExecuteUbergraph_BP_ActionUniqueAttackBase(int32 EntryPoint);
}; // Size: 0x294

#endif
