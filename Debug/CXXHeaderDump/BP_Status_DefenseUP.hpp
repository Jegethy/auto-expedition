#ifndef UE4SS_SDK_BP_Status_DefenseUP_HPP
#define UE4SS_SDK_BP_Status_DefenseUP_HPP

class UBP_Status_DefenseUP_C : public UBP_Status_ParameterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)

    void OnBeginStatus();
    void OnEndStatus();
    void SetupStatus();
    void OnBeginSomeStatus();
    void ExecuteUbergraph_BP_Status_DefenseUP(int32 EntryPoint);
}; // Size: 0xC0

#endif
