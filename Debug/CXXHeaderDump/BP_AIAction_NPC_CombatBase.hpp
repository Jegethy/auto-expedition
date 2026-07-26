#ifndef UE4SS_SDK_BP_AIAction_NPC_CombatBase_HPP
#define UE4SS_SDK_BP_AIAction_NPC_CombatBase_HPP

class UBP_AIAction_NPC_CombatBase_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0138 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x0140 (size: 0x8)
    class APalCharacter* SelfActor;                                                   // 0x0148 (size: 0x8)
    class UPalAICombatModule* CombatModule;                                           // 0x0150 (size: 0x8)
    FVector SpawnerLocation;                                                          // 0x0158 (size: 0x18)
    double ReturnTerritoryRadius;                                                     // 0x0170 (size: 0x8)
    double tempDeltaTime;                                                             // 0x0178 (size: 0x8)
    class UPalStateMachine* StateMachine;                                             // 0x0180 (size: 0x8)
    bool IsMeleeWeapon;                                                               // 0x0188 (size: 0x1)
    double Const_DownRayDistance;                                                     // 0x0190 (size: 0x8)
    FVector preLocation;                                                              // 0x0198 (size: 0x18)
    double StackTimer;                                                                // 0x01B0 (size: 0x8)
    int32 StackCount;                                                                 // 0x01B8 (size: 0x4)
    double Const_StackTime;                                                           // 0x01C0 (size: 0x8)

    void Check Stack(double InDeltaTime, bool& Stack);
    void RayCheckToGround(FVector& Location);
    void IsTargetOnSea(bool& OnSea);
    void Is Alive Target Actor(bool& Alive);
    void IsEndCurrentState(bool& IsEnd);
    void FindTargetNearPoint(TArray<FVector>& PointList);
    void GetWeaponHandleRef(class UPalNPCAIWeaponHandle*& WeaponHandle);
    void LineTraceTarget(bool& HitToTarget);
    void AddCombatState(TSubclassOf<class UPalStateMachineStateBase_BlueprintBase> Class);
    void GetMovementComponentRef(class UPalCharacterMovementComponent*& Movement);
    void GetBodyActionComponentRef(class UPalActionComponent*& ActionComp);
    void IsNearTarget(double Distance, bool ignoreHeight, bool& Near);
    void TargetChange();
    void MoveToTarget(bool& IsNearTarget);
    void TargetPlayerCameraCheck(bool& AttackAble);
    void DamageResponseForCombat(FPalDamageResult DmgResult);
    void SightCheckAndResponseForCombat(bool& ChangeNextAction);
    void GetLeaderBB(class UBP_PalAIBlackboard_Common_C*& LeaderBB);
    void ChangeReturnMode(bool& ChangeSuccess);
    void GetControllerRef(class ABP_NPCAIController_C*& NPCAICon);
    void TickFinishCheck(bool& ActionFinish);
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void Event_OnDead(FPalDeadInfo DeadInfo);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionAbort(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_NPC_CombatBase(int32 EntryPoint);
}; // Size: 0x1C8

#endif
