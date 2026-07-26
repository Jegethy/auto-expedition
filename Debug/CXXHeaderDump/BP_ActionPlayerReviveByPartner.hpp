#ifndef UE4SS_SDK_BP_ActionPlayerReviveByPartner_HPP
#define UE4SS_SDK_BP_ActionPlayerReviveByPartner_HPP

class UBP_ActionPlayerReviveByPartner_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0190 (size: 0x8)
    bool IsEnd;                                                                       // 0x0198 (size: 0x1)
    class UNiagaraSystem* ReviveFX;                                                   // 0x01A0 (size: 0x8)
    TSoftObjectPtr<UNiagaraSystem> ReviveFX_Asset;                                    // 0x01A8 (size: 0x30)
    FName flagName;                                                                   // 0x01D8 (size: 0x8)

    void SetDisableWeaponFlags(bool bDisable);
    void Calc Effect Location(FVector& Location);
    void PlayReviveFX();
    bool IsEndAction();
    void SetDisableCollision(bool isDisable);
    void OnNotifyEnd_028FFD4D48C5FC855EC3F1B36F499E63(FName NotifyName);
    void OnNotifyBegin_028FFD4D48C5FC855EC3F1B36F499E63(FName NotifyName);
    void OnInterrupted_028FFD4D48C5FC855EC3F1B36F499E63(FName NotifyName);
    void OnBlendOut_028FFD4D48C5FC855EC3F1B36F499E63(FName NotifyName);
    void OnCompleted_028FFD4D48C5FC855EC3F1B36F499E63(FName NotifyName);
    void OnLoaded_B720B09A4409DF34615EB585D80C0B10(class UObject* Loaded);
    void OnBeginAction();
    void OnEndAction();
    void OnRevive(class APalPlayerCharacter* Player);
    void ExecuteUbergraph_BP_ActionPlayerReviveByPartner(int32 EntryPoint);
}; // Size: 0x1E0

#endif
