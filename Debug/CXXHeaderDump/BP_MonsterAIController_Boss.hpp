#ifndef UE4SS_SDK_BP_MonsterAIController_Boss_HPP
#define UE4SS_SDK_BP_MonsterAIController_Boss_HPP

class ABP_MonsterAIController_Boss_C : public ABP_MonsterAIControllerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)
    class UPalAISensorComponent* PalAISensor;                                         // 0x0598 (size: 0x8)
    FPalStageInstanceId StageInstanceId;                                              // 0x05A0 (size: 0x14)
    bool IsBattleStartInitialized;                                                    // 0x05B4 (size: 0x1)
    TArray<class APalPlayerCharacter*> BattlePlayer;                                  // 0x05B8 (size: 0x10)
    TSubclassOf<class UPalAIActionBase> EncountAIAction;                              // 0x05C8 (size: 0x8)

    void GetMyBB(class UBP_PalAIBlackboard_Common_C*& PalBrackboard);
    void GetLeaderBB(class UBP_PalAIBlackboard_Common_C*& LeaderPalBrackboard);
    void RetargetPlayer();
    void Force Battle Start To Target Boss(class APalPlayerCharacter* Player, TArray<class APalPlayerCharacter*>& AllPlayer);
    void ReceivePossess(class APawn* PossessedPawn);
    void カスタムイベント_1(class APalCharacter* InCharacter);
    void ExecuteUbergraph_BP_MonsterAIController_Boss(int32 EntryPoint);
}; // Size: 0x5D0

#endif
