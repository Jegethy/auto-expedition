#ifndef UE4SS_SDK_BP_Action_Coop_Barrier_HPP
#define UE4SS_SDK_BP_Action_Coop_Barrier_HPP

class UBP_Action_Coop_Barrier_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    double BasicHPRate;                                                               // 0x0168 (size: 0x8)
    double BarrierLife;                                                               // 0x0170 (size: 0x8)

    void CrateBarrier();
    void OnBeginAction();
    void OnEndAction();
    void CrateBarrierEnd();
    void ExecuteUbergraph_BP_Action_Coop_Barrier(int32 EntryPoint);
}; // Size: 0x178

#endif
