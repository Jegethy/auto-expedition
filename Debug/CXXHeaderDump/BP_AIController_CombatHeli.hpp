#ifndef UE4SS_SDK_BP_AIController_CombatHeli_HPP
#define UE4SS_SDK_BP_AIController_CombatHeli_HPP

class ABP_AIController_CombatHeli_C : public APalAIController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0568 (size: 0x8)
    FVector SpawnedLocation;                                                          // 0x0570 (size: 0x18)

    void On Dead(FPalDeadInfo DeadInfo);
    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_BP_AIController_CombatHeli(int32 EntryPoint);
}; // Size: 0x588

#endif
