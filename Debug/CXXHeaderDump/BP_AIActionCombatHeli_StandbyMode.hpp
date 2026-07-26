#ifndef UE4SS_SDK_BP_AIActionCombatHeli_StandbyMode_HPP
#define UE4SS_SDK_BP_AIActionCombatHeli_StandbyMode_HPP

class UBP_AIActionCombatHeli_StandbyMode_C : public UBP_AIActionCombatHeliBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0168 (size: 0x8)

    void MoveToSpawnedPoint(double DeltaTime);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIActionCombatHeli_StandbyMode(int32 EntryPoint);
}; // Size: 0x170

#endif
