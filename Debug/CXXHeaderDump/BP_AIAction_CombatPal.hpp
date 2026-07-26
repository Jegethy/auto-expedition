#ifndef UE4SS_SDK_BP_AIAction_CombatPal_HPP
#define UE4SS_SDK_BP_AIAction_CombatPal_HPP

class UBP_AIAction_CombatPal_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0138 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x0140 (size: 0x8)
    class APalCharacter* SelfActor;                                                   // 0x0148 (size: 0x8)
    double tempDeltaSecond;                                                           // 0x0150 (size: 0x8)
    TSubclassOf<class UPalActionBase> NextActionClass;                                // 0x0158 (size: 0x8)
    bool NextIsWaza;                                                                  // 0x0160 (size: 0x1)
    int32 NextWazaSlotID;                                                             // 0x0164 (size: 0x4)
    class UPalAICombatModule* CombatModule;                                           // 0x0168 (size: 0x8)
    bool ShouldSelectWait;                                                            // 0x0170 (size: 0x1)
    bool NextIsProvocation;                                                           // 0x0171 (size: 0x1)
    bool IsInterrupt;                                                                 // 0x0172 (size: 0x1)
    int32 InterrputSlotID;                                                            // 0x0174 (size: 0x4)
    double cantReachTimer;                                                            // 0x0178 (size: 0x8)
    FVector PrevLocation;                                                             // 0x0180 (size: 0x18)
    double StackTimer;                                                                // 0x0198 (size: 0x8)
    double WarpStackTimer;                                                            // 0x01A0 (size: 0x8)
    FVector WarpStackPrevLocation;                                                    // 0x01A8 (size: 0x18)
    double DeadTimer;                                                                 // 0x01C0 (size: 0x8)
    double ApproachTimer;                                                             // 0x01C8 (size: 0x8)
    double Const_ApproachEndTime;                                                     // 0x01D0 (size: 0x8)
    double NotActionTimer;                                                            // 0x01D8 (size: 0x8)
    double Const_FanShapeDegree;                                                      // 0x01E0 (size: 0x8)
    bool DisableTurn;                                                                 // 0x01E8 (size: 0x1)
    bool TempIgnoreWazaRange;                                                         // 0x01E9 (size: 0x1)
    int32 ProvocationCT;                                                              // 0x01EC (size: 0x4)
    bool IsStartNextActionDelay;                                                      // 0x01F0 (size: 0x1)
    bool IsUnmoveableCharacter;                                                       // 0x01F1 (size: 0x1)
    double UnmoveableProvocationProbability;                                          // 0x01F8 (size: 0x8)
    bool TempIgnoreWazaRange_ForMoveTo;                                               // 0x0200 (size: 0x1)
    double TryMoveAngle;                                                              // 0x0208 (size: 0x8)
    bool TryMoveRight;                                                                // 0x0210 (size: 0x1)
    double AngleUpdateTimer;                                                          // 0x0218 (size: 0x8)
    int32 NextCoolSlot;                                                               // 0x0220 (size: 0x4)
    bool Ray Passed;                                                                  // 0x0224 (size: 0x1)
    bool RangePassed;                                                                 // 0x0225 (size: 0x1)

    void ResetTryMoveAngle();
    void ProcSideMove();
    void UpdateNoActionTimer();
    void RestartWazaCoolOnActionEnd();
    void UpdateTryMoveAngle();
    void CalcTryMoveLocation(FVector TargetLocation, FVector& OutLocation);
    bool HasRoundStepped();
    bool CheckWazaMinRange();
    void CheckWazaMaxRange(bool& InRange, bool& RayPassed);
    void IsTargetOutOfOilrigRange(bool& OutRange);
    void IsTargetOnSea(bool& OnSea);
    void OnPlayAction(class UPalActionBase* action);
    void NextAction_ByApproachFailure();
    void CheckDeadTimer();
    void GetSelfPalBlackBoard(class UBP_PalAIBlackboard_Common_C*& PalBB);
    void WarpToSpawnerPoint();
    void ResetWorpStackTimer(bool SkipAngleReset);
    void Add Warp Stack Timer();
    void AttackNearestMapObject(bool& ReachAble);
    void PlayWazaAction();
    void FindWazaClass(int32 SlotIndex, TSubclassOf<class UPalActionBase>& WazaAction);
    void TargetIsValid(bool& Valid);
    void Get Next Action Slot ID(int32& SlotId);
    void Interrupt Action(int32 SlotId);
    void ChangeCombatStartLocation(bool& Change);
    void PlayWazaDarknessStatus();
    void PlayerCameraCheck(bool& AttackAble);
    void RemoveDamageResponse();
    void AddDamageResponse();
    void DamageResponseForCombatPal(FPalDamageResult DmgResult);
    void MoveToTarget();
    void GetActorActionComponentRef(class UPalActionComponent*& ActionComp);
    void GetStaticParamCompRef(class UPalStaticCharacterParameterComponent*& StaticParamComp);
    void GetSkillSlotRef(class UPalActiveSkillSlot*& SkillSlot);
    void GetControllerRef(class APalAIController*& PalAIController);
    void SetupSkillSlot();
    void ChangeNextAction();
    void TargetChange();
    void ActionStart(class APawn* ControlledPawn);
    void StartNextAction_Event(const class UPalActionComponent* ActionComponent);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionPause(class APawn* ControlledPawn);
    void OnDeadDelegate_Event(FPalDeadInfo DeadInfo);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void OnChildActionFinished(class UPawnAction* action, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ExecuteUbergraph_BP_AIAction_CombatPal(int32 EntryPoint);
}; // Size: 0x226

#endif
