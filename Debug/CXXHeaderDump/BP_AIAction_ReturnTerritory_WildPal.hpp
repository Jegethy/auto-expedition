#ifndef UE4SS_SDK_BP_AIAction_ReturnTerritory_WildPal_HPP
#define UE4SS_SDK_BP_AIAction_ReturnTerritory_WildPal_HPP

class UBP_AIAction_ReturnTerritory_WildPal_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0178 (size: 0x8)
    FVector SpawnedPosition;                                                          // 0x0180 (size: 0x18)
    double StackTimer;                                                                // 0x0198 (size: 0x8)

    void GetBlackboard(class UBP_PalAIBlackboard_Common_C*& AsBP Pal AIBlackboard Common);
    void GetControllerRef(class APalAIController*& PalAIController);
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_ReturnTerritory_WildPal(int32 EntryPoint);
}; // Size: 0x1A0

#endif
