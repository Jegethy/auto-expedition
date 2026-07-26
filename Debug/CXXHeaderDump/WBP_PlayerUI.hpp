#ifndef UE4SS_SDK_WBP_PlayerUI_HPP
#define UE4SS_SDK_WBP_PlayerUI_HPP

class UWBP_PlayerUI_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Highlight_ConstructionMenu_Loop;                          // 0x0458 (size: 0x8)
    class UWidgetAnimation* Highlight_ConstructionMenu_InOut;                         // 0x0460 (size: 0x8)
    class UWidgetAnimation* Show_ConstructionMenu;                                    // 0x0468 (size: 0x8)
    class UWidgetAnimation* Hide_ConstructionMenu;                                    // 0x0470 (size: 0x8)
    class UWidgetAnimation* HideShow_Aim;                                             // 0x0478 (size: 0x8)
    class UCanvasPanel* CanvasPanel_InBuiderModeHide_01;                              // 0x0480 (size: 0x8)
    class UCanvasPanel* CanvasPanel_InBuilderModeHide_02;                             // 0x0488 (size: 0x8)
    class UCanvasPanel* CanvasPanel_InBuilderModeHide_03;                             // 0x0490 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Root;                                             // 0x0498 (size: 0x8)
    class UCanvasPanel* CanvasPanelConstructionMenu;                                  // 0x04A0 (size: 0x8)
    class UCanvasPanel* CanvasPanl_InBuilderModeHide_04;                              // 0x04A8 (size: 0x8)
    class UCanvasPanel* CanvasPanl_InBuilderModeHide_05;                              // 0x04B0 (size: 0x8)
    class UCanvasPanel* CanvasPanl_InBuilderModeHide_06;                              // 0x04B8 (size: 0x8)
    class UCanvasPanel* CanvasPanl_InBuilderModeHide_07;                              // 0x04C0 (size: 0x8)
    class UOverlay* Overlay_Aim;                                                      // 0x04C8 (size: 0x8)
    class UWBP_BattleEntry_Info_C* WBP_BattleEntry_Info;                              // 0x04D0 (size: 0x8)
    class UWBP_BossBattle_BattleInfo_C* WBP_BossBattle_BattleInfo;                    // 0x04D8 (size: 0x8)
    class UWBP_CommonExpReward_ForDisplay_C* WBP_CommonExpReward_ForDisplay;          // 0x04E0 (size: 0x8)
    class UWBP_Crime_C* WBP_Crime;                                                    // 0x04E8 (size: 0x8)
    class UWBP_DirectAttackOrderCanvas_C* WBP_DirectAttackOrderCanvas;                // 0x04F0 (size: 0x8)
    class UWBP_FishingMain_C* WBP_FishingMain;                                        // 0x04F8 (size: 0x8)
    class UWBP_InGame_Arena_C* WBP_InGame_Arena;                                      // 0x0500 (size: 0x8)
    class UWBP_Ingame_Compass_C* WBP_Ingame_Compass;                                  // 0x0508 (size: 0x8)
    class UWBP_Ingame_Message_C* WBP_Ingame_Message;                                  // 0x0510 (size: 0x8)
    class UWBP_Ingame_PlayerStamina_Circle_C* WBP_Ingame_PlayerStamina_Circle;        // 0x0518 (size: 0x8)
    class UWBP_Ingame_Sleep_C* WBP_Ingame_Sleep;                                      // 0x0520 (size: 0x8)
    class UWBP_IngameDamageVinette_C* WBP_IngameDamageVinette;                        // 0x0528 (size: 0x8)
    class UWBP_IngameFlyEff_C* WBP_IngameFlyEff;                                      // 0x0530 (size: 0x8)
    class UWBP_IngamePlaceName_C* WBP_IngamePlaceName;                                // 0x0538 (size: 0x8)
    class UWBP_IngameSmesTop_C* WBP_IngameSmesTop;                                    // 0x0540 (size: 0x8)
    class UWBP_IngameThermometerEff_C* WBP_IngameThermometerEff;                      // 0x0548 (size: 0x8)
    class UWBP_InvadeWaveFinishProccess_C* WBP_InvadeWaveFinishProccess;              // 0x0550 (size: 0x8)
    class UWBP_JetPackGauge_C* WBP_JetPackGauge;                                      // 0x0558 (size: 0x8)
    class UWBP_Notice_DeathAnnounce_C* WBP_Notice_DeathAnnounce_22;                   // 0x0560 (size: 0x8)
    class UWBP_OtomoLoupe_C* WBP_OtomoLoupe_77;                                       // 0x0568 (size: 0x8)
    class UWBP_PalAim_C* WBP_PalAim;                                                  // 0x0570 (size: 0x8)
    class UWBP_PalInfo_C* WBP_PalInfo;                                                // 0x0578 (size: 0x8)
    class UWBP_PalIngameMenuItem_ChestQuickStackResult_C* WBP_PalIngameMenuItem_ChestQuickStackResult; // 0x0580 (size: 0x8)
    class UWBP_PalIngameMenuItem_GetGroup_C* WBP_PalIngameMenuItem_GetGroup;          // 0x0588 (size: 0x8)
    class UWBP_PalLogWidget_C* WBP_PalLogWidget;                                      // 0x0590 (size: 0x8)
    class UWBP_PalLvExp_List_C* WBP_PalLvExp_List;                                    // 0x0598 (size: 0x8)
    class UWBP_PalNPCHPGaugeCanvas_C* WBP_PalNPCHPGaugeCanvas;                        // 0x05A0 (size: 0x8)
    class UWBP_PalPlayerDebuffNoticeBox_C* WBP_PalPlayerDebuffNoticeBox;              // 0x05A8 (size: 0x8)
    class UWBP_PalSkill_KeyGuide_C* WBP_PalSkill_KeyGuide;                            // 0x05B0 (size: 0x8)
    class UWBP_PartnerSkillInfo_C* WBP_PartnerSkillInfo;                              // 0x05B8 (size: 0x8)
    class UWBP_PlayerSideInfo_Separated_C* WBP_PlayerSideInfo_Separated;              // 0x05C0 (size: 0x8)
    class UWBP_PLLvExp_C* WBP_PLLvExp;                                                // 0x05C8 (size: 0x8)
    class UWBP_Popup_KeyItem_C* WBP_Popup_KeyItem;                                    // 0x05D0 (size: 0x8)
    class UWBP_QuestAndBaseCampInfoCanvas_C* WBP_QuestAndBaseCampInfoCanvas;          // 0x05D8 (size: 0x8)
    class UWBP_QuestTrackingIconCanvas_C* WBP_QuestTrackingIconCanvas;                // 0x05E0 (size: 0x8)
    class UWBP_Reticle_KeyGuide_C* WBP_Reticle_Cancel;                                // 0x05E8 (size: 0x8)
    class UWBP_TutorialMessage_Temp_C* WBP_TutorialMessage_Temp;                      // 0x05F0 (size: 0x8)
    class UWBP_VC_Speaking_C* WBP_VC_Speaking;                                        // 0x05F8 (size: 0x8)
    class UWBP_Warning_LowMemory_C* WBP_Warning_LowMemory;                            // 0x0600 (size: 0x8)
    class UWBP_WeightNotice_C* WBP_WeightNotice;                                      // 0x0608 (size: 0x8)
    double HideUITimer;                                                               // 0x0610 (size: 0x8)
    double HideWeaponInfoTimer;                                                       // 0x0618 (size: 0x8)
    double HideUITime;                                                                // 0x0620 (size: 0x8)
    bool bIsWaitUIHide;                                                               // 0x0628 (size: 0x1)
    bool bIsConflictOld;                                                              // 0x0629 (size: 0x1)
    bool bIsOverHideTimer;                                                            // 0x062A (size: 0x1)
    bool bIsHidePlayerGauge;                                                          // 0x062B (size: 0x1)
    bool bIsHideWeaponInfo;                                                           // 0x062C (size: 0x1)
    bool bIsAiming;                                                                   // 0x062D (size: 0x1)
    double LowHealthPercent;                                                          // 0x0630 (size: 0x8)
    double LastHpPercent;                                                             // 0x0638 (size: 0x8)
    class UPalIndividualCharacterParameter* Player Individual Parameter;              // 0x0640 (size: 0x8)
    bool bIsPlayerHPMax;                                                              // 0x0648 (size: 0x1)
    bool bIsPlayerSPMax;                                                              // 0x0649 (size: 0x1)
    bool bIsPlayerShieldMax;                                                          // 0x064A (size: 0x1)
    bool bIsInitializedWorldMapRenderTarget;                                          // 0x064B (size: 0x1)
    TSoftObjectPtr<UPalIndividualCharacterHandle> LastActivatedOtomoHandle;           // 0x0650 (size: 0x30)
    bool bIsSuspendEffectiveAttackLog;                                                // 0x0680 (size: 0x1)
    FTimerHandle ResumeEffectiveAttackLogTimer;                                       // 0x0688 (size: 0x8)
    FVector2D StaminaGauge_MinPosRate;                                                // 0x0690 (size: 0x10)
    FVector2D StaminaGauge_MaxPosRate;                                                // 0x06A0 (size: 0x10)
    bool bIsRadialMenuOpened;                                                         // 0x06B0 (size: 0x1)
    bool bIsRiding;                                                                   // 0x06B1 (size: 0x1)
    bool bIsRideCharacterSPMax;                                                       // 0x06B2 (size: 0x1)
    EPalBodyTemperatureState CachedTemperatureBodyState;                              // 0x06B3 (size: 0x1)
    double StaminaGaugeRightOffset;                                                   // 0x06B8 (size: 0x8)
    bool bIsBuilding;                                                                 // 0x06C0 (size: 0x1)
    bool bShouldHightConstruction;                                                    // 0x06C1 (size: 0x1)
    int32 CachedLastSphereLoadoutIndex;                                               // 0x06C4 (size: 0x4)
    float CachedPlayerHunger;                                                         // 0x06C8 (size: 0x4)
    FTimerHandle CheckOtomoHungerTimerHandle;                                         // 0x06D0 (size: 0x8)
    FTimerHandle CheckEquipmentDurabilityTimerHandle;                                 // 0x06D8 (size: 0x8)
    class APalCharacter* CurrentLiftingCampPalCharacter;                              // 0x06E0 (size: 0x8)
    bool bIsRidePalAiming;                                                            // 0x06E8 (size: 0x1)
    bool bIsHideAim;                                                                  // 0x06E9 (size: 0x1)
    bool bHideUINotInBattle;                                                          // 0x06EA (size: 0x1)
    TMap<class APalCharacter*, class UWBP_BossWarningLoupe_C*> LoupeCharacterMap;     // 0x06F0 (size: 0x50)
    TArray<class UBP_UIIndividualParameterInitializeWaiter_C*> InitializeWaiters;     // 0x0740 (size: 0x10)
    TMap<class FGuid, class UWBP_AttackWarningLoupe_C*> WarningLoupes;                // 0x0750 (size: 0x50)
    TMap<int32, FF_PalPlayerUIAimVisibleFlagContainer> ReticleVisibleFlagContainer;   // 0x07A0 (size: 0x50)
    int32 AimingReticleVisiblePriority;                                               // 0x07F0 (size: 0x4)
    FName AimingReticleVisibilityFlagKey;                                             // 0x07F4 (size: 0x8)
    int32 RidingReticleVisiblePriority;                                               // 0x07FC (size: 0x4)
    FName RidingReticleVisibilityFlagKey;                                             // 0x0800 (size: 0x8)
    int32 BuildingReticleVisibilityPriority;                                          // 0x0808 (size: 0x4)
    FName BuildingReticleVisibilityFlagKey;                                           // 0x080C (size: 0x8)
    int32 DismantlingReticleVisibilityPriority;                                       // 0x0814 (size: 0x4)
    FName DismantlingReticleVisibilityFlagKey;                                        // 0x0818 (size: 0x8)
    FTimerHandle CheckMagazineTimerHandle;                                            // 0x0820 (size: 0x8)
    FName PaintingReticleVisibilityFlagKey;                                           // 0x0828 (size: 0x8)
    int32 PaintingReticleVisibilityPriority;                                          // 0x0830 (size: 0x4)
    TArray<class UCanvasPanel*> InBuilderModeHideCanvasList;                          // 0x0838 (size: 0x10)
    class UMaterialInstanceDynamic* RemoveMaskMaterialInstance;                       // 0x0848 (size: 0x8)
    FTimerHandle UpdateHiddenLocationFlagTimerHandle;                                 // 0x0850 (size: 0x8)
    bool bInitializedHiddenLocationData;                                              // 0x0858 (size: 0x1)
    FTimerHandle TimerHandle_HideBulletList;                                          // 0x0860 (size: 0x8)
    class UPalWorldSecurityPoliceSpawner* PoliceSpawner;                              // 0x0868 (size: 0x8)
    FTimerHandle TimerHandle_DisplayQuestAndBaseCampCanvas_AfterWanted;               // 0x0870 (size: 0x8)
    bool bIsRidingOld;                                                                // 0x0878 (size: 0x1)
    class UPalJetpackGliderComponent* CachedJetPackComponent;                         // 0x0880 (size: 0x8)
    bool bIsJetPackUsed;                                                              // 0x0888 (size: 0x1)
    FVector2D JetpackGauge_MinPosRate;                                                // 0x0890 (size: 0x10)
    FVector2D JetPackGauge_MaxPosRate;                                                // 0x08A0 (size: 0x10)

    void CREATEDELEGATE_PROXYFUNCTION_0(const FPalInstanceID& CriminalIndividualId, const TArray<FName>& CrimeIds);
    void FinalizeDiscord();
    void OnLocalSpeakingStatusChanged(bool bIsSpeaking);
    void InitializeDiscord();
    void OnRequestCoop();
    void OnChestQuickStackNotified(TArray<FPalStaticItemIdAndNum>& StackedItems);
    void UpdateJetPackFuelCount();
    void UpdateJetPackFuelRate();
    void UpdateJetPackGaugePosition();
    void UpdateJetPackGauge();
    void OnWeaponNotify(EWeaponNotifyType Type);
    void On Invader Wave Timeup(const FPalIncidentBroadcastParameter& Parameter);
    void OnSwimBuffAppliedToPlayerOtomo();
    void Change Ride Flag Internal(bool bNewRideFlag);
    void CheckRiding();
    void OnJetpackFuelRecoveryCompleted();
    void OnEndJetpack();
    void OnStartJetpack();
    void OnPoliceAlertState(bool IsAlerted, bool IsFound, float DiscoveryGaugeNormalized, float DiscoveryGaugeRatePerSec, bool IsWanted);
    void OnNotifyCommonExpReward(const FPalUICommonExpRewardData& RewardData);
    void OnNotifyCommonItemReward(const FPalUICommonItemRewardData& RewardData);
    void OnEndInvade(const FPalIncidentBroadcastParameter& Parameter);
    void OnInvadeDeclaration(const FDateTime& StartRealTime);
    void OnEndInvadeWave(class APalInvaderInfo* SelfInvaderInfo, int32 EndWaveCount);
    void OnStartInvadeWave(class APalInvaderInfo* SelfInvaderInfo, int32 NewWaveCount);
    void OnChangedWantedLevel(int32 WantedLevel);
    void DelaySetupHiddenLocationData();
    void TryInitializeHiddenLocationData();
    void UpdateWorldMapHiddenFlag_Timer();
    void SetVisibleInBuilderModeCanvas(bool bVisible);
    void OnEndPainting(class UPalBuilderComponent* Component);
    void OnStartPaintingMode(class UPalBuilderComponent* Component);
    void CheckWeaponMagazine();
    void OnChangedUISettings(const FPalOptionUISettings& PrevSettings, const FPalOptionUISettings& NewSettings);
    void OnEndDismantling(class UPalBuilderComponent* Dismantling);
    void OnStartDismantling(class UPalBuilderComponent* BuilderComponent);
    void SetReticleVisibility(bool bVisibleFlag, FName FlagKey, int32 FlagPriority);
    void OnChangeReticle(bool bVisible);
    void OnAntiAirMissleWarningUpdate(FVector AttackerLocation, bool IsEnable, FGuid AttackID);
    void CreateBossLoupe(class APalCharacter* TargetCharacter, bool AlwaysDisplay);
    void OnInitializedCharacter(class APalCharacter* TargetCharacter, class UBP_UIIndividualParameterInitializeWaiter_C* selfObject);
    void OnActBossWarningUI(class APalCharacter* TargetCharacter, bool AlwaysDisplay);
    void OnForceRemoveBossUI(class APalCharacter* TargetCharacter, bool AlwaysDisplay);
    void On Force Add Boss UI(class APalCharacter* TargetCharacter, bool AlwaysDisplay);
    void OnExitArena();
    void OnArenaSequnceStart(class UPalArenaSequencer* ArenaSequencer);
    void On Arena Sequence Stage Changed(class UPalArenaSequencer* Sequencer, EPalArenaSequenceType PrevType, EPalArenaSequenceType AfterType);
    void SetIsHideWeaponInfo(bool bHide);
    void CheckWeaponDurability();
    void CheckArmorDurability();
    void OnToggleSleepPlayerBed(bool IsSleep);
    void OnToggleGrapplingCancel(bool CancelEnable);
    void OnChangedWeapon(class APalWeaponBase* Weapon);
    void OnTimer_CheckEquipmentDurability();
    void OnTimer_CheckOtomoHunger();
    void OnUpdateInventoryWeight(float NowWeight);
    void OnUpdateInventoryMaxWeight(float MaxWeight);
    void OnEndBuilding(class UPalBuilderComponent* BuilderComponent);
    void OnStartBuilding(class UPalBuilderComponent* BuilderComponent);
    void OnCapturedPal(const FPalUIPalCaptureInfo& CaptureInfo);
    void OnChangedTemperanture(int32 NextTemperature);
    void OnChangedTemperatureBodyState(EPalBodyTemperatureState BodyState);
    void On Update Ride Character SP(FFixedPoint64 nowSP, FFixedPoint64 nowMaxSP, bool IsOverHeated);
    void OnGetoffOtomo(class AActor* RideActor);
    void OnRideOtomo(class AActor* RideActor);
    void OnChangedRegion(const FName& RegionNameID);
    void OnRadialMenuClosed();
    void OnRadialMenuOpened();
    void UpdateStaminaGaugePosition();
    void PaintWorldMap();
    void InitializeWorldMapUIData();
    void OnResumeEffectiveLog();
    void OnOtomoInflictDamage(FPalDamageResult DamageResult);
    void OnPlayerDamage(FPalDamageResult DamageResult);
    void CheckAutoUIHide(double DeltaTime);
    void CalcCompassRotation();
    void OnActivatedOtomo();
    void OnUpdateOtomoSlot(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle);
    void OnDeactivatedOtomo();
    void On Update Shield Max HP(FFixedPoint64 nowShieldMaxHP);
    void Setup After CreatePlayerIndividualParameter();
    void OnDamagedShield(int32 Damage, bool IsShieldBroken);
    void OnUpdateShieldHP(FFixedPoint64 nowShieldMaxHP, FFixedPoint64 nowShieldHP);
    void OnUpdatePlayerHunger(float Current, float Last);
    void OnUpdatePlayerHP_LowHealthEffect(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void On Change Loadout(EPalPlayerInventoryType inventoryType, int32 Index);
    void On Update Player SP(FFixedPoint64 nowSP, FFixedPoint64 nowMaxSP, bool IsOverHeated);
    void OnUpdatePlayerHp(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void OnChangeOtomo();
    void IsPalGaugeShouldShow(bool& IsShow);
    void IsPlayerWeaponInfoShouldShow(bool& IsShow);
    void Is Player Gauge Should Show(bool& IsShow);
    void ResetHideUITimer();
    void Show UI();
    void Start Hide UITimer();
    void Should Check UIAuto Hide(bool& shouldCheck);
    void Finished_EE570CBA4C1A6B90D4B5E88E8D12910C();
    void Anm_Hide_Loadout();
    void Anm_Show_Loadout(bool AimOnly);
    void Anm_Hide_PlayerGauge();
    void Anm_Show_PlayerGauge();
    void Anm_Toggle_Highlight_Construction();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnSetup();
    void OnStartAim();
    void OnEndAim();
    void OnUpdateOtomoInfo();
    void OnUpdateLoadout(EPalPlayerInventoryType NewParam2, int32 NewParam);
    void OnWeaponTrigger();
    void OnSetup_AfterCreatedPlayer();
    void OnInitialized();
    void OnStartCrime(FGuid CrimeInstance);
    void OnEndCrime(FGuid CrimeInstance);
    void OnEndWanted(class UPalIndividualCharacterHandle* CriminalHandle);
    void ResetStartCrime();
    void Destruct();
    void OnLiftCampPal(class APalCharacter* TargetCharacter);
    void OnEndLiftCampPal();
    void OnStartRidePalAim();
    void OnEndRidePalAim();
    void OnShootBullet();
    void OnReloadBullet();
    void OnUpdateInventory(class UPalItemContainer* Container);
    void OnTimerEvent_CheckMagazine();
    void Construct();
    void CrimeDroneFound();
    void OnReportCrime(FPalInstanceID IndividualId, const TArray<FName>& CrimeIds);
    void SetVisibleQuestAndBaseCampCanvas_AfterWanted();
    void ExecuteUbergraph_WBP_PlayerUI(int32 EntryPoint);
}; // Size: 0x8B0

#endif
