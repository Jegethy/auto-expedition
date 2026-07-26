#ifndef UE4SS_SDK_BP_AIAction_Visitor_ReturnSpawnedPoint_Guardman_HPP
#define UE4SS_SDK_BP_AIAction_Visitor_ReturnSpawnedPoint_Guardman_HPP

class UBP_AIAction_Visitor_ReturnSpawnedPoint_Guardman_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0178 (size: 0x8)
    FVector Goal;                                                                     // 0x0180 (size: 0x18)
    class UPalVisitorFormationMoveModule* FormationMoveModule;                        // 0x0198 (size: 0x8)

    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void カスタムイベント_0(FPalInstanceID ID);
    void カスタムイベント(class UPalVisualEffectBase* VisualEffect);
    void ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint_Guardman(int32 EntryPoint);
}; // Size: 0x1A0

#endif
