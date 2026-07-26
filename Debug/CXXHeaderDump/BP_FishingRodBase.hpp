#ifndef UE4SS_SDK_BP_FishingRodBase_HPP
#define UE4SS_SDK_BP_FishingRodBase_HPP

class ABP_FishingRodBase_C : public APalWeaponBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0688 (size: 0x8)
    class UCableComponent* Cable;                                                     // 0x0690 (size: 0x8)
    class USkeletalMeshComponent* SK_FishingFloat001;                                 // 0x0698 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh_Rod;                                   // 0x06A0 (size: 0x8)
    class UPalFishingComponent* FishingComponent;                                     // 0x06A8 (size: 0x8)
    bool IsEquip;                                                                     // 0x06B0 (size: 0x1)
    bool IsVisibleReticle;                                                            // 0x06B1 (size: 0x1)
    bool CanFishingFlag;                                                              // 0x06B2 (size: 0x1)
    class ABP_Fishing_Lure_C* ControlFloat;                                           // 0x06B8 (size: 0x8)
    class UPalFishingRodModule* FishingRodModule;                                     // 0x06C0 (size: 0x8)
    FVector PreFloatLocation;                                                         // 0x06C8 (size: 0x18)
    FName RodEndSocketName;                                                           // 0x06E0 (size: 0x8)
    FName RodCableBoneName;                                                           // 0x06E8 (size: 0x8)
    class UAnimMontage* ThrowingMontage;                                              // 0x06F0 (size: 0x8)
    class UAnimMontage* BattleLoopMontage;                                            // 0x06F8 (size: 0x8)
    class UAnimMontage* ShowSmallLoopMontage;                                         // 0x0700 (size: 0x8)
    bool IsLandingFloat;                                                              // 0x0708 (size: 0x1)
    bool IsShotCable;                                                                 // 0x0709 (size: 0x1)
    double ThrowingAlpha;                                                             // 0x0710 (size: 0x8)
    double ThrowingSpeed;                                                             // 0x0718 (size: 0x8)
    double ThrowingTimer;                                                             // 0x0720 (size: 0x8)
    double ThrowingHeight;                                                            // 0x0728 (size: 0x8)
    double ThrowingSink;                                                              // 0x0730 (size: 0x8)
    FVector ThrowStartLocation;                                                       // 0x0738 (size: 0x18)
    FPalFishingRodInitParameter FishingRodParameter;                                  // 0x0750 (size: 0x10)
    class UAnimMontage* BattleLoopMontageAdditive;                                    // 0x0760 (size: 0x8)
    class UAnimMontage* WaitMontage;                                                  // 0x0768 (size: 0x8)
    EPalFishingRodState SalvageRodState;                                              // 0x0770 (size: 0x1)
    bool IsSalvage;                                                                   // 0x0771 (size: 0x1)
    FVector SalvageFloatLocation;                                                     // 0x0778 (size: 0x18)
    class UAnimMontage* IdleMontage;                                                  // 0x0790 (size: 0x8)

    void IsShowReticle(bool& IsShow);
    void CanFishing(bool& CanFishing);
    void SetDisableRodBlendWeight(bool isDisable);
    void GetTargetFishShadowMouthLocation(FVector& Location);
    bool CanDealDamageWeapon();
    FTransform GetLeftHandTransform();
    bool IsUseLeftHandAttach();
    void GetRodMesh(class USkeletalMeshComponent*& RodMesh);
    void CanFishingMovementMode(bool& CanFishing);
    void ResetFloatThrowParam();
    void GetThrowingFloatLocation(double DeltaTime, FVector StartLocation, FVector TargetLocation, FVector& Location);
    void UpdateFloatRotation();
    void UpdateVisibleReticle();
    void UpdateControlFloat(double DeltaTime, EPalFishingRodState RodState, FVector FloatLocation, FVector SocketRodLocation);
    void StopRodAnim();
    void SetVisibleOriginCable(bool IsVisible);
    void OnNotifyEnd_31D5E87748BC91EF8B5EDEB9E89B1526(FName NotifyName);
    void OnNotifyBegin_31D5E87748BC91EF8B5EDEB9E89B1526(FName NotifyName);
    void OnInterrupted_31D5E87748BC91EF8B5EDEB9E89B1526(FName NotifyName);
    void OnBlendOut_31D5E87748BC91EF8B5EDEB9E89B1526(FName NotifyName);
    void OnCompleted_31D5E87748BC91EF8B5EDEB9E89B1526(FName NotifyName);
    void OnNotifyEnd_27BDBBAB47C0F417FA30C2AAFE582134(FName NotifyName);
    void OnNotifyBegin_27BDBBAB47C0F417FA30C2AAFE582134(FName NotifyName);
    void OnInterrupted_27BDBBAB47C0F417FA30C2AAFE582134(FName NotifyName);
    void OnBlendOut_27BDBBAB47C0F417FA30C2AAFE582134(FName NotifyName);
    void OnCompleted_27BDBBAB47C0F417FA30C2AAFE582134(FName NotifyName);
    void OnNotifyEnd_7C0E2E41480FCAC6A0A9A9B76404C255(FName NotifyName);
    void OnNotifyBegin_7C0E2E41480FCAC6A0A9A9B76404C255(FName NotifyName);
    void OnInterrupted_7C0E2E41480FCAC6A0A9A9B76404C255(FName NotifyName);
    void OnBlendOut_7C0E2E41480FCAC6A0A9A9B76404C255(FName NotifyName);
    void OnCompleted_7C0E2E41480FCAC6A0A9A9B76404C255(FName NotifyName);
    void OnNotifyEnd_C1679D56478319DA3570CDA55F1BE8A6(FName NotifyName);
    void OnNotifyBegin_C1679D56478319DA3570CDA55F1BE8A6(FName NotifyName);
    void OnInterrupted_C1679D56478319DA3570CDA55F1BE8A6(FName NotifyName);
    void OnBlendOut_C1679D56478319DA3570CDA55F1BE8A6(FName NotifyName);
    void OnCompleted_C1679D56478319DA3570CDA55F1BE8A6(FName NotifyName);
    void OnNotifyEnd_8975802841C43EE2A1F948ADE4D156AB(FName NotifyName);
    void OnNotifyBegin_8975802841C43EE2A1F948ADE4D156AB(FName NotifyName);
    void OnInterrupted_8975802841C43EE2A1F948ADE4D156AB(FName NotifyName);
    void OnBlendOut_8975802841C43EE2A1F948ADE4D156AB(FName NotifyName);
    void OnCompleted_8975802841C43EE2A1F948ADE4D156AB(FName NotifyName);
    void OnNotifyEnd_000B5A644387C56A731515997A93622F(FName NotifyName);
    void OnNotifyBegin_000B5A644387C56A731515997A93622F(FName NotifyName);
    void OnInterrupted_000B5A644387C56A731515997A93622F(FName NotifyName);
    void OnBlendOut_000B5A644387C56A731515997A93622F(FName NotifyName);
    void OnCompleted_000B5A644387C56A731515997A93622F(FName NotifyName);
    void OnNotifyEnd_5E0720484076569D4BB7A58DD6FDE9EE(FName NotifyName);
    void OnNotifyBegin_5E0720484076569D4BB7A58DD6FDE9EE(FName NotifyName);
    void OnInterrupted_5E0720484076569D4BB7A58DD6FDE9EE(FName NotifyName);
    void OnBlendOut_5E0720484076569D4BB7A58DD6FDE9EE(FName NotifyName);
    void OnCompleted_5E0720484076569D4BB7A58DD6FDE9EE(FName NotifyName);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnAttachWeapon(class AActor* attachActor);
    void OnDetachWeapon(class AActor* detachActor);
    void OnPullTrigger();
    void OnStartAim();
    void OnEndAim();
    void OnFishingActionEnd();
    void OnFishingActionStart();
    void OnFishingActionCancel();
    void OnChangeRodState(EPalFishingRodState RodState);
    void OnSuccessCatch();
    void OnStartShowCutscene(const FPalFishingCutsceneInfo& CutsceneInfo);
    void OnFinishCutscene();
    void OnDecreaseDurability(float DecreaseValue);
    void OnSalvageActionStart(FVector ThrowLocation);
    void OnStartWaitPick();
    void OnSalvageActionEnd();
    void OnSalvageSuccess();
    void OnFishingActionShowFish();
    void OnSuccessFight();
    void OnFailedFight();
    void ExecuteUbergraph_BP_FishingRodBase(int32 EntryPoint);
}; // Size: 0x798

#endif
