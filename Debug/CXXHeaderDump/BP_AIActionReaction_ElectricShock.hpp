#ifndef UE4SS_SDK_BP_AIActionReaction_ElectricShock_HPP
#define UE4SS_SDK_BP_AIActionReaction_ElectricShock_HPP

class UBP_AIActionReaction_ElectricShock_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0138 (size: 0x8)
    class UPalActionBase* tempAction;                                                 // 0x0140 (size: 0x8)
    float Duration;                                                                   // 0x0148 (size: 0x4)
    TSubclassOf<class UPalActionBase> actionClass;                                    // 0x0150 (size: 0x8)

    void OnFinishElectricShock();
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIActionReaction_ElectricShock(int32 EntryPoint);
}; // Size: 0x158

#endif
