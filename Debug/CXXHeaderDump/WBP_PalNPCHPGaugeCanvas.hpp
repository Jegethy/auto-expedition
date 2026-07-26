#ifndef UE4SS_SDK_WBP_PalNPCHPGaugeCanvas_HPP
#define UE4SS_SDK_WBP_PalNPCHPGaugeCanvas_HPP

class UWBP_PalNPCHPGaugeCanvas_C : public UPalUINPCHPGaugeCanvasBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0458 (size: 0x8)
    class UCanvasPanel* Canvas_Root;                                                  // 0x0460 (size: 0x8)
    class UWrapBox* WrapBox;                                                          // 0x0468 (size: 0x8)
    TMap<class APalCharacter*, class UWBP_PalNPCHPGauge_C*> DisplayedPalGaugeMap;     // 0x0470 (size: 0x50)
    TMap<class APalCharacter*, class UPalUICharacterHPGaugeBase*> DisplayedBossUGaugeMap; // 0x04C0 (size: 0x50)
    TMap<class APalCharacter*, class UWBP_PlayerHPGauge_C*> DisplayedPlayerGaugeMap;  // 0x0510 (size: 0x50)
    double DisplayGaugeDistance;                                                      // 0x0560 (size: 0x8)
    double HideTimer;                                                                 // 0x0568 (size: 0x8)
    double HideTime;                                                                  // 0x0570 (size: 0x8)
    double DisplayGaugeRange_Sight;                                                   // 0x0578 (size: 0x8)
    bool IsOverHideTime;                                                              // 0x0580 (size: 0x1)
    bool IsConflicted;                                                                // 0x0581 (size: 0x1)
    TArray<class UBP_UIIndividualParameterInitializeWaiter_C*> InitializeWaiters;     // 0x0588 (size: 0x10)
    FTimerHandle UpdateTimerHandle;                                                   // 0x0598 (size: 0x8)
    TArray<class UWidget*> DelayCloseGauges;                                          // 0x05A0 (size: 0x10)
    float DisplayGaugeDistance_SameGuildPlayer;                                       // 0x05B0 (size: 0x4)
    bool CachedEnableTalentCheck;                                                     // 0x05B4 (size: 0x1)
    float OtherOtomoPVPDisplayDistance_Sight;                                         // 0x05B8 (size: 0x4)
    float OtherOtomoPVPDisplayDistance;                                               // 0x05BC (size: 0x4)
    double GaugeInSightDistance;                                                      // 0x05C0 (size: 0x8)
    bool IsPvPMode;                                                                   // 0x05C8 (size: 0x1)
    int32 LastVisibleBossGaugeCount;                                                  // 0x05CC (size: 0x4)

    void CREATEDELEGATE_PROXYFUNCTION_0(const FPalDamageInfo& DamageInfo, class AActor* Defender);
    void Get Sight Display Require Distance(class APalCharacter* TargetCharacter, double& Distance);
    void Add Target Characters HPGauge(TArray<class APalCharacter*>& Characters);
    void Remove Target Character HPGauge(class APalCharacter* TargetCharacter);
    void IsMimicry(class APalCharacter* Character, bool& IsMimicryMode);
    void OnChangedEquipment(class UPalItemSlot* itemSlot, EPalPlayerEquipItemSlotType slotType);
    void CloseDelayGauges(class UWidget* Widget);
    void SetGaugeVisibility(class UWidget* Widget, class AActor* TargetActor, bool DelayClose, bool Close);
    void OnDamagePopup(FPalDamageInfo DamageInfo, class AActor* Actor);
    void Update Visibility Player Gauges();
    void Setup();
    void On End Player(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnEndPlayBossPal(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnEndPlayNormalPal(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void UpdateVisibility_BossGauge();
    void Update Children Timer();
    void Is Sight Display(class APalCharacter* Actor, bool& Return);
    void Is Display Distance(double Distance, class APalCharacter* TargetCharacter, bool& isDisplay);
    void Update Visibility Pal HPGauges();
    void OnBossDead(class APalCharacter* TargetCharacter);
    void OnInitializedCharacter(class APalCharacter* TargetCharacter, class UBP_UIIndividualParameterInitializeWaiter_C* selfObject);
    void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void GetCameraLocationAndForwardVector(FVector& Location, FVector& ForwardVector);
    void IsAiming(bool& IsAiming);
    void On Begin Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Add Player Gauge(class APalCharacter* TargetCharacter);
    void AddNormalPalGauge(class APalCharacter* TargetCharacter);
    void Add Boss Gauge(class APalCharacter* TargetCharacter);
    void UpdateChildren_ForTick(double DeltaTime);
    void IsConflict(bool& IsConflict);
    void Remove Children();
    void Add New Gauge UI(class APalCharacter* TargetCharacter);
    void IsDisplayGaugeByPlayerRotation(class APalCharacter* TargetCharacter, bool& isDisplay);
    void Try Process DIsplay Gauge(class APalCharacter* TargetCharacter);
    double GetDistanceByPlayer(class AActor* TargetActor);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destruct();
    void ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas(int32 EntryPoint);
}; // Size: 0x5D0

#endif
