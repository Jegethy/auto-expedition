#ifndef UE4SS_SDK_BP_AIAction_MimicryEncounter_HPP
#define UE4SS_SDK_BP_AIAction_MimicryEncounter_HPP

class UBP_AIAction_MimicryEncounter_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0138 (size: 0x8)
    int32 IsStun;                                                                     // 0x0140 (size: 0x4)

    void ActionStart(class APawn* ControlledPawn);
    void OnEscapeActionEnd();
    void OnBattleEncountActionEnd();
    void ExecuteUbergraph_BP_AIAction_MimicryEncounter(int32 EntryPoint);
}; // Size: 0x144

#endif
