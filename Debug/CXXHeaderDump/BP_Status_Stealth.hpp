#ifndef UE4SS_SDK_BP_Status_Stealth_HPP
#define UE4SS_SDK_BP_Status_Stealth_HPP

class UBP_Status_Stealth_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    double Opacity;                                                                   // 0x00B8 (size: 0x8)
    FName flagName;                                                                   // 0x00C0 (size: 0x8)

    void OnBeginStatus();
    void OnEndStatus();
    void ExecuteUbergraph_BP_Status_Stealth(int32 EntryPoint);
}; // Size: 0xC8

#endif
