#ifndef UE4SS_SDK_BP_VisualEffect_RecoverHPOnHPThreshold_HPP
#define UE4SS_SDK_BP_VisualEffect_RecoverHPOnHPThreshold_HPP

class UBP_VisualEffect_RecoverHPOnHPThreshold_C : public UBP_VisualEffect_BuffBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0100 (size: 0x8)

    void OnBeginVisualEffect();
    void ExecuteUbergraph_BP_VisualEffect_RecoverHPOnHPThreshold(int32 EntryPoint);
}; // Size: 0x108

#endif
