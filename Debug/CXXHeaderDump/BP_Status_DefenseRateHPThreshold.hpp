#ifndef UE4SS_SDK_BP_Status_DefenseRateHPThreshold_HPP
#define UE4SS_SDK_BP_Status_DefenseRateHPThreshold_HPP

class UBP_Status_DefenseRateHPThreshold_C : public UPalStatus_HPThresholdBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00D0 (size: 0x8)

    void BP_OnHPThresholdVfxOn();
    void BP_OnHPThresholdVfxOff();
    void ExecuteUbergraph_BP_Status_DefenseRateHPThreshold(int32 EntryPoint);
}; // Size: 0xD8

#endif
