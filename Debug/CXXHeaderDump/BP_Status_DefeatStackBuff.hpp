#ifndef UE4SS_SDK_BP_Status_DefeatStackBuff_HPP
#define UE4SS_SDK_BP_Status_DefeatStackBuff_HPP

class UBP_Status_DefeatStackBuff_C : public UPalStatus_DefeatStackBuff
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0100 (size: 0x8)

    void BP_OnStackBuffActivated();
    void BP_OnStackBuffDeactivated();
    void ExecuteUbergraph_BP_Status_DefeatStackBuff(int32 EntryPoint);
}; // Size: 0x108

#endif
