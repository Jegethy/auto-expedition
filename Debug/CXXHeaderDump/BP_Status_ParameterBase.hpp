#ifndef UE4SS_SDK_BP_Status_ParameterBase_HPP
#define UE4SS_SDK_BP_Status_ParameterBase_HPP

class UBP_Status_ParameterBase_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)

    void OnBeginStatus();
    void OnChangeActiveSelf(bool bIsActive);
    void OnEndStatus();
    void ExecuteUbergraph_BP_Status_ParameterBase(int32 EntryPoint);
}; // Size: 0xB8

#endif
