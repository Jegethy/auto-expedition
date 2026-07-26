#ifndef UE4SS_SDK_BP_MonsterAIController_Invader_HPP
#define UE4SS_SDK_BP_MonsterAIController_Invader_HPP

class ABP_MonsterAIController_Invader_C : public ABP_MonsterAIControllerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)
    class UPalAISensorComponent* PalAISensor;                                         // 0x0598 (size: 0x8)
    FVector TargetBaseCampPosition;                                                   // 0x05A0 (size: 0x18)
    FBP_MonsterAIController_Invader_COnInvaderArrivedDelegate OnInvaderArrivedDelegate; // 0x05B8 (size: 0x10)
    void OnInvaderArrivedDelegate();
    class UPalForwardPathRecoveryModule* ForwardPathRecoveryModule;                   // 0x05C8 (size: 0x8)

    void GetMyBB(class UBP_PalAIBlackboard_Common_C*& PalBrackboard);
    void GetLeaderBB(class UBP_PalAIBlackboard_Common_C*& LeaderPalBrackboard);
    void ReturnSpawnedPoint(FVector GoalLocation);
    void StartMartch(FVector GoalPosition);
    void Setup(FVector BaseCampPos);
    void ReceivePossess(class APawn* PossessedPawn);
    void カスタムイベント_1(class APalCharacter* InCharacter);
    void カスタムイベント_OnDead(FPalDeadInfo DeadInfo);
    void OnInvaderArrived();
    void BindOnInvaderArrivedDelegate(FBindOnInvaderArrivedDelegateEvent Event);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_MonsterAIController_Invader(int32 EntryPoint);
    void OnInvaderArrivedDelegate__DelegateSignature();
}; // Size: 0x5D0

#endif
