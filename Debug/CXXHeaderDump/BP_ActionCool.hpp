#ifndef UE4SS_SDK_BP_ActionCool_HPP
#define UE4SS_SDK_BP_ActionCool_HPP

class UBP_ActionCool_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0190 (size: 0x8)
    class ABP_Prop_Base_C* Prop;                                                      // 0x0198 (size: 0x8)

    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionCool(int32 EntryPoint);
}; // Size: 0x1A0

#endif
