#ifndef UE4SS_SDK_BP_Status_LowGravity_HPP
#define UE4SS_SDK_BP_Status_LowGravity_HPP

class UBP_Status_LowGravity_C : public UPalStatus_LowGravity
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C8 (size: 0x8)
    EPalVisualEffectID Visual Effect ID;                                              // 0x00D0 (size: 0x1)

    void OnBeginStatus();
    void OnEndStatus();
    void BP_OnLowGravityRefreshed(bool InHasPassiveSource, bool InHasPollenSource);
    void BP_OnLowGravityVfxOff(bool InHasPassiveSource, bool InHasPollenSource);
    void TickStatus(float DeltaTime);
    void BP_OnLowGravityVfxOn(bool InHasPassiveSource, bool InHasPollenSource);
    void OnBeginSomeStatus();
    void ExecuteUbergraph_BP_Status_LowGravity(int32 EntryPoint);
}; // Size: 0xD1

#endif
