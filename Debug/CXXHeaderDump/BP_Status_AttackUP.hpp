#ifndef UE4SS_SDK_BP_Status_AttackUP_HPP
#define UE4SS_SDK_BP_Status_AttackUP_HPP

class UBP_Status_AttackUP_C : public UBP_Status_ParameterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)

    void OnBeginStatus();
    void OnEndStatus();
    void OnBeginSomeStatus();
    void SetupStatus();
    void ExecuteUbergraph_BP_Status_AttackUP(int32 EntryPoint);
}; // Size: 0xC0

#endif
