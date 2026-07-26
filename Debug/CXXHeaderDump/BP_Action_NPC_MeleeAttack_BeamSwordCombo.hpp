#ifndef UE4SS_SDK_BP_Action_NPC_MeleeAttack_BeamSwordCombo_HPP
#define UE4SS_SDK_BP_Action_NPC_MeleeAttack_BeamSwordCombo_HPP

class UBP_Action_NPC_MeleeAttack_BeamSwordCombo_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    class UAnimMontage* AttackAnime;                                                  // 0x0168 (size: 0x8)

    void OnNotifyEnd_9FDC0D23432EA95FAA7D548694C20C3D(FName NotifyName);
    void OnNotifyBegin_9FDC0D23432EA95FAA7D548694C20C3D(FName NotifyName);
    void OnInterrupted_9FDC0D23432EA95FAA7D548694C20C3D(FName NotifyName);
    void OnBlendOut_9FDC0D23432EA95FAA7D548694C20C3D(FName NotifyName);
    void OnCompleted_9FDC0D23432EA95FAA7D548694C20C3D(FName NotifyName);
    void OnBeginAction();
    void ExecuteUbergraph_BP_Action_NPC_MeleeAttack_BeamSwordCombo(int32 EntryPoint);
}; // Size: 0x170

#endif
