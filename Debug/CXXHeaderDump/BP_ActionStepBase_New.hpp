#ifndef UE4SS_SDK_BP_ActionStepBase_New_HPP
#define UE4SS_SDK_BP_ActionStepBase_New_HPP

class UBP_ActionStepBase_New_C : public UPalActionMovementModeBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0180 (size: 0x8)
    FName flagName;                                                                   // 0x0188 (size: 0x8)
    double StepTime;                                                                  // 0x0190 (size: 0x8)
    class UCurveFloat* StepCurve;                                                     // 0x0198 (size: 0x8)
    double Timer;                                                                     // 0x01A0 (size: 0x8)
    EPalGeneralMontageType StepType;                                                  // 0x01A8 (size: 0x1)
    bool CanEndStep;                                                                  // 0x01A9 (size: 0x1)
    class UAnimMontage* Montage;                                                      // 0x01B0 (size: 0x8)
    bool CanCrouchCancel;                                                             // 0x01B8 (size: 0x1)
    double CrouchCancelTime;                                                          // 0x01C0 (size: 0x8)
    class UCurveFloat* StepCurve_Location;                                            // 0x01C8 (size: 0x8)
    FVector StartLocation;                                                            // 0x01D0 (size: 0x18)
    FVector MoveDirection;                                                            // 0x01E8 (size: 0x18)
    double Const_MoveDistance;                                                        // 0x0200 (size: 0x8)
    double CurrentFallingSpeed;                                                       // 0x0208 (size: 0x8)
    double Const_FallingAcceleration;                                                 // 0x0210 (size: 0x8)
    TArray<class AActor*> IgnoreActors;                                               // 0x0218 (size: 0x10)
    double Const_MaxFallingSpeed;                                                     // 0x0228 (size: 0x8)
    double Const_MaxAirborneTime;                                                     // 0x0230 (size: 0x8)
    double CurrentAirboneTime;                                                        // 0x0238 (size: 0x8)
    TEnumAsByte<ETraceTypeQuery> Const_TraceChannel;                                  // 0x0240 (size: 0x1)
    TEnumAsByte<EDrawDebugTrace::Type> Const_DrawDebugType;                           // 0x0241 (size: 0x1)
    double CapsuleHeightHalf_Max;                                                     // 0x0248 (size: 0x8)
    double CapsuleHeightHalf_Min;                                                     // 0x0250 (size: 0x8)
    double Timer_forCapsule;                                                          // 0x0258 (size: 0x8)
    double ActionTimer;                                                               // 0x0260 (size: 0x8)
    FVector LastVelocity;                                                             // 0x0268 (size: 0x18)
    bool bCancelled;                                                                  // 0x0280 (size: 0x1)
    bool ShootDisable;                                                                // 0x0281 (size: 0x1)
    float RotationRate;                                                               // 0x0284 (size: 0x4)
    bool LockRotation;                                                                // 0x0288 (size: 0x1)

    void UpdateMoveDir(double DeltaTime);
    void GetMoveDirection(FVector& Dir);
    EPalActionMovementBaseType GetMovementType();
    bool IsApplyFinishVelocityOnEndAction();
    FVector K2_Async_GetFinishVelocity(FVector BaseVelocity);
    FVector K2_Async_GetVelocity(FVector BaseVelocity, bool& bUseOriginalCalcVelocity);
    void CheckOtherCharacter(FVector NextPlayerPos, bool& IsStop);
    void LayCheck_ForSweepMove(FVector DesiredPos, FVector& ResultActorPos, bool& IsHit);
    void DisableShooter(bool ShootDisable);
    void CheckFrontHight(double DeltaTime, bool& CanThrough);
    void CheckEndAction();
    bool CanNextActionCancel();
    void DisableMovement(bool Disable);
    bool CanGainSP();
    void OnEndAction();
    void EndStep();
    void K2_Async_BeginMovementMode();
    void K2_Async_EndMovementMode();
    void K2_Async_UpdateVelocity(float InDeltaTime);
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionStepBase_New(int32 EntryPoint);
}; // Size: 0x289

#endif
