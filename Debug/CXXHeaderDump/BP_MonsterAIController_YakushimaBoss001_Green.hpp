#ifndef UE4SS_SDK_BP_MonsterAIController_YakushimaBoss001_Green_HPP
#define UE4SS_SDK_BP_MonsterAIController_YakushimaBoss001_Green_HPP

class ABP_MonsterAIController_YakushimaBoss001_Green_C : public ABP_MonsterAIController_RaidBoss_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05C0 (size: 0x8)
    class ABP_MonsterAIController_YakushimaBoss002_C* ParentController;               // 0x05C8 (size: 0x8)
    bool bIsLeftHand;                                                                 // 0x05D0 (size: 0x1)
    bool ParentDestroyed;                                                             // 0x05D1 (size: 0x1)

    void GetTargetCampID(FGuid& campID);
    void IsLeftHand(bool& IsLeftHand);
    void IsReadyBosses(bool& IsStartBattle);
    void SetParentController(class ABP_MonsterAIController_YakushimaBoss002_C* ParentController);
    void SetParentDestroyed();
    void ExecuteUbergraph_BP_MonsterAIController_YakushimaBoss001_Green(int32 EntryPoint);
}; // Size: 0x5D2

#endif
