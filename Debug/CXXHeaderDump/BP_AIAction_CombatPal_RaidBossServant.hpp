#ifndef UE4SS_SDK_BP_AIAction_CombatPal_RaidBossServant_HPP
#define UE4SS_SDK_BP_AIAction_CombatPal_RaidBossServant_HPP

class UBP_AIAction_CombatPal_RaidBossServant_C : public UBP_AIAction_CombatPal_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)

    void TargetChange();
    void ChangeCombatStartLocation(bool& Change);
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_CombatPal_RaidBossServant(int32 EntryPoint);
}; // Size: 0x230

#endif
