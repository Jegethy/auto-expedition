#ifndef UE4SS_SDK_BP_Status_AttackRateHPThreshold_HPP
#define UE4SS_SDK_BP_Status_AttackRateHPThreshold_HPP

class UBP_Status_AttackRateHPThreshold_C : public UPalStatus_HPThresholdBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00D0 (size: 0x8)

    void BP_OnHPThresholdVfxOff();
    void BP_OnHPThresholdVfxOn();
    void ExecuteUbergraph_BP_Status_AttackRateHPThreshold(int32 EntryPoint);
}; // Size: 0xD8

#endif
