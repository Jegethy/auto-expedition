#ifndef UE4SS_SDK_BP_AIAction_RaidBossSummonChant_HPP
#define UE4SS_SDK_BP_AIAction_RaidBossSummonChant_HPP

class UBP_AIAction_RaidBossSummonChant_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0138 (size: 0x8)
    double Const_ActionTime;                                                          // 0x0140 (size: 0x8)
    class UPalActionBase* SummonAction;                                               // 0x0148 (size: 0x8)
    int32 MeteorNum;                                                                  // 0x0150 (size: 0x4)
    FGuid campID;                                                                     // 0x0154 (size: 0x10)
    FVector CampLocation;                                                             // 0x0168 (size: 0x18)

    void CalcSpawnTransform(int32 Index, int32 MaxNum, FTransform& SpawnTF);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_RaidBossSummonChant(int32 EntryPoint);
}; // Size: 0x180

#endif
