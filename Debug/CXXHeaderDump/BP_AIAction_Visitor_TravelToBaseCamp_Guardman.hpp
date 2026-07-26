#ifndef UE4SS_SDK_BP_AIAction_Visitor_TravelToBaseCamp_Guardman_HPP
#define UE4SS_SDK_BP_AIAction_Visitor_TravelToBaseCamp_Guardman_HPP

class UBP_AIAction_Visitor_TravelToBaseCamp_Guardman_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0178 (size: 0x8)
    FVector BaseCampLocation;                                                         // 0x0180 (size: 0x18)
    FBP_AIAction_Visitor_TravelToBaseCamp_Guardman_COnArrivedTargetPoint OnArrivedTargetPoint; // 0x0198 (size: 0x10)
    void OnArrivedTargetPoint();
    FVector PrevLocation;                                                             // 0x01A8 (size: 0x18)
    double StuckElapsedTime;                                                          // 0x01C0 (size: 0x8)
    FBP_AIAction_Visitor_TravelToBaseCamp_Guardman_COnStuck OnStuck;                  // 0x01C8 (size: 0x10)
    void OnStuck();
    bool IsStuck;                                                                     // 0x01D8 (size: 0x1)
    class UPalVisitorFormationMoveModule* FormationMoveModule;                        // 0x01E0 (size: 0x8)
    class APalCharacter* VisitorLeader;                                               // 0x01E8 (size: 0x8)

    void IsVisitorLeaderTalking(bool& IsTalking);
    void Tick Move to Base Camp(class AActor* ControlledPawn, float DeltaTime);
    void SoundEvent(FVector EmitLocation);
    void Sight Check and Response(EPalAIResponseType Current, bool OverrideIsDamage, bool& ChangeNextAction);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionResume(class APawn* ControlledPawn);
    void OnLeaderArrived();
    void ExecuteUbergraph_BP_AIAction_Visitor_TravelToBaseCamp_Guardman(int32 EntryPoint);
    void OnStuck__DelegateSignature();
    void OnArrivedTargetPoint__DelegateSignature();
}; // Size: 0x1F0

#endif
