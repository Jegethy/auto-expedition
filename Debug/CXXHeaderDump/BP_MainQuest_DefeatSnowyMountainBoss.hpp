#ifndef UE4SS_SDK_BP_MainQuest_DefeatSnowyMountainBoss_HPP
#define UE4SS_SDK_BP_MainQuest_DefeatSnowyMountainBoss_HPP

class UBP_MainQuest_DefeatSnowyMountainBoss_C : public UBP_PalQuestDataBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)

    void TakeAdditionalReward();
    void ExecuteUbergraph_BP_MainQuest_DefeatSnowyMountainBoss(int32 EntryPoint);
}; // Size: 0x240

#endif
