#ifndef UE4SS_SDK_BP_Action_RunOnSpot_Hard_HPP
#define UE4SS_SDK_BP_Action_RunOnSpot_Hard_HPP

class UBP_Action_RunOnSpot_Hard_C : public UBP_Action_RunOnSpot_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0168 (size: 0x8)

    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_RunOnSpot_Hard(int32 EntryPoint);
}; // Size: 0x170

#endif
