#ifndef UE4SS_SDK_BP_MonsterAIController_YakushimaBoss002_Hand_HPP
#define UE4SS_SDK_BP_MonsterAIController_YakushimaBoss002_Hand_HPP

class ABP_MonsterAIController_YakushimaBoss002_Hand_C : public ABP_MonsterAIController_RaidBoss_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05C0 (size: 0x8)
    class ABP_MonsterAIController_YakushimaBoss002_C* ParentController;               // 0x05C8 (size: 0x8)
    bool bIsLeftHand;                                                                 // 0x05D0 (size: 0x1)

    void GetTargetCampID(FGuid& campID);
    void IsLeftHand(bool& IsLeftHand);
    void IsReadyBosses(bool& IsStartBattle);
    void SetParentController(class ABP_MonsterAIController_YakushimaBoss002_C* ParentController);
    void SetHandSide(bool IsLeftHand);
    void ExecuteUbergraph_BP_MonsterAIController_YakushimaBoss002_Hand(int32 EntryPoint);
}; // Size: 0x5D1

#endif
