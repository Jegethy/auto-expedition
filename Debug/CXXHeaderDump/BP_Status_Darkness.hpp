#ifndef UE4SS_SDK_BP_Status_Darkness_HPP
#define UE4SS_SDK_BP_Status_Darkness_HPP

class UBP_Status_Darkness_C : public UBP_Status_WithVisualEffect_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C8 (size: 0x8)

    void DisableDebugSetting(bool& Disable);
    void OnBeginStatus();
    void OnEndStatus();
    void ExecuteUbergraph_BP_Status_Darkness(int32 EntryPoint);
}; // Size: 0xD0

#endif
