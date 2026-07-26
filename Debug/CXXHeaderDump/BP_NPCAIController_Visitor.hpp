#ifndef UE4SS_SDK_BP_NPCAIController_Visitor_HPP
#define UE4SS_SDK_BP_NPCAIController_Visitor_HPP

class ABP_NPCAIController_Visitor_C : public ABP_NPCAIController_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D8 (size: 0x8)
    FVector GoalLocation;                                                             // 0x05E0 (size: 0x18)
    int32 ReturnTimeMinutes;                                                          // 0x05F8 (size: 0x4)
    int32 WalkAreaSplitNum;                                                           // 0x05FC (size: 0x4)
    EPalIVisitorNPCAction ActionTimeLimit;                                            // 0x0600 (size: 0x1)
    FBP_NPCAIController_Visitor_COnReturnSpawnedPoint OnReturnSpawnedPoint;           // 0x0608 (size: 0x10)
    void OnReturnSpawnedPoint();
    FVector Formation Offset;                                                         // 0x0618 (size: 0x18)
    FBP_NPCAIController_Visitor_COnBaseCampArrived OnBaseCampArrived;                 // 0x0630 (size: 0x10)
    void OnBaseCampArrived();
    class UPalForwardPathRecoveryModule* ForwardPathRecoveryModule;                   // 0x0640 (size: 0x8)
    bool RunWhileTraveling;                                                           // 0x0648 (size: 0x1)

    void ReturnSpawnedPointOtomo(FVector ReturnPoint);
    void ForceEscapeStartFortOutSide(class AActor* StartActor, class AActor* TargetActor);
    void StartTravelToBaseCamp();
    void OnDead(const class AActor* LastAttacker);
    void FindTargetPlayer(class AActor*& TargetActor);
    void StartRaid();
    void StartReturnToSpawnedPointAction();
    void StartWaitAction();
    void StartDefaultAIAction();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BindArriveEvent(class UBP_AIAction_Visitor_TravelToBaseCamp_C* action);
    void OnArrivedTargetPoint();
    void BindWaitFinishEvent(class UBP_AIAction_Visitor_WaitInBaseCamp_C* action);
    void OnWaitFinished();
    void OnStuck();
    void SetupVisitorParameter(const FPalVisitorInitParameter& InitParam);
    void ReceivePossess(class APawn* PossessedPawn);
    void OnRecruited();
    void OnCancelInvader();
    void ExecuteUbergraph_BP_NPCAIController_Visitor(int32 EntryPoint);
    void OnBaseCampArrived__DelegateSignature();
    void OnReturnSpawnedPoint__DelegateSignature();
}; // Size: 0x649

#endif
