#ifndef UE4SS_SDK_BP_MonsterAIController_Wild_HPP
#define UE4SS_SDK_BP_MonsterAIController_Wild_HPP

class ABP_MonsterAIController_Wild_C : public ABP_MonsterAIControllerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)
    class UPalAISensorComponent* PalAISensor;                                         // 0x0598 (size: 0x8)
    FBP_MonsterAIController_Wild_CBattleStartEvent BattleStartEvent;                  // 0x05A0 (size: 0x10)
    void BattleStartEvent(class AActor* StartPalActor);

    void GetMyBB(class UBP_PalAIBlackboard_Common_C*& PalBrackboard);
    void GetLeaderBB(class UBP_PalAIBlackboard_Common_C*& LeaderPalBrackboard);
    void PlayDefaultAction();
    void UnbindSquadLeashEvents(class APalAISquadLeashActor* SquadLeashActor);
    void BindSquadLeashEvents(class APalAISquadLeashActor* SqadLeashActor);
    void On Leashed Squad Leader Changed(class APalAISquadLeashActor* SquadLeashActor, class APalCharacter* OldLeashedLeader, class APalCharacter* NewLeashedLeader);
    void On Squad Member Out Of Leash Range(class APalCharacter* LeashedCharacter, FVector TargetLocation, float TargetDistance);
    void On Character Out Of Leash Range(class APalCharacter* LeashedCharacter, FVector TargetLocation, float TargetDistance);
    void SetupLeash(TEnumAsByte<ELeashType::Type> LeashType, FVector LeashLocation, double LeashInnerRange, double LeashOuterRange);
    void IsSleeping(bool& Sleep);
    void ForceEscaleStartForOutside(class AActor* StartFriend, class AActor* Enemy);
    void SetupSleepTime();
    void ForceBattleStartToTarget(class AActor* TargetActor);
    void PerformanceSetup(class APawn* Pawn);
    void DebugBattleStartInternal(class AActor* Player);
    void ReturnToTerritory();
    void ForceBattleStartForOutside(class AActor* StartPalActor);
    void Set Spawnd Info(FVector SpawnerLoc, double ReturnRadius, double WalkRadius, double ReturnRadiusRate_Combat, TEnumAsByte<ELeashType::Type> LeashType, double LeashRadius);
    void OnDeadDelegate_イベント_0(FPalDeadInfo DeadInfo);
    void ReceivePossess(class APawn* PossessedPawn);
    void カスタムイベント_1(class APalCharacter* InCharacter);
    void GoBack_Teritory();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void DebugBattleStart(class AActor* Player);
    void SetupBySpawner();
    void ExecuteUbergraph_BP_MonsterAIController_Wild(int32 EntryPoint);
    void BattleStartEvent__DelegateSignature(class AActor* StartPalActor);
}; // Size: 0x5B0

#endif
