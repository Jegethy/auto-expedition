#ifndef UE4SS_SDK_BP_AIAction_HumanStun_HPP
#define UE4SS_SDK_BP_AIAction_HumanStun_HPP

class UBP_AIAction_HumanStun_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0138 (size: 0x8)

    void ActionStart(class APawn* ControlledPawn);
    void OnStunEnd();
    void ExecuteUbergraph_BP_AIAction_HumanStun(int32 EntryPoint);
}; // Size: 0x140

#endif
