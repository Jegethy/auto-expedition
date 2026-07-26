#ifndef UE4SS_SDK_BP_Status_ApplyFreeze_Resist_HPP
#define UE4SS_SDK_BP_Status_ApplyFreeze_Resist_HPP

class UBP_Status_ApplyFreeze_Resist_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    double Time;                                                                      // 0x00B8 (size: 0x8)

    void OnBeginStatus();
    void カスタムイベント();
    void ExecuteUbergraph_BP_Status_ApplyFreeze_Resist(int32 EntryPoint);
}; // Size: 0xC0

#endif
