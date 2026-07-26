#ifndef UE4SS_SDK_BP_PalRaidBossComponent_LegendDeer_HPP
#define UE4SS_SDK_BP_PalRaidBossComponent_LegendDeer_HPP

class UBP_PalRaidBossComponent_LegendDeer_C : public UBP_PalRaidBossComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01B0 (size: 0x8)
    class UWBP_BossBattle_Flash_0_C* FlashWidget;                                     // 0x01B8 (size: 0x8)

    void ShouldUseCustomSequenceOnRaidBossFinish(EPalRaidBossBattleFinishType RiadBossFinishType, bool& UseCustomSequence);
    void PlayCustomRaidSequence(EPalRaidBossBattleFinishType RiadBossFinishType, class UWBP_BossBattle_BattleInfo_C* Widget);
    void ReceiveBeginPlay();
    void OnModeChanged();
    void ExecuteUbergraph_BP_PalRaidBossComponent_LegendDeer(int32 EntryPoint);
}; // Size: 0x1C0

#endif
