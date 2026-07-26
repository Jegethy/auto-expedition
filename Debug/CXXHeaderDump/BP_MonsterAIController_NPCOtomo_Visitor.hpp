#ifndef UE4SS_SDK_BP_MonsterAIController_NPCOtomo_Visitor_HPP
#define UE4SS_SDK_BP_MonsterAIController_NPCOtomo_Visitor_HPP

class ABP_MonsterAIController_NPCOtomo_Visitor_C : public ABP_MonsterAIController_NPCOtomo_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05C0 (size: 0x8)
    bool IsReturning;                                                                 // 0x05C8 (size: 0x1)
    bool TrainerInitialized ;                                                         // 0x05C9 (size: 0x1)
    FVector SpawnLocation;                                                            // 0x05D0 (size: 0x18)

    void ReturnCheck();
    void Return Spawned Point(FVector GoalLocation);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_MonsterAIController_NPCOtomo_Visitor(int32 EntryPoint);
}; // Size: 0x5E8

#endif
