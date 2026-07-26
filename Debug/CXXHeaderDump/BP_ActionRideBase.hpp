#ifndef UE4SS_SDK_BP_ActionRideBase_HPP
#define UE4SS_SDK_BP_ActionRideBase_HPP

class UBP_ActionRideBase_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    bool IsSuccess;                                                                   // 0x0168 (size: 0x1)
    double ToFinalTime;                                                               // 0x0170 (size: 0x8)
    double InterpTimer;                                                               // 0x0178 (size: 0x8)
    class UPalRiderComponent* RiderComponent;                                         // 0x0180 (size: 0x8)
    class UPalRideMarkerComponent* RideMarker;                                        // 0x0188 (size: 0x8)
    FTransform StartTransform;                                                        // 0x0190 (size: 0x60)
    FTransform JunctionPoint;                                                         // 0x01F0 (size: 0x60)
    double ToJunctionTime;                                                            // 0x0250 (size: 0x8)
    TEnumAsByte<ERideActionState::Type> State;                                        // 0x0258 (size: 0x1)
    FRotator StartMonsterRotator;                                                     // 0x0260 (size: 0x18)
    FRotator EndMonsterRotator;                                                       // 0x0278 (size: 0x18)
    double MonsterRotatorInterpTime;                                                  // 0x0290 (size: 0x8)
    double MonsterRotatorInterpTimer;                                                 // 0x0298 (size: 0x8)
    bool IsCancelMonsterRotation;                                                     // 0x02A0 (size: 0x1)
    FVector StartMeshLocation;                                                        // 0x02A8 (size: 0x18)
    FVector EndMeshLocation;                                                          // 0x02C0 (size: 0x18)
    FTransform RightJunctionPoint;                                                    // 0x02E0 (size: 0x60)
    FTransform LeftJunctionPoint;                                                     // 0x0340 (size: 0x60)
    class UAnimMontage* FrontRideAnimation;                                           // 0x03A0 (size: 0x8)
    class UAnimMontage* RearRideAnimation;                                            // 0x03A8 (size: 0x8)
    class UAnimMontage* LeftRideAnimation;                                            // 0x03B0 (size: 0x8)
    class UAnimMontage* RightRideAnimation;                                           // 0x03B8 (size: 0x8)
    class UAnimMontage* RideAnimation;                                                // 0x03C0 (size: 0x8)
    FTransform FrontJunctionPoint;                                                    // 0x03D0 (size: 0x60)
    FTransform RearJunctionPoint;                                                     // 0x0430 (size: 0x60)
    class UAkAudioEvent* RideStartSoundAKEvent;                                       // 0x0490 (size: 0x8)
    class UAkAudioEvent* RideCompleteSoundAKEvent;                                    // 0x0498 (size: 0x8)
    class UPalShooterComponent* ShooterComponent;                                     // 0x04A0 (size: 0x8)
    FName flagName;                                                                   // 0x04A8 (size: 0x8)

    void CheckRidingCompleted();
    void PlayRideCompleteSound();
    void PlayRideStartSound();
    void Update Ground Ray Cast(class APalCharacter* Rider);
    void CheckDirection(class AActor* RideTarget, TEnumAsByte<ERideActionDirection::Type>& Direction);
    void DebugDrawLocationLocation(FVector Location);
    void GetLocalLocationOnFloor(FVector NativeLocation, FVector& Location);
    void InterpMonsterRotation(double DeltaTime);
    void SetupRider(class APalCharacter* Rider, bool& IsSuccess);
    void InterpRiderLocation(double DeltaTime);
    void OnNotifyEnd_CD532E1C42E1BEC6059709A5FB6CCC91(FName NotifyName);
    void OnNotifyBegin_CD532E1C42E1BEC6059709A5FB6CCC91(FName NotifyName);
    void OnInterrupted_CD532E1C42E1BEC6059709A5FB6CCC91(FName NotifyName);
    void OnBlendOut_CD532E1C42E1BEC6059709A5FB6CCC91(FName NotifyName);
    void OnCompleted_CD532E1C42E1BEC6059709A5FB6CCC91(FName NotifyName);
    void OnBeginAction();
    void OnBreakAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_ActionRideBase(int32 EntryPoint);
}; // Size: 0x4B0

#endif
