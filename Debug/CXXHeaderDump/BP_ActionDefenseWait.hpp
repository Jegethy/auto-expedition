#ifndef UE4SS_SDK_BP_ActionDefenseWait_HPP
#define UE4SS_SDK_BP_ActionDefenseWait_HPP

class UBP_ActionDefenseWait_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    class UAnimMontage* tempMontage;                                                  // 0x0168 (size: 0x8)
    EPalActionType ActionType;                                                        // 0x0170 (size: 0x1)
    EPalGeneralMontageType MontageType;                                               // 0x0171 (size: 0x1)

    void SetupMontage();
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_ActionDefenseWait(int32 EntryPoint);
}; // Size: 0x172

#endif
