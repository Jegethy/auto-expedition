#ifndef UE4SS_SDK_BP_AIAction_AnimationSideStep_HPP
#define UE4SS_SDK_BP_AIAction_AnimationSideStep_HPP

class UBP_AIAction_AnimationSideStep_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0138 (size: 0x8)
    double SideWalkProbability;                                                       // 0x0140 (size: 0x8)
    class APalCharacter* SelfActor;                                                   // 0x0148 (size: 0x8)
    class UPalActionBase* PlayAction;                                                 // 0x0150 (size: 0x8)
    bool HasSideStepped;                                                              // 0x0158 (size: 0x1)

    void GetSelfPalBlackBoard(class UBP_PalAIBlackboard_Common_C*& PalBlackBoard);
    void GetStepLocation(bool IsRight, FVector& StepLocation);
    void GetPlayAction(bool IsRight, TSubclassOf<class UPalActionBase>& actionClass);
    void GetPlayMontage(bool IsRight, class UAnimMontage*& Montage);
    void FindStepLocation(FVector& Location, bool& CanStep, bool& IsRight);
    void ActionStart(class APawn* ControlledPawn);
    void OnChildActionFinished(class UPawnAction* action, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_AnimationSideStep(int32 EntryPoint);
}; // Size: 0x159

#endif
