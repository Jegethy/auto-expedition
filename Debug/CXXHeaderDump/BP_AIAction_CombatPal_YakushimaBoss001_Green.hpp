#ifndef UE4SS_SDK_BP_AIAction_CombatPal_YakushimaBoss001_Green_HPP
#define UE4SS_SDK_BP_AIAction_CombatPal_YakushimaBoss001_Green_HPP

class UBP_AIAction_CombatPal_YakushimaBoss001_Green_C : public UBP_AIAction_CombatPal_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    int32 WazaRoutineIndex;                                                           // 0x0230 (size: 0x4)
    TArray<EPalWazaID> WazaRoutineList;                                               // 0x0238 (size: 0x10)
    bool UseDebugWaza;                                                                // 0x0248 (size: 0x1)
    EPalWazaID DebugWaza;                                                             // 0x024A (size: 0x2)
    FGuid Camp ID;                                                                    // 0x024C (size: 0x10)

    void CheckWazaMaxRange(bool& InRange, bool& RayPassed);
    void PlayWazaAction();
    void GetCombatModuleRaid(class UPalAICombatModule_RaidBoss*& ModuleRaidBoss);
    void ChangeNextAction();
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_CombatPal_YakushimaBoss001_Green(int32 EntryPoint);
}; // Size: 0x25C

#endif
