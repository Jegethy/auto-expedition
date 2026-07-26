#ifndef UE4SS_SDK_BP_AIAction_Visitor_WaitInBaseCamp_Guardman_HPP
#define UE4SS_SDK_BP_AIAction_Visitor_WaitInBaseCamp_Guardman_HPP

class UBP_AIAction_Visitor_WaitInBaseCamp_Guardman_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0178 (size: 0x8)
    FVector BaseCampLocation;                                                         // 0x0180 (size: 0x18)
    FVector PrevLocation;                                                             // 0x0198 (size: 0x18)
    class UPalVisitorFormationMoveModule* FormationMoveModule;                        // 0x01B0 (size: 0x8)
    class APalCharacter* VisitorLeader;                                               // 0x01B8 (size: 0x8)

    void IsVisitorLeaderTalking(bool& IsTalking);
    void Tick Move to Base Camp(class AActor* ControlledPawn, float DeltaTime);
    void SoundEvent(FVector EmitLocation);
    void Fun_Damage_AIResponse(FPalDamageResult DamageResult);
    void Sight Check and Response(EPalAIResponseType Current, bool OverrideIsDamage, bool& ChangeNextAction);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionResume(class APawn* ControlledPawn);
    void OnLeaderArrived();
    void ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp_Guardman(int32 EntryPoint);
}; // Size: 0x1C0

#endif
