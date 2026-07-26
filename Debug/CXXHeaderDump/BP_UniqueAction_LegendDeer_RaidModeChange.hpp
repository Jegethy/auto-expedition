#ifndef UE4SS_SDK_BP_UniqueAction_LegendDeer_RaidModeChange_HPP
#define UE4SS_SDK_BP_UniqueAction_LegendDeer_RaidModeChange_HPP

class UBP_UniqueAction_LegendDeer_RaidModeChange_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    TArray<EPalStatusID> OriginalDisableAddStatus;                                    // 0x0168 (size: 0x10)
    bool Regene;                                                                      // 0x0178 (size: 0x1)
    double CurrentHPRate;                                                             // 0x0180 (size: 0x8)
    TArray<EPalStatusID> IgnoreStatusID;                                              // 0x0188 (size: 0x10)
    TArray<FReserveMontage> Montage List;                                             // 0x0198 (size: 0x10)
    class ABP_UniqueSkillEffect_LegendDeer_ModeChange_Loop_C* LoopEffect;             // 0x01A8 (size: 0x8)
    float ReGeneTime;                                                                 // 0x01B0 (size: 0x4)
    FBP_UniqueAction_LegendDeer_RaidModeChange_COnModeChanged OnModeChanged;          // 0x01B8 (size: 0x10)
    void OnModeChanged();

    void OnNotifyEnd_1A899F084DCD66B6DB02FBBB8B727472(FName NotifyName);
    void OnNotifyBegin_1A899F084DCD66B6DB02FBBB8B727472(FName NotifyName);
    void OnInterrupted_1A899F084DCD66B6DB02FBBB8B727472(FName NotifyName);
    void OnBlendOut_1A899F084DCD66B6DB02FBBB8B727472(FName NotifyName);
    void OnCompleted_1A899F084DCD66B6DB02FBBB8B727472(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ChangeEnd();
    void OnMontageNotify(class UAnimMontage* Montage, FName NotifyName);
    void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
    void ExecuteUbergraph_BP_UniqueAction_LegendDeer_RaidModeChange(int32 EntryPoint);
    void OnModeChanged__DelegateSignature();
}; // Size: 0x1C8

#endif
