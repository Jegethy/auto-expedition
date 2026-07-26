#ifndef UE4SS_SDK_BP_MonsterAIController_YakushimaBoss002_Head_HPP
#define UE4SS_SDK_BP_MonsterAIController_YakushimaBoss002_Head_HPP

class ABP_MonsterAIController_YakushimaBoss002_Head_C : public ABP_MonsterAIController_RaidBoss_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05C0 (size: 0x8)
    class ABP_MonsterAIController_YakushimaBoss002_C* ParentController;               // 0x05C8 (size: 0x8)

    void GetTargetCampID(FGuid& campID);
    void IsReadyBosses(bool& IsStartBattle);
    void SetParentController(class ABP_MonsterAIController_YakushimaBoss002_C* ParentController);
    void ExecuteUbergraph_BP_MonsterAIController_YakushimaBoss002_Head(int32 EntryPoint);
}; // Size: 0x5D0

#endif
