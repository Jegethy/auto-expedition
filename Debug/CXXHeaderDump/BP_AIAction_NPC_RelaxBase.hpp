#ifndef UE4SS_SDK_BP_AIAction_NPC_RelaxBase_HPP
#define UE4SS_SDK_BP_AIAction_NPC_RelaxBase_HPP

class UBP_AIAction_NPC_RelaxBase_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0178 (size: 0x8)
    class APalCharacter* SelfActor;                                                   // 0x0180 (size: 0x8)
    FTimerHandle UnequipTimer;                                                        // 0x0188 (size: 0x8)
    FVector DefaultLocation;                                                          // 0x0190 (size: 0x18)
    FVector DefaultForward;                                                           // 0x01A8 (size: 0x18)
    bool IsReturnDefaultLocationAI;                                                   // 0x01C0 (size: 0x1)
    bool IsDefaultLocationMotionPlayMode;                                             // 0x01C1 (size: 0x1)
    class UPalActionBase* DefaultLocationAction;                                      // 0x01C8 (size: 0x8)
    TSubclassOf<class UPalActionBase> DefaultActionClass;                             // 0x01D0 (size: 0x8)
    EPalActionType DefaultActionType;                                                 // 0x01D8 (size: 0x1)
    double tempDeltaTime;                                                             // 0x01E0 (size: 0x8)
    FRotator DefaultRotate;                                                           // 0x01E8 (size: 0x18)
    bool IsDefaultLocationForceSet;                                                   // 0x0200 (size: 0x1)
    bool IsSkipSight;                                                                 // 0x0201 (size: 0x1)
    FTimerHandle SightSkipTimer;                                                      // 0x0208 (size: 0x8)
    class AActor* CurrentTarget;                                                      // 0x0210 (size: 0x8)
    EPalAIResponseType CurrentResponse;                                               // 0x0218 (size: 0x1)
    bool IgnoreTalkAction;                                                            // 0x0219 (size: 0x1)

    void PlayDefaultAction();
    void CancelDefaultAction();
    void SelfIsLeader(bool& IsLeader);
    void SoundEvent(FVector EmitLocation);
    void ActionResume(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void カスタムイベント_0();
    void ActionStart(class APawn* ControlledPawn);
    void ActionAbort(class APawn* ControlledPawn);
    void SetSightSkipFlag();
    void ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void OnSightCheckAsyncCompleted(bool bIncludedPlayer, bool bIncludedAliveNPC, bool bIncludedEdibleDeadNPC, const TArray<class APalCharacter*>& InSightCharacters);
    void ExecuteUbergraph_BP_AIAction_NPC_RelaxBase(int32 EntryPoint);
}; // Size: 0x21A

#endif
