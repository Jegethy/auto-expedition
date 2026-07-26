#ifndef UE4SS_SDK_BP_PalRaidBossComponent_YakushimaBoss002_HPP
#define UE4SS_SDK_BP_PalRaidBossComponent_YakushimaBoss002_HPP

class UBP_PalRaidBossComponent_YakushimaBoss002_C : public UBP_PalRaidBossComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01B0 (size: 0x8)
    class UWBP_Ingame_YakushimaBoss_Flash_C* FlashWidget;                             // 0x01B8 (size: 0x8)

    void ShouldUseCustomSequenceOnRaidBossFinish(EPalRaidBossBattleFinishType RiadBossFinishType, bool& UseCustomSequence);
    void PlayCustomRaidSequence(EPalRaidBossBattleFinishType RiadBossFinishType, class UWBP_BossBattle_BattleInfo_C* Widget);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PalRaidBossComponent_YakushimaBoss002(int32 EntryPoint);
}; // Size: 0x1C0

#endif
