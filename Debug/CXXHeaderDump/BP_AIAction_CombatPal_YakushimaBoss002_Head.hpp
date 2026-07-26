#ifndef UE4SS_SDK_BP_AIAction_CombatPal_YakushimaBoss002_Head_HPP
#define UE4SS_SDK_BP_AIAction_CombatPal_YakushimaBoss002_Head_HPP

class UBP_AIAction_CombatPal_YakushimaBoss002_Head_C : public UBP_AIAction_CombatPal_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    FGuid Camp ID;                                                                    // 0x0230 (size: 0x10)

    void CheckWazaMaxRange(bool& InRange, bool& RayPassed);
    void GetCombatModuleRaid(class UPalAICombatModule_RaidBoss*& ModuleRaidBoss);
    void ChangeNextAction();
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_CombatPal_YakushimaBoss002_Head(int32 EntryPoint);
}; // Size: 0x240

#endif
