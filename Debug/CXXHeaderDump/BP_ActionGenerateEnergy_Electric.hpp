#ifndef UE4SS_SDK_BP_ActionGenerateEnergy_Electric_HPP
#define UE4SS_SDK_BP_ActionGenerateEnergy_Electric_HPP

class UBP_ActionGenerateEnergy_Electric_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    class UNiagaraComponent* SpawnedEffect;                                           // 0x0168 (size: 0x8)
    class UPalStaticCharacterParameterComponent* Static Character Parameter;          // 0x0170 (size: 0x8)
    class UPalAnimInstance* Anim Instance;                                            // 0x0178 (size: 0x8)
    TArray<FReserveMontage> PlayMontageList;                                          // 0x0180 (size: 0x10)
    double FXDelay Time;                                                              // 0x0190 (size: 0x8)
    double Play List Whole Length;                                                    // 0x0198 (size: 0x8)

    void AddMontageToPlayList(const TArray<FReserveMontage>& TargetArray, class UAnimMontage* Montage, double& PlayLength);
    void CreatePlayMontageList();
    void StopMotangeAll();
    class UAnimMontage* GetFarSkillActionLoopMontage();
    class UAnimMontage* GetFarSkillStartLoopMontage();
    void OnNotifyEnd_79E9FB6645A76A339C6A37B3860D17C1(FName NotifyName);
    void OnNotifyBegin_79E9FB6645A76A339C6A37B3860D17C1(FName NotifyName);
    void OnInterrupted_79E9FB6645A76A339C6A37B3860D17C1(FName NotifyName);
    void OnBlendOut_79E9FB6645A76A339C6A37B3860D17C1(FName NotifyName);
    void OnCompleted_79E9FB6645A76A339C6A37B3860D17C1(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void PlayActionMontage();
    void ExecuteUbergraph_BP_ActionGenerateEnergy_Electric(int32 EntryPoint);
}; // Size: 0x1A0

#endif
