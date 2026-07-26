#ifndef UE4SS_SDK_BP_AIAction_CombatPal_YakushimaBoss002_Hand_HPP
#define UE4SS_SDK_BP_AIAction_CombatPal_YakushimaBoss002_Hand_HPP

class UBP_AIAction_CombatPal_YakushimaBoss002_Hand_C : public UBP_AIAction_CombatPal_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    int32 WazaRoutineIndex;                                                           // 0x0230 (size: 0x4)
    TArray<EPalWazaID> WazaRoutineList_Left;                                          // 0x0238 (size: 0x10)
    TArray<EPalWazaID> WazaRoutineList_Right;                                         // 0x0248 (size: 0x10)
    bool UseDebugWaza;                                                                // 0x0258 (size: 0x1)
    EPalWazaID DebugWaza;                                                             // 0x025A (size: 0x2)
    FGuid Camp ID;                                                                    // 0x025C (size: 0x10)

    void CheckWazaMaxRange(bool& InRange, bool& RayPassed);
    void PlayWazaAction();
    void GetCombatModuleRaid(class UPalAICombatModule_RaidBoss*& ModuleRaidBoss);
    void ChangeNextAction();
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_CombatPal_YakushimaBoss002_Hand(int32 EntryPoint);
}; // Size: 0x26C

#endif
