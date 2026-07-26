#ifndef UE4SS_SDK_BP_AIAction_DashTurn_HPP
#define UE4SS_SDK_BP_AIAction_DashTurn_HPP

class UBP_AIAction_DashTurn_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0138 (size: 0x8)
    FVector SelfToTarget;                                                             // 0x0140 (size: 0x18)
    double Right;                                                                     // 0x0158 (size: 0x8)
    bool IsRightMoving;                                                               // 0x0160 (size: 0x1)
    FVector CurrentMoveGoal;                                                          // 0x0168 (size: 0x18)
    class APalCharacter* SelfActor;                                                   // 0x0180 (size: 0x8)
    bool IsCheckWalkableSuccess;                                                      // 0x0188 (size: 0x1)
    double Max Speed Multiply;                                                        // 0x0190 (size: 0x8)
    double TowardDirectRate;                                                          // 0x0198 (size: 0x8)
    double SideWalkProbability;                                                       // 0x01A0 (size: 0x8)
    float DashTime;                                                                   // 0x01A8 (size: 0x4)
    double BiteProbability;                                                           // 0x01B0 (size: 0x8)
    double DashActedTime;                                                             // 0x01B8 (size: 0x8)
    class UCurveVector* Curve;                                                        // 0x01C0 (size: 0x8)
    class UCurveVector* Curve_Far;                                                    // 0x01C8 (size: 0x8)
    FVector InitialLocation;                                                          // 0x01D0 (size: 0x18)
    FName BiteV2Name;                                                                 // 0x01E8 (size: 0x8)

    FVector GetTargetLocation(FVector& originalValue, FVector& Right);
    FVector GetCurveValue();
    void SwitchSpeed(bool SpeedUp);
    void CheckWalkable(bool IsRight, bool& Success, FVector& GoalPos);
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void OnChildActionFinished(class UPawnAction* action, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionTickAnyThread(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_DashTurn(int32 EntryPoint);
}; // Size: 0x1F0

#endif
