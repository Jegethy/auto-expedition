#ifndef UE4SS_SDK_BP_NPCAIController_ArenaNPC_HPP
#define UE4SS_SDK_BP_NPCAIController_ArenaNPC_HPP

class ABP_NPCAIController_ArenaNPC_C : public ABP_NPCAIController_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D8 (size: 0x8)

    void ReceivePossess(class APawn* PossessedPawn);
    void OnStartInBattle();
    void GoBack_Teritory();
    void ExecuteUbergraph_BP_NPCAIController_ArenaNPC(int32 EntryPoint);
}; // Size: 0x5E0

#endif
