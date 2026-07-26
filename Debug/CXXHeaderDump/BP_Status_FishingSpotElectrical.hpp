#ifndef UE4SS_SDK_BP_Status_FishingSpotElectrical_HPP
#define UE4SS_SDK_BP_Status_FishingSpotElectrical_HPP

class UBP_Status_FishingSpotElectrical_C : public UBP_Status_WithVisualEffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C8 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x00D0 (size: 0x8)

    void PlayFishingSpotElecShockAction();
    void OnBeginStatus();
    void ExecuteUbergraph_BP_Status_FishingSpotElectrical(int32 EntryPoint);
}; // Size: 0xD8

#endif
