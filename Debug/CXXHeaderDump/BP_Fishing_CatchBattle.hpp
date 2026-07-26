#ifndef UE4SS_SDK_BP_Fishing_CatchBattle_HPP
#define UE4SS_SDK_BP_Fishing_CatchBattle_HPP

class UBP_Fishing_CatchBattle_C : public UPalFishingCatchBattle
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0110 (size: 0x8)
    class UBP_Fishing_CatchBattle_Behavior_C* BehaviorModule;                         // 0x0118 (size: 0x8)
    FPalFishingCatchBattleInfo CatchBattleInfo;                                       // 0x0120 (size: 0x20)
    TMap<class EPalFishBattleBehaviorType, class TSubclassOf<UBP_Fishing_CatchBattle_Behavior_C>> BehaviorMap; // 0x0140 (size: 0x50)

    void Tick(float DeltaTime);
    void OnInitialized(const FPalFishingCatchBattleInfo& Info);
    void ExecuteUbergraph_BP_Fishing_CatchBattle(int32 EntryPoint);
}; // Size: 0x190

#endif
