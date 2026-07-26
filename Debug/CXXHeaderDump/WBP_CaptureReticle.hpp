#ifndef UE4SS_SDK_WBP_CaptureReticle_HPP
#define UE4SS_SDK_WBP_CaptureReticle_HPP

class UWBP_CaptureReticle_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UCanvasPanel* Canvas_Root;                                                  // 0x0458 (size: 0x8)
    class UWBP_PalGetReticle_C* WBP_PalGetReticle;                                    // 0x0460 (size: 0x8)
    class UWBP_Reticle_KeyGuide_C* WBP_Reticle_Cancel;                                // 0x0468 (size: 0x8)
    class APalPlayerController* localController;                                      // 0x0470 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> traceObjectTypeQueryArray;                  // 0x0478 (size: 0x10)
    TEnumAsByte<EPalCaptureReticleSeqence::Type> reticleSeqence;                      // 0x0488 (size: 0x1)
    TSoftObjectPtr<APalMonsterCharacter> NowTargetMonster;                            // 0x0490 (size: 0x30)
    class UPalLoadoutSelectorComponent* LoadoutSelector;                              // 0x04C0 (size: 0x8)
    bool isCaptureItemEquiped;                                                        // 0x04C8 (size: 0x1)
    TSoftObjectPtr<APalWeaponBase> lastEquipedWeapon;                                 // 0x04D0 (size: 0x30)
    TMap<class TSoftObjectPtr<ABP_PalCaptureBodyBase_C>, class UWBP_PalGetReticle_C*> secondStepWidgetMap; // 0x0500 (size: 0x50)
    bool isBonusEnabledWhenLastCheck;                                                 // 0x0550 (size: 0x1)
    bool IsStopReticleUpdate;                                                         // 0x0551 (size: 0x1)
    double ReticleStopTimer;                                                          // 0x0558 (size: 0x8)
    TMap<class TSoftObjectPtr<APalCharacter>, class UWBP_CaptureFailedPercent_C*> FailedCaptureRateWidgetMap; // 0x0560 (size: 0x50)
    TMap<TEnumAsByte<E_PalCaptureSphereBouncedReason::Type>, EPalLogType> BouncedBallLogTypeMap; // 0x05B0 (size: 0x50)

    void ConvertTrueRateArrayToDisplayRateArray(TArray<double>& TrueRate, TArray<double>& OutRate);
    void ConvertTrueRateToDisplayRate(double TrueRate, double& OutRate);
    void Set Display Capture Rate(class APalMonsterCharacter* TargetMonster, class APalWeaponBase* WeaponBase);
    void ShouldReticleDIsplay(bool& ShouldDisplay);
    void DisplayCaptureFailedLog(class UPalIndividualCharacterHandle* targetHandle);
    void OnBouncedBall(TEnumAsByte<E_PalCaptureSphereBouncedReason::Type> reasonType, class UPalIndividualCharacterHandle* targetHandle);
    void OnCaptureBodyEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnFailedPercentWidgetClear(class UWBP_CaptureFailedPercent_C* SelfWidget);
    void UpdateFailedWidgets(double DeltaTime);
    void CalcCaptureSuccessRate(TArray<double>& rateArray, double& successRate);
    void IsBonusEnabled(FVector BaseLocation, class APalMonsterCharacter* targeActor, bool& Enabled);
    void GetAimingDisplayPercent(class APalWeaponBase* captureItemActor, class APalMonsterCharacter* TargetMonster, double& Rate, bool& isSneakBonus);
    void On Shake Ball(class ABP_PalCaptureBodyBase_C* shakedBody);
    void UpdateSecondStepWidgetPosition();
    void OnPassingJudge(int32 PhaseCount, class UPalIndividualCharacterHandle* targetHandle);
    void OnFailedCapture(class UPalIndividualCharacterHandle* targetHandle, TEnumAsByte<EPalSphereCaptureFailedReason::Type> failedReason);
    void OnSuccessedCapture(class UPalIndividualCharacterHandle* targetHandle);
    void OnStartedCapture(class AActor* createdBodyActor, class UPalIndividualCharacterHandle* targetHandle, bool bIsSneakBonus, bool bIsCriticalBonus);
    void OnThrowCaptureWeapon(class AActor* Bullet);
    void RegisterWeaponEvent(class APalWeaponBase* NewWeapon);
    void Unregister Weapon Event();
    void On Change Weapon(class APalWeaponBase* Weapon);
    void SetupAfterPlayerSpawned();
    void ChangeSeqence(TEnumAsByte<EPalCaptureReticleSeqence::Type> newSeqence);
    void FindTargetCharacter(class APalMonsterCharacter*& TargetMonster);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void OnSetup_AfterCreatedPlayer();
    void Destruct();
    void ExecuteUbergraph_WBP_CaptureReticle(int32 EntryPoint);
}; // Size: 0x600

#endif
