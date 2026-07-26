#ifndef UE4SS_SDK_BP_Status_TeleportStealth_HPP
#define UE4SS_SDK_BP_Status_TeleportStealth_HPP

class UBP_Status_TeleportStealth_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    FName flagName;                                                                   // 0x00B8 (size: 0x8)

    void OnBeginStatus();
    void OnEndStatus();
    void ExecuteUbergraph_BP_Status_TeleportStealth(int32 EntryPoint);
}; // Size: 0xC0

#endif
