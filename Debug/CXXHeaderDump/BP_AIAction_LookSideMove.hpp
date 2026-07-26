#ifndef UE4SS_SDK_BP_AIAction_LookSideMove_HPP
#define UE4SS_SDK_BP_AIAction_LookSideMove_HPP

class UBP_AIAction_LookSideMove_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0138 (size: 0x8)
    bool IsRightMoving;                                                               // 0x0140 (size: 0x1)
    FVector CurrentMoveGoal;                                                          // 0x0148 (size: 0x18)
    class APalCharacter* SelfActor;                                                   // 0x0160 (size: 0x8)
    bool IsCheckWalkableSuccess;                                                      // 0x0168 (size: 0x1)
    double RandomRange;                                                               // 0x0170 (size: 0x8)
    double StandardDistance;                                                          // 0x0178 (size: 0x8)
    double FaceRate;                                                                  // 0x0180 (size: 0x8)
    bool TooFar;                                                                      // 0x0188 (size: 0x1)

    void CalcStandardDistance();
    void SwitchWalkSpeed(bool ToWalk);
    void TryMove(bool RightFirst, bool& MoveSuccess);
    void CheckWalkable(bool IsRight, bool& Success, FVector& GoalPos);
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void OnChildActionFinished(class UPawnAction* action, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionTickAnyThread(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_LookSideMove(int32 EntryPoint);
}; // Size: 0x189

#endif
