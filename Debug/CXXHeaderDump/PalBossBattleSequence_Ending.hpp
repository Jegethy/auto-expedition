#ifndef UE4SS_SDK_PalBossBattleSequence_Ending_HPP
#define UE4SS_SDK_PalBossBattleSequence_Ending_HPP

class UPalBossBattleSequence_Ending_C : public UPalBossBattleSequenceBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0040 (size: 0x8)
    class UPalBossBattleSequencer* Sequencer;                                         // 0x0048 (size: 0x8)
    bool bObtainedOneTimeReward;                                                      // 0x0050 (size: 0x1)
    FPalUICommonItemRewardData OneTimeRewardDisplayData;                              // 0x0058 (size: 0x18)
    FName Flag Name;                                                                  // 0x0070 (size: 0x8)

    void Gift();
    void OnBeginSequence();
    void カスタムイベント(bool bIsSkipped);
    void ExecuteUbergraph_PalBossBattleSequence_Ending(int32 EntryPoint);
}; // Size: 0x78

#endif
