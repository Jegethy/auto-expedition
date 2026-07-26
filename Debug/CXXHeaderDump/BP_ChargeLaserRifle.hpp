#ifndef UE4SS_SDK_BP_ChargeLaserRifle_HPP
#define UE4SS_SDK_BP_ChargeLaserRifle_HPP

class ABP_ChargeLaserRifle_C : public APalWeaponBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0688 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0690 (size: 0x8)
    class UNiagaraComponent* ChargeEffect;                                            // 0x0698 (size: 0x8)
    class USkeletalMeshComponent* WeaponMesh;                                         // 0x06A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x06A8 (size: 0x8)
    bool IsPull;                                                                      // 0x06B0 (size: 0x1)
    double ChargeValue;                                                               // 0x06B8 (size: 0x8)
    double Const_IncrementSpeed;                                                      // 0x06C0 (size: 0x8)
    double Const_DecrementSpeed;                                                      // 0x06C8 (size: 0x8)
    double tempDeltaTime;                                                             // 0x06D0 (size: 0x8)
    FBP_ChargeLaserRifle_COnChangedChargeValue OnChangedChargeValue;                  // 0x06D8 (size: 0x10)
    void OnChangedChargeValue(double CurretnChargeValue);
    double ReloadSpeedPlayRate;                                                       // 0x06E8 (size: 0x8)

    void GetCurrentChargeValue(double& ChargeValue);
    FTransform GetLeftHandTransform();
    bool IsUseLeftHandAttach();
    void OnRestartReload();
    void CanShoot(bool& can);
    void GetTargetLocation(FVector& targetPosition);
    void GetMuzzleTransform(FTransform& TF);
    void ShootBullet();
    void ChangeChargeValue();
    void OnNotifyEnd_7D3D1A57488DAA75B92021BFFA4E3435(FName NotifyName);
    void OnNotifyBegin_7D3D1A57488DAA75B92021BFFA4E3435(FName NotifyName);
    void OnInterrupted_7D3D1A57488DAA75B92021BFFA4E3435(FName NotifyName);
    void OnBlendOut_7D3D1A57488DAA75B92021BFFA4E3435(FName NotifyName);
    void OnCompleted_7D3D1A57488DAA75B92021BFFA4E3435(FName NotifyName);
    void OnNotifyEnd_6868AA2F41E676FCD1C891B7E8A7B79A(FName NotifyName);
    void OnNotifyBegin_6868AA2F41E676FCD1C891B7E8A7B79A(FName NotifyName);
    void OnInterrupted_6868AA2F41E676FCD1C891B7E8A7B79A(FName NotifyName);
    void OnBlendOut_6868AA2F41E676FCD1C891B7E8A7B79A(FName NotifyName);
    void OnCompleted_6868AA2F41E676FCD1C891B7E8A7B79A(FName NotifyName);
    void OnNotifyEnd_F04017F8494C2F37C78E51B48EBD2A1C(FName NotifyName);
    void OnNotifyBegin_F04017F8494C2F37C78E51B48EBD2A1C(FName NotifyName);
    void OnInterrupted_F04017F8494C2F37C78E51B48EBD2A1C(FName NotifyName);
    void OnBlendOut_F04017F8494C2F37C78E51B48EBD2A1C(FName NotifyName);
    void OnCompleted_F04017F8494C2F37C78E51B48EBD2A1C(FName NotifyName);
    void OnNotifyEnd_B8C41D4B4A5B4B1CCDEF6198D3783FEF(FName NotifyName);
    void OnNotifyBegin_B8C41D4B4A5B4B1CCDEF6198D3783FEF(FName NotifyName);
    void OnInterrupted_B8C41D4B4A5B4B1CCDEF6198D3783FEF(FName NotifyName);
    void OnBlendOut_B8C41D4B4A5B4B1CCDEF6198D3783FEF(FName NotifyName);
    void OnCompleted_B8C41D4B4A5B4B1CCDEF6198D3783FEF(FName NotifyName);
    void OnNotifyEnd_1A67CE1042B43EF42A4334AFA2181CEE(FName NotifyName);
    void OnNotifyBegin_1A67CE1042B43EF42A4334AFA2181CEE(FName NotifyName);
    void OnInterrupted_1A67CE1042B43EF42A4334AFA2181CEE(FName NotifyName);
    void OnBlendOut_1A67CE1042B43EF42A4334AFA2181CEE(FName NotifyName);
    void OnCompleted_1A67CE1042B43EF42A4334AFA2181CEE(FName NotifyName);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnPullTrigger();
    void OnReleaseTrigger(bool bCanShootOnRelease);
    void OnWeaponNotify(EWeaponNotifyType Type);
    void OnReloadStart(float InReloadSpeedPlayRate);
    void OnAttachWeapon(class AActor* attachActor);
    void ExecuteUbergraph_BP_ChargeLaserRifle(int32 EntryPoint);
    void OnChangedChargeValue__DelegateSignature(double CurretnChargeValue);
}; // Size: 0x6F0

#endif
