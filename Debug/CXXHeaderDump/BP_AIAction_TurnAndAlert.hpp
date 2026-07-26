#ifndef UE4SS_SDK_BP_AIAction_TurnAndAlert_HPP
#define UE4SS_SDK_BP_AIAction_TurnAndAlert_HPP

class UBP_AIAction_TurnAndAlert_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0178 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x0180 (size: 0x8)
    class UPalActionBase* EncountAction;                                              // 0x0188 (size: 0x8)
    FTimerHandle AlertTimer;                                                          // 0x0190 (size: 0x8)
    class UPalActionBase* TurnAction;                                                 // 0x0198 (size: 0x8)
    bool Turning;                                                                     // 0x01A0 (size: 0x1)
    FTimerHandle TurnTimer;                                                           // 0x01A8 (size: 0x8)
    TArray<int32> RandomArray;                                                        // 0x01B0 (size: 0x10)
    bool LastIsTurn;                                                                  // 0x01C0 (size: 0x1)
    bool Ended;                                                                       // 0x01C1 (size: 0x1)
    double MinEncountableTime;                                                        // 0x01C8 (size: 0x8)
    double LastEncountTimer;                                                          // 0x01D0 (size: 0x8)
    int32 General Purpose Index;                                                      // 0x01D8 (size: 0x4)

    void SetMoveAIAction();
    void RollActionIndex(int32& Index);
    void StopTurnAction();
    void IsActionRuning(bool& NowRun);
    void SetEncountAction(bool SkipTurn);
    void CheckAlert();
    void CancelEncountAction();
    void ActionStart(class APawn* ControlledPawn);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void TurnAndEncount();
    void EncountAndMove();
    void ExecuteUbergraph_BP_AIAction_TurnAndAlert(int32 EntryPoint);
}; // Size: 0x1DC

#endif
