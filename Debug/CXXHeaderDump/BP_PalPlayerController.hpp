#ifndef UE4SS_SDK_BP_PalPlayerController_HPP
#define UE4SS_SDK_BP_PalPlayerController_HPP

class ABP_PalPlayerController_C : public APalPlayerController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1008 (size: 0x8)
    class UBP_PalNightVisionComponent_C* BP_PalNightVisionComponent;                  // 0x1010 (size: 0x8)
    class UPalItemSelectorComponent* LoadoutItemSelector;                             // 0x1018 (size: 0x8)
    class UBP_OtomoPalHolderComponent_C* BP_OtomoPalHolderComponent;                  // 0x1020 (size: 0x8)
    class UBP_AIADamageReaction_C* BP_AIADamageReaction;                              // 0x1028 (size: 0x8)
    class AActor* Original Player;                                                    // 0x1030 (size: 0x8)
    TMap<UPalIndividualCharacterHandle*, int32> HoldOtomoIndividualHandle;            // 0x1038 (size: 0x50)
    TArray<FName> DebugHoldOtomoName;                                                 // 0x1088 (size: 0x10)
    FTimerHandle RegeneTimerHandle;                                                   // 0x1098 (size: 0x8)
    class UPalIndividualCharacterHandle* SupportPalHandle;                            // 0x10A0 (size: 0x8)
    TArray<TSoftObjectPtr<UNiagaraSystem>> AsyncLoadAsset;                            // 0x10A8 (size: 0x10)
    FBP_PalPlayerController_COnIncrementedOtomo OnIncrementedOtomo;                   // 0x10B8 (size: 0x10)
    void OnIncrementedOtomo();
    FBP_PalPlayerController_COnDecrementedOtomo OnDecrementedOtomo;                   // 0x10C8 (size: 0x10)
    void OnDecrementedOtomo();
    double SpectatorSpeedRate;                                                        // 0x10D8 (size: 0x8)
    double MaxSpectatorSpeedRate;                                                     // 0x10E0 (size: 0x8)
    int32 TargetWatchPlayer Index;                                                    // 0x10E8 (size: 0x4)
    bool bSpectatorTracking;                                                          // 0x10EC (size: 0x1)
    double CurrentExposure;                                                           // 0x10F0 (size: 0x8)
    bool bDay;                                                                        // 0x10F8 (size: 0x1)
    double DayCap;                                                                    // 0x1100 (size: 0x8)
    double TargetGate;                                                                // 0x1108 (size: 0x8)
    float TimeOfDay;                                                                  // 0x1110 (size: 0x4)
    double BaseGate;                                                                  // 0x1118 (size: 0x8)
    double DayGate;                                                                   // 0x1120 (size: 0x8)
    double NightGate;                                                                 // 0x1128 (size: 0x8)
    double TransitionWidth;                                                           // 0x1130 (size: 0x8)
    double DungeonGate;                                                               // 0x1138 (size: 0x8)
    double LastUpdateRealTime;                                                        // 0x1140 (size: 0x8)
    double UpdateInterval;                                                            // 0x1148 (size: 0x8)
    double Elapsed;                                                                   // 0x1150 (size: 0x8)
    float LiftMultiplier;                                                             // 0x1158 (size: 0x4)
    class UAnimMontage* CallRidePalAnim;                                              // 0x1160 (size: 0x8)

    void OnWhistleMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
    void TryPlayWhistleMontage();
    void PlayAirDashAction(EPalStepAxisType Axis, FVector2D Direction);
    void GetSpectator(bool& bSpectatorMode);
    void OnRep_SpectatorSpeedRate();
    void ChangeMoveSpeed();
    void OnDamagePlayerToPlayer(FPalDamageResult DamageResult);
    void DecrementSelectOtomo_Internal();
    void IncrementSelectOtomo_Internal();
    void SetupSupportPal(class APawn* PossessPawn);
    void CanRideSupportPal(bool& CanRide);
    void GetOffSupportPal();
    void RideSupportPal();
    void OnCompleteSpawnSupportPal(FPalInstanceID ID);
    void SpawnSupportPal();
    TSubclassOf<class UPalUserWidgetTimerGaugeBase> GetTimerGaugeWidgetClass();
    void CreatedOtomoIndividualHandleCallback(FPalInstanceID ID);
    void CreateOtomoByNameList(TArray<FPalDebugOtomoPalInfo>& OtomoInfo);
    void CreateOtomo(bool IsClientPlayer);
    void PlayStepAction(EPalStepAxisType Axis, FVector2D Direction);
    void InpActEvt_RightControl_K2Node_InputKeyEvent_9(FKey Key);
    void OnLoaded_A49E2184416F26810394CD8D2FEDE763(class UObject* Loaded);
    void OnLoaded_A1A0202B475755BD73ED5998057E907E(class UObject* Loaded);
    void InpActEvt_RightShift_K2Node_InputKeyEvent_8(FKey Key);
    void InpActEvt_LeftShift_K2Node_InputKeyEvent_7(FKey Key);
    void InpActEvt_LeftControl_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_End_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_Left_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_Right_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_PageUp_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_PageDown_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Up_K2Node_InputKeyEvent_0(FKey Key);
    void CreateOtomoByNameListToServer(const TArray<FPalDebugOtomoPalInfo>& OtomoInfo);
    void OnSwitchOtomoSpawnToServer();
    void OnOtomoChangeIncrementToServer();
    void OnOtomoChangeDecrementToServer();
    void InactiveOtomoToServer();
    void StartCoopRequestToServer();
    void EndCoopRequestToServer();
    void SetSlotID_ToServer(int32 ID);
    void ActivateCurrentOtomoNearThePlayer_ToServer();
    void CreateOtomoToServer(bool IsClientServer);
    void Warp Spectator(FVector Move);
    void ChangeMoveRate(double Rate);
    void ResetMoveRate();
    void ChangeTargetPlayer(int32 AddPlayerIndex);
    void NotifyChangeTargetPlayerForClient(FString TargetPlayerName, int32 maxPlayer, int32 SelectPlayer);
    void SwitchTracking();
    void ReceiveTick(float DeltaSeconds);
    void NotifyTracking();
    void ReceiveBeginPlay();
    void ReceivePossess(class APawn* PossessedPawn);
    void DoStep(EPalStepAxisType Axis, FVector2D StepDirection);
    void OnFlyRideTakeOff();
    void OnSwitchOtomoSpawn();
    void OnStartCoopRequest();
    void OnEndCoopRequest();
    void OnOtomoChangeIncrement();
    void OnOtomoChangeDecrement();
    void Regene_CustomEvent();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnSpawnAndRideSupportPal();
    void OnGetOffAndDespawnSupportPal();
    void InactiveOtomo();
    void LoadAndSpawnEffect(TSoftObjectPtr<UNiagaraSystem> EffectPath, FTransform SpawnTransform);
    void SetOtomoSlot(int32 SlotId);
    void ActivateCurrentOtomoNearThePlayer();
    void SetupDamageReaction(class APawn* Pawn);
    void BndEvt__BP_PalPlayerController_BP_OtomoPalHolderComponent_K2Node_ComponentBoundEvent_0_OnCreatedCharacterContainer__DelegateSignature();
    void OnInitializeLocalPlayer_BP();
    void DoAirDash(EPalStepAxisType Axis, FVector2D DashDirection);
    void MeasureBrightness();
    void ExecuteUbergraph_BP_PalPlayerController(int32 EntryPoint);
    void OnDecrementedOtomo__DelegateSignature();
    void OnIncrementedOtomo__DelegateSignature();
}; // Size: 0x1168

#endif
