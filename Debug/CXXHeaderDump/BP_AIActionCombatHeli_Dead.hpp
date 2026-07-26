#ifndef UE4SS_SDK_BP_AIActionCombatHeli_Dead_HPP
#define UE4SS_SDK_BP_AIActionCombatHeli_Dead_HPP

class UBP_AIActionCombatHeli_Dead_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0138 (size: 0x8)

    void CheckDropOffAbort(class UPalCombatHeliPoliceDropOffComponent* DropOffComponent);
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIActionCombatHeli_Dead(int32 EntryPoint);
}; // Size: 0x140

#endif
