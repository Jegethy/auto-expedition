#ifndef UE4SS_SDK_BP_MonsterAIController_Visitor_Guardman_HPP
#define UE4SS_SDK_BP_MonsterAIController_Visitor_Guardman_HPP

class ABP_MonsterAIController_Visitor_Guardman_C : public ABP_MonsterAIControllerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)
    class UPalAISensorComponent* PalAISensor;                                         // 0x0598 (size: 0x8)
    FVector GoalLocation;                                                             // 0x05A0 (size: 0x18)
    int32 ReturnTimeMinutes;                                                          // 0x05B8 (size: 0x4)
    int32 WalkAreaSplitNum;                                                           // 0x05BC (size: 0x4)
    EPalIVisitorNPCAction ActionTimeLimit;                                            // 0x05C0 (size: 0x1)
    FVector Formation Offset;                                                         // 0x05C8 (size: 0x18)
    class APalCharacter* VisitorLeader;                                               // 0x05E0 (size: 0x8)
    class UPalForwardPathRecoveryModule* ForwardPathRecoveryModule;                   // 0x05E8 (size: 0x8)

    void GetMyBB(class UBP_PalAIBlackboard_Common_C*& PalBrackboard);
    void GetLeaderBB(class UBP_PalAIBlackboard_Common_C*& LeaderPalBrackboard);
    void OnCombatSquad(class AActor* TargetActor);
    void SetupVisitorLeader();
    void StartWaitAction();
    void StartReturnToSpawnedPointAction();
    void ReturnSpawnedPoint(FVector GoalLocation);
    void StartTravelToBaseCamp();
    void OnInvaderArrived();
    void BindOnInvaderArrivedDelegate(FBindOnInvaderArrivedDelegateEvent Event);
    void ReceivePossess(class APawn* PossessedPawn);
    void カスタムイベント_1(class APalCharacter* InCharacter);
    void カスタムイベント_OnDead(FPalDeadInfo DeadInfo);
    void BindWaitFinishEvent(class UBP_AIAction_Visitor_WaitInBaseCamp_C* action);
    void OnWaitFinished();
    void OnDeadByVisitorLeader(FPalDeadInfo DeadInfo);
    void OnReturnSpawnedPointByVisitorLeader();
    void BindArriveEvent(class UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C* action);
    void OnArrivedTargetPoint();
    void ReceiveBeginPlay();
    void OnStuck();
    void SetupVisitorParameter(const FPalVisitorInitParameter& InitParam);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_MonsterAIController_Visitor_Guardman(int32 EntryPoint);
}; // Size: 0x5F0

#endif
