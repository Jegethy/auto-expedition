#ifndef UE4SS_SDK_BP_AIAction_Leave_AnimationBackStep_HPP
#define UE4SS_SDK_BP_AIAction_Leave_AnimationBackStep_HPP

class UBP_AIAction_Leave_AnimationBackStep_C : public UPalAIAction_LeaveBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    bool EndAble;                                                                     // 0x0158 (size: 0x1)
    bool TurnAble;                                                                    // 0x0159 (size: 0x1)
    TArray<FVector> GoalLocationList;                                                 // 0x0160 (size: 0x10)
    bool JumpFailure;                                                                 // 0x0170 (size: 0x1)
    double CurrentDistance;                                                           // 0x0178 (size: 0x8)

    void CheckReachable(FVector GoalPos, bool& Success, FVector& HitLocation);
    void AddGoalArray(double Right, double DistanceRate, FVector BackVector, FVector RightVector);
    void FindGoalLocation(FVector& GoalPos, bool& Success);
    void OnNotifyEnd_5A1B92A34AEA8F9E449C2AAE2F12A51B(FName NotifyName);
    void OnNotifyBegin_5A1B92A34AEA8F9E449C2AAE2F12A51B(FName NotifyName);
    void OnInterrupted_5A1B92A34AEA8F9E449C2AAE2F12A51B(FName NotifyName);
    void OnBlendOut_5A1B92A34AEA8F9E449C2AAE2F12A51B(FName NotifyName);
    void OnCompleted_5A1B92A34AEA8F9E449C2AAE2F12A51B(FName NotifyName);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void OnChildActionFinished(class UPawnAction* action, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ExecuteUbergraph_BP_AIAction_Leave_AnimationBackStep(int32 EntryPoint);
}; // Size: 0x180

#endif
