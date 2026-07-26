#ifndef UE4SS_SDK_BP_Status_RaidBossModeChange_HPP
#define UE4SS_SDK_BP_Status_RaidBossModeChange_HPP

class UBP_Status_RaidBossModeChange_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    double ReGeneTime;                                                                // 0x00B8 (size: 0x8)
    double ReGeneRate;                                                                // 0x00C0 (size: 0x8)
    double Timer;                                                                     // 0x00C8 (size: 0x8)
    TArray<EPalStatusID> IgnoreStatusID;                                              // 0x00D0 (size: 0x10)
    FPalRaidBossSpawnInfo Boss Info;                                                  // 0x00E0 (size: 0x60)

    void FindModeChangeVisualEffectType(EPalElementType Element, EPalVisualEffectID& VisualEffect);
    void FindRaidBossData(FPalRaidBossSpawnInfo& BossInfo);
    void OnBeginStatus();
    void TickStatus(float DeltaTime);
    void OnEndStatus();
    void SetupStatus();
    void CompEvent(class APalCharacter* InCharacter);
    void ExecuteUbergraph_BP_Status_RaidBossModeChange(int32 EntryPoint);
}; // Size: 0x140

#endif
