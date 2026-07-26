#ifndef UE4SS_SDK_BP_MonsterAIController_YakushimaBoss002_HPP
#define UE4SS_SDK_BP_MonsterAIController_YakushimaBoss002_HPP

class ABP_MonsterAIController_YakushimaBoss002_C : public ABP_MonsterAIController_RaidBoss_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05C0 (size: 0x8)
    class ABP_MonsterAIController_YakushimaBoss002_Hand_C* LeftHand_Controller;       // 0x05C8 (size: 0x8)
    class ABP_MonsterAIController_YakushimaBoss002_Hand_C* RightHand_Controller;      // 0x05D0 (size: 0x8)
    class ABP_MonsterAIController_YakushimaBoss002_Head_C* Head_Controller;           // 0x05D8 (size: 0x8)

    void IsReadyBosses(bool& IsReady);
    void SetHandController(bool bIsLeft, class ABP_MonsterAIController_YakushimaBoss002_Hand_C* Controller);
    void SetHeadController(class ABP_MonsterAIController_YakushimaBoss002_Head_C* Head_Controller);
    void ExecuteUbergraph_BP_MonsterAIController_YakushimaBoss002(int32 EntryPoint);
}; // Size: 0x5E0

#endif
