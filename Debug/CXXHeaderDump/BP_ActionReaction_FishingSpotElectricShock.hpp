#ifndef UE4SS_SDK_BP_ActionReaction_FishingSpotElectricShock_HPP
#define UE4SS_SDK_BP_ActionReaction_FishingSpotElectricShock_HPP

class UBP_ActionReaction_FishingSpotElectricShock_C : public UBP_ActionReaction_ElectricShock_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01D8 (size: 0x8)
    float OldBuoyancy;                                                                // 0x01E0 (size: 0x4)
    float OldInWaterRate;                                                             // 0x01E4 (size: 0x4)
    bool IsResetBuoyancy;                                                             // 0x01E8 (size: 0x1)
    double BuoyancyResetTimer;                                                        // 0x01F0 (size: 0x8)
    double OverrideBuoyancy;                                                          // 0x01F8 (size: 0x8)
    double OverrideInWaterRate;                                                       // 0x0200 (size: 0x8)

    void FindOverrideData(bool& IsFound, double& Buoyancy, double& InWaterRate);
    void OnWakeup();
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_ActionReaction_FishingSpotElectricShock(int32 EntryPoint);
}; // Size: 0x208

#endif
