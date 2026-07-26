#ifndef UE4SS_SDK_BP_ActionStep_New_Rolling_HPP
#define UE4SS_SDK_BP_ActionStep_New_Rolling_HPP

class UBP_ActionStep_New_Rolling_C : public UBP_ActionStepBase_New_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)

    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionStep_New_Rolling(int32 EntryPoint);
}; // Size: 0x298

#endif
