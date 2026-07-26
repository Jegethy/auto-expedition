#ifndef UE4SS_SDK_BP_Action_Fishing_HPP
#define UE4SS_SDK_BP_Action_Fishing_HPP

class UBP_Action_Fishing_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    class UAnimMontage* StartAnimMontage;                                             // 0x0168 (size: 0x8)
    class UAnimMontage* IdleLoopAnimMontage;                                          // 0x0170 (size: 0x8)
    class UAnimMontage* BattleLoopAnimMontage;                                        // 0x0178 (size: 0x8)
    class UAnimMontage* EndAnimMontage;                                               // 0x0180 (size: 0x8)
    class UAnimMontage* SuccessMontage;                                               // 0x0188 (size: 0x8)
    class UAnimMontage* FailedMontage;                                                // 0x0190 (size: 0x8)
    FName flagName;                                                                   // 0x0198 (size: 0x8)
    FTimerHandle DebugStartTimer;                                                     // 0x01A0 (size: 0x8)
    class UBP_PalFishingComponent_C* FishingComponent;                                // 0x01A8 (size: 0x8)
    FShooterSpringCameraParameter CameraOffset_Idle;                                  // 0x01B0 (size: 0x28)
    FShooterSpringCameraParameter CameraOffset_Hit;                                   // 0x01D8 (size: 0x28)
    class ABP_CutsceneMonster_Fishing_C* CutsceneMonsterActor;                        // 0x0200 (size: 0x8)
    FVector preLocation;                                                              // 0x0208 (size: 0x18)
    bool IsLarge;                                                                     // 0x0220 (size: 0x1)
    FPalFishingCutsceneInfo CutsceneInfo;                                             // 0x0228 (size: 0xD8)
    bool IsOnLargePal;                                                                // 0x0300 (size: 0x1)
    bool IsStartCutscene;                                                             // 0x0301 (size: 0x1)
    bool IsFailed;                                                                    // 0x0302 (size: 0x1)
    bool IsJumpCutscenePal;                                                           // 0x0303 (size: 0x1)
    FName LargePalSocketName;                                                         // 0x0304 (size: 0x8)
    bool IsAttachedPlayer;                                                            // 0x030C (size: 0x1)
    double PlayerHalfHeight;                                                          // 0x0310 (size: 0x8)
    double LargeOffsetHeight;                                                         // 0x0318 (size: 0x8)
    class APalCharacter* RidePal;                                                     // 0x0320 (size: 0x8)
    class UBP_Fishing_CaughtJumpModule_C* FishingJumpModule;                          // 0x0328 (size: 0x8)

    void SetupRidePal();
    void NotifyShowFishToWeapon();
    void GetPlayerShowFishMontage(EPalFishingPlayerMotionType MotionType, class UAnimMontage*& Montage);
    void SetVisibleRidePal(bool IsVisible);
    void SetEnableInput(bool IsEnable);
    void UpdateOnLargePal();
    void CheckEndAction();
    void GetFloorLocation(FVector StartLocation, FVector& FloorLocation);
    void SetUseUpperBodyOnly(bool Enable);
    void EndCamera();
    void StartCamera(FShooterSpringCameraParameter CameraParam);
    void NotifyCencelToWeapon();
    void NotifyFinishToWeapon();
    void NotifyStartToWeapon();
    void EndAnim();
    void SetupAnim();
    void SetMoveState_Gravity(bool isDisable);
    void SetMoveState_BlowVelocity(bool isDisable);
    void SetMoveState_Common(bool isDisable);
    void OnNotifyEnd_0F78E6144C4CFC08E0A4CDABC1BB1C19(FName NotifyName);
    void OnNotifyBegin_0F78E6144C4CFC08E0A4CDABC1BB1C19(FName NotifyName);
    void OnInterrupted_0F78E6144C4CFC08E0A4CDABC1BB1C19(FName NotifyName);
    void OnBlendOut_0F78E6144C4CFC08E0A4CDABC1BB1C19(FName NotifyName);
    void OnCompleted_0F78E6144C4CFC08E0A4CDABC1BB1C19(FName NotifyName);
    void OnNotifyEnd_38CE6D8E402C476C91B160991C2234F2(FName NotifyName);
    void OnNotifyBegin_38CE6D8E402C476C91B160991C2234F2(FName NotifyName);
    void OnInterrupted_38CE6D8E402C476C91B160991C2234F2(FName NotifyName);
    void OnBlendOut_38CE6D8E402C476C91B160991C2234F2(FName NotifyName);
    void OnCompleted_38CE6D8E402C476C91B160991C2234F2(FName NotifyName);
    void OnNotifyEnd_054C66DE4779F170772F0797F0502C02(FName NotifyName);
    void OnNotifyBegin_054C66DE4779F170772F0797F0502C02(FName NotifyName);
    void OnInterrupted_054C66DE4779F170772F0797F0502C02(FName NotifyName);
    void OnBlendOut_054C66DE4779F170772F0797F0502C02(FName NotifyName);
    void OnCompleted_054C66DE4779F170772F0797F0502C02(FName NotifyName);
    void OnNotifyEnd_7A5A1C0D4F1D7405BE71ED900E442CAD(FName NotifyName);
    void OnNotifyBegin_7A5A1C0D4F1D7405BE71ED900E442CAD(FName NotifyName);
    void OnInterrupted_7A5A1C0D4F1D7405BE71ED900E442CAD(FName NotifyName);
    void OnBlendOut_7A5A1C0D4F1D7405BE71ED900E442CAD(FName NotifyName);
    void OnCompleted_7A5A1C0D4F1D7405BE71ED900E442CAD(FName NotifyName);
    void OnNotifyEnd_9C7E4CAA493FB9373CC5F8934F7B9601(FName NotifyName);
    void OnNotifyBegin_9C7E4CAA493FB9373CC5F8934F7B9601(FName NotifyName);
    void OnInterrupted_9C7E4CAA493FB9373CC5F8934F7B9601(FName NotifyName);
    void OnBlendOut_9C7E4CAA493FB9373CC5F8934F7B9601(FName NotifyName);
    void OnCompleted_9C7E4CAA493FB9373CC5F8934F7B9601(FName NotifyName);
    void OnNotifyEnd_33DE87064FFEFE680D875DB7E747B11A(FName NotifyName);
    void OnNotifyBegin_33DE87064FFEFE680D875DB7E747B11A(FName NotifyName);
    void OnInterrupted_33DE87064FFEFE680D875DB7E747B11A(FName NotifyName);
    void OnBlendOut_33DE87064FFEFE680D875DB7E747B11A(FName NotifyName);
    void OnCompleted_33DE87064FFEFE680D875DB7E747B11A(FName NotifyName);
    void OnNotifyEnd_A91D8F124AA7027E67F1FD82A5F9D8D4(FName NotifyName);
    void OnNotifyBegin_A91D8F124AA7027E67F1FD82A5F9D8D4(FName NotifyName);
    void OnInterrupted_A91D8F124AA7027E67F1FD82A5F9D8D4(FName NotifyName);
    void OnBlendOut_A91D8F124AA7027E67F1FD82A5F9D8D4(FName NotifyName);
    void OnCompleted_A91D8F124AA7027E67F1FD82A5F9D8D4(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void OnCancelFishing();
    void OnStartCatchBattle();
    void OnEndFishing();
    void OnFailedCatch();
    void OnFinishedShowCutscene();
    void OnStartCutscene(const FPalFishingCutsceneInfo& CutsceneInfo);
    void OnLoadedCutscenePal(const FPalFishingCutsceneInfo& CutsceneInfo);
    void OnShowFish();
    void OnSuccessFight();
    void OnFailedFight();
    void ExecuteUbergraph_BP_Action_Fishing(int32 EntryPoint);
}; // Size: 0x330

#endif
