#ifndef UE4SS_SDK_BP_PalStatus_RecoverHPOnHPThreshold_HPP
#define UE4SS_SDK_BP_PalStatus_RecoverHPOnHPThreshold_HPP

class UBP_PalStatus_RecoverHPOnHPThreshold_C : public UPalStatus_RecoverHPOnHPThreshold
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00D8 (size: 0x8)

    void BP_OnRecoverHPVfxTrigger();
    void EndRecoverEffect();
    void ExecuteUbergraph_BP_PalStatus_RecoverHPOnHPThreshold(int32 EntryPoint);
}; // Size: 0xE0

#endif
