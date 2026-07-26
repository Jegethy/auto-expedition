#ifndef UE4SS_SDK_BP_Action_CapturedCage_HPP
#define UE4SS_SDK_BP_Action_CapturedCage_HPP

class UBP_Action_CapturedCage_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)

    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_CapturedCage(int32 EntryPoint);
}; // Size: 0x168

#endif
