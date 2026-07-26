#ifndef UE4SS_SDK_BP_AIAction_Visitor_ReturnSpawnedPoint_HPP
#define UE4SS_SDK_BP_AIAction_Visitor_ReturnSpawnedPoint_HPP

class UBP_AIAction_Visitor_ReturnSpawnedPoint_C : public UBP_AIAction_CanCombatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0178 (size: 0x8)
    FVector Goal;                                                                     // 0x0180 (size: 0x18)

    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void カスタムイベント_0(FPalInstanceID ID);
    void カスタムイベント(class UPalVisualEffectBase* VisualEffect);
    void ExecuteUbergraph_BP_AIAction_Visitor_ReturnSpawnedPoint(int32 EntryPoint);
}; // Size: 0x198

#endif
