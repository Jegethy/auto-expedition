#ifndef UE4SS_SDK_BP_AIAction_Police_SearchingPlayer_HPP
#define UE4SS_SDK_BP_AIAction_Police_SearchingPlayer_HPP

class UBP_AIAction_Police_SearchingPlayer_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0178 (size: 0x8)
    bool IsPal;                                                                       // 0x0180 (size: 0x1)
    bool IsFlyPal;                                                                    // 0x0181 (size: 0x1)
    FVector TargetLocation;                                                           // 0x0188 (size: 0x18)
    bool DashMode;                                                                    // 0x01A0 (size: 0x1)
    FBP_AIAction_Police_SearchingPlayer_COnArrivedTargetPoint OnArrivedTargetPoint;   // 0x01A8 (size: 0x10)
    void OnArrivedTargetPoint();
    FVector PrevLocation;                                                             // 0x01B8 (size: 0x18)
    double StuckElapsedTime;                                                          // 0x01D0 (size: 0x8)
    FBP_AIAction_Police_SearchingPlayer_COnStuck OnStuck;                             // 0x01D8 (size: 0x10)
    void OnStuck();
    bool IsStuck;                                                                     // 0x01E8 (size: 0x1)
    FVector SafeNavLocation;                                                          // 0x01F0 (size: 0x18)
    double RunSpeedRateNPC;                                                           // 0x0208 (size: 0x8)
    double WanderRadius;                                                              // 0x0210 (size: 0x8)
    class APalCharacter* CurrentTarget;                                               // 0x0218 (size: 0x8)
    FName flagName;                                                                   // 0x0220 (size: 0x8)
    double StuckTime;                                                                 // 0x0228 (size: 0x8)
    double RunSpeedRatePal;                                                           // 0x0230 (size: 0x8)

    void MoveToLocation(FVector GoalLocation);
    void GetRunSpeed(double& Speed);
    void TickMoveToTargetLocation(class AActor* ControlledPawn, float DeltaTime);
    void SoundEvent(FVector EmitLocation);
    void Sight Check and Response(EPalAIResponseType Current, bool OverrideIsDamage, bool& ChangeNextAction);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionPause(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionResume(class APawn* ControlledPawn);
    void HandleStuck();
    void StartWander();
    void OnSightCheckAsyncCompleted(bool bIncludedPlayer, bool bIncludedAliveNPC, bool bIncludedEdibleDeadNPC, const TArray<class APalCharacter*>& InSightCharacters);
    void ExecuteUbergraph_BP_AIAction_Police_SearchingPlayer(int32 EntryPoint);
    void OnStuck__DelegateSignature();
    void OnArrivedTargetPoint__DelegateSignature();
}; // Size: 0x238

#endif
