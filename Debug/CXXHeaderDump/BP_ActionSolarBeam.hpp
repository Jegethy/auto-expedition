#ifndef UE4SS_SDK_BP_ActionSolarBeam_HPP
#define UE4SS_SDK_BP_ActionSolarBeam_HPP

class UBP_ActionSolarBeam_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)

    void OnBreakAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionSolarBeam(int32 EntryPoint);
}; // Size: 0x2F0

#endif
