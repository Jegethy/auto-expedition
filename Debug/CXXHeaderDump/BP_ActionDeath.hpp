#ifndef UE4SS_SDK_BP_ActionDeath_HPP
#define UE4SS_SDK_BP_ActionDeath_HPP

class UBP_ActionDeath_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    double DestoryInterval;                                                           // 0x0168 (size: 0x8)
    FTransform DefaultTransform;                                                      // 0x0170 (size: 0x60)
    FTimerHandle DestoryHandle;                                                       // 0x01D0 (size: 0x8)
    bool DownForceAble;                                                               // 0x01D8 (size: 0x1)
    bool NoEffect;                                                                    // 0x01D9 (size: 0x1)
    FVector preLocation;                                                              // 0x01E0 (size: 0x18)
    FVector Velocity;                                                                 // 0x01F8 (size: 0x18)
    bool EnableRagdoll;                                                               // 0x0210 (size: 0x1)
    FName flagName;                                                                   // 0x0214 (size: 0x8)
    bool NeedReset;                                                                   // 0x021C (size: 0x1)

    void SetFacial();
    void IsRagdollMesh(bool& IsRagdoll);
    void SetDisableMovement(bool isDisable);
    void GetCharacterAnimInstance(class UAnimInstance*& AnimInstance);
    void InWaterFloat();
    void SetLiftUpAble();
    void BlowScale(double& Scale);
    void BlowCharacter();
    void OnLoaded_262CCA3245DB10CE95CE098A425EF51F(class UObject* Loaded);
    void OnNotifyEnd_CDAC9208493E0313A1396493E118EE35(FName NotifyName);
    void OnNotifyBegin_CDAC9208493E0313A1396493E118EE35(FName NotifyName);
    void OnInterrupted_CDAC9208493E0313A1396493E118EE35(FName NotifyName);
    void OnBlendOut_CDAC9208493E0313A1396493E118EE35(FName NotifyName);
    void OnCompleted_CDAC9208493E0313A1396493E118EE35(FName NotifyName);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void ShowEffect();
    void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
    void OnCompleteInitializeParameter(class APalCharacter* InCharacter);
    void ApplyRagdoll();
    void OnStillInWorldTriggered();
    void ResetRagdoll();
    void ExecuteUbergraph_BP_ActionDeath(int32 EntryPoint);
}; // Size: 0x21D

#endif
