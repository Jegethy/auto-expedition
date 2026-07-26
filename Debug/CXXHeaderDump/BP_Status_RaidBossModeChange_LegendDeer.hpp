#ifndef UE4SS_SDK_BP_Status_RaidBossModeChange_LegendDeer_HPP
#define UE4SS_SDK_BP_Status_RaidBossModeChange_LegendDeer_HPP

class UBP_Status_RaidBossModeChange_LegendDeer_C : public UBP_Status_RaidBossModeChange_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0140 (size: 0x8)

    void FindModeChangeVisualEffectType(EPalElementType Element, EPalVisualEffectID& VisualEffect);
    void TickStatus(float DeltaTime);
    void ExecuteUbergraph_BP_Status_RaidBossModeChange_LegendDeer(int32 EntryPoint);
}; // Size: 0x148

#endif
