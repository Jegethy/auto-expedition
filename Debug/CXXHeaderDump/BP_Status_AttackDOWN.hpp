#ifndef UE4SS_SDK_BP_Status_AttackDOWN_HPP
#define UE4SS_SDK_BP_Status_AttackDOWN_HPP

class UBP_Status_AttackDOWN_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)

    void OnBeginStatus();
    void OnEndStatus();
    void OnBeginSomeStatus();
    void SetupStatus();
    void ExecuteUbergraph_BP_Status_AttackDOWN(int32 EntryPoint);
}; // Size: 0xB8

#endif
