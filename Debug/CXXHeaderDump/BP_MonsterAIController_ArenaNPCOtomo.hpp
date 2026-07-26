#ifndef UE4SS_SDK_BP_MonsterAIController_ArenaNPCOtomo_HPP
#define UE4SS_SDK_BP_MonsterAIController_ArenaNPCOtomo_HPP

class ABP_MonsterAIController_ArenaNPCOtomo_C : public ABP_MonsterAIControllerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)
    TSubclassOf<class UPalAIActionBase> CombatAIActionClass;                          // 0x0598 (size: 0x8)

    void ReceivePossess(class APawn* PossessedPawn);
    void OnStartInBattle();
    void ExecuteUbergraph_BP_MonsterAIController_ArenaNPCOtomo(int32 EntryPoint);
}; // Size: 0x5A0

#endif
