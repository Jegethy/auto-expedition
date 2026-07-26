#ifndef UE4SS_SDK_BP_ActionIdleInSpa_HPP
#define UE4SS_SDK_BP_ActionIdleInSpa_HPP

class UBP_ActionIdleInSpa_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0190 (size: 0x8)

    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionIdleInSpa(int32 EntryPoint);
}; // Size: 0x198

#endif
