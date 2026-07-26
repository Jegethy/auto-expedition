#ifndef UE4SS_SDK_WBP_PalCharacterSlotBase_HPP
#define UE4SS_SDK_WBP_PalCharacterSlotBase_HPP

class UWBP_PalCharacterSlotBase_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWBP_PalCharacterIconBase_C* myIconWidget;                                  // 0x0458 (size: 0x8)
    class UPalIndividualCharacterSlot* TargetSlot;                                    // 0x0460 (size: 0x8)
    FWBP_PalCharacterSlotBase_COnUpdateSlot OnUpdateSlot;                             // 0x0468 (size: 0x10)
    void OnUpdateSlot(class UPalIndividualCharacterSlot* TargetSlot);
    FWBP_PalCharacterSlotBase_COnSetEmpty OnSetEmpty;                                 // 0x0478 (size: 0x10)
    void OnSetEmpty();
    FWBP_PalCharacterSlotBase_COnSetValidSlot OnSetValidSlot;                         // 0x0488 (size: 0x10)
    void OnSetValidSlot();
    FWBP_PalCharacterSlotBase_COnTargetCharacterUpdateHP OnTargetCharacterUpdateHP;   // 0x0498 (size: 0x10)
    void OnTargetCharacterUpdateHP(int64 nowHP, int64 nowMaxHP);
    FTimerHandle checkTargetConditionTimerHandle;                                     // 0x04A8 (size: 0x8)
    bool lastCombatState;                                                             // 0x04B0 (size: 0x1)
    FWBP_PalCharacterSlotBase_COnNotifyWorkDetail OnNotifyWorkDetail;                 // 0x04B8 (size: 0x10)
    void OnNotifyWorkDetail(bool IsWorking);
    FWBP_PalCharacterSlotBase_COnNotifyBattleModeChanged OnNotifyBattleModeChanged;   // 0x04C8 (size: 0x10)
    void OnNotifyBattleModeChanged(bool IsBattleMode);
    FWBP_PalCharacterSlotBase_COnBeginTargetCharacterSleep OnBeginTargetCharacterSleep; // 0x04D8 (size: 0x10)
    void OnBeginTargetCharacterSleep();
    FWBP_PalCharacterSlotBase_COnEndTargetCharacterSleep OnEndTargetCharacterSleep;   // 0x04E8 (size: 0x10)
    void OnEndTargetCharacterSleep();
    FWBP_PalCharacterSlotBase_COnBeginTargetCharacterEat OnBeginTargetCharacterEat;   // 0x04F8 (size: 0x10)
    void OnBeginTargetCharacterEat();
    FWBP_PalCharacterSlotBase_COnEndTargetCharacterEat OnEndTargetCharacterEat;       // 0x0508 (size: 0x10)
    void OnEndTargetCharacterEat();
    FPalInstanceID SyncId;                                                            // 0x0518 (size: 0x30)
    FWBP_PalCharacterSlotBase_COnSetRarity OnSetRarity;                               // 0x0548 (size: 0x10)
    void OnSetRarity(bool IsBoss, bool IsRare);
    FWBP_PalCharacterSlotBase_COnUpdateReviveTimer OnUpdateReviveTimer;               // 0x0558 (size: 0x10)
    void OnUpdateReviveTimer(double NowTimer, double ReviveSpeedMultiplier);
    FWBP_PalCharacterSlotBase_COnUpdateWorkId OnUpdateWorkId;                         // 0x0568 (size: 0x10)
    void OnUpdateWorkId(FGuid WorkId, bool IsFixedAssign);
    FWBP_PalCharacterSlotBase_COnFavoriteUpdated OnFavoriteUpdated;                   // 0x0578 (size: 0x10)
    void OnFavoriteUpdated(int32 NewIndex);
    bool WaitingSync;                                                                 // 0x0588 (size: 0x1)
    FWBP_PalCharacterSlotBase_COnChangedAssignToExpedition OnChangedAssignToExpedition; // 0x0590 (size: 0x10)
    void OnChangedAssignToExpedition(bool bIsAssigned);
    FWBP_PalCharacterSlotBase_COnAddStatus OnAddStatus;                               // 0x05A0 (size: 0x10)
    void OnAddStatus(class UPalStatusComponent* StatusComponent, EPalStatusID statusID, class UPalStatusBase* StatusBase);
    FWBP_PalCharacterSlotBase_COnRemoveStatus OnRemoveStatus;                         // 0x05B0 (size: 0x10)
    void OnRemoveStatus(class UPalStatusComponent* StatusComponent, EPalStatusID statusID);
    FPalIndividualCharacterSaveParameter TargetSaveParam;                             // 0x05C0 (size: 0x370)
    FWBP_PalCharacterSlotBase_COnUpdateAwakening OnUpdateAwakening;                   // 0x0930 (size: 0x10)
    void OnUpdateAwakening(bool bAwaked);
    class UPalIndividualCharacterParameter* CurrentBoundParameter;                    // 0x0940 (size: 0x8)
    class APalCharacter* CurrentBoundActor;                                           // 0x0948 (size: 0x8)

    void CREATEDELEGATE_PROXYFUNCTION_0(float NowReviveTimer, float ReviveSpeedMultiplier);
    void SetupBySaveParameter(FPalIndividualCharacterSaveParameter SaveParam);
    void OnRemovStatus_Internal(const class UPalStatusComponent* StatusComponent, EPalStatusID statusID);
    void OnAddStatus_Internal(const class UPalStatusComponent* StatusComponent, EPalStatusID statusID, class UPalStatusBase* Status);
    void SetupByCharacterID(FName CharacterID);
    void OnReplicatedParameter(class UPalIndividualCharacterParameter* Parameter);
    void OnChangedAssingToExpedition_Internal();
    void OnUpdateFavorite_Internal(int32 NewIndex);
    void OnUpdateWorkId_Internal(class UPalCharacterParameterComponent* Parameter);
    void GetIndividualParameter(class UPalIndividualCharacterParameter*& Parameter);
    void GetIndividualHandle(class UPalIndividualCharacterHandle*& Handle);
    void GetIndividualSlot(class UPalIndividualCharacterSlot*& Slot);
    void SetupByIndividualId(FPalInstanceID individualParam);
    void On Update Revive Timer Internal(float NowReviveTimer, double ReviveSpeedMultiplier);
    void On Sync Individual Parameter(FPalInstanceID InstanceId);
    void UnbindActorEvent(class UPalIndividualCharacterHandle* Handle);
    void BindActorEvent(class UPalIndividualCharacterHandle* Handle);
    void OnTargetCharacterActionNotify(const class UPalActionBase* action, FName NotifyName);
    void OnTargetBattleModeChanged(bool bIsBattleMode);
    void Unbind Parameter Event(class UPalIndividualCharacterHandle* Handle);
    void Bind Parameter Event(class UPalIndividualCharacterHandle* Handle);
    void CheckTargetCondition();
    void On Update HP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void UnbindEvents();
    void BindEvents();
    void OnUpdateSlot_Internal(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* LastHandle);
    void RegisterCharacterIconWidget(class UWBP_PalCharacterIconBase_C*& IconWidget);
    void Setup(class UPalIndividualCharacterSlot* newTargetSlot);
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalCharacterSlotBase(int32 EntryPoint);
    void OnUpdateAwakening__DelegateSignature(bool bAwaked);
    void OnRemoveStatus__DelegateSignature(class UPalStatusComponent* StatusComponent, EPalStatusID statusID);
    void OnAddStatus__DelegateSignature(class UPalStatusComponent* StatusComponent, EPalStatusID statusID, class UPalStatusBase* StatusBase);
    void OnChangedAssignToExpedition__DelegateSignature(bool bIsAssigned);
    void OnFavoriteUpdated__DelegateSignature(int32 NewIndex);
    void OnUpdateWorkId__DelegateSignature(FGuid WorkId, bool IsFixedAssign);
    void OnUpdateReviveTimer__DelegateSignature(double NowTimer, double ReviveSpeedMultiplier);
    void OnSetRarity__DelegateSignature(bool IsBoss, bool IsRare);
    void OnEndTargetCharacterEat__DelegateSignature();
    void OnBeginTargetCharacterEat__DelegateSignature();
    void OnEndTargetCharacterSleep__DelegateSignature();
    void OnBeginTargetCharacterSleep__DelegateSignature();
    void OnNotifyBattleModeChanged__DelegateSignature(bool IsBattleMode);
    void OnNotifyWorkDetail__DelegateSignature(bool IsWorking);
    void OnTargetCharacterUpdateHP__DelegateSignature(int64 nowHP, int64 nowMaxHP);
    void OnSetValidSlot__DelegateSignature();
    void OnSetEmpty__DelegateSignature();
    void OnUpdateSlot__DelegateSignature(class UPalIndividualCharacterSlot* TargetSlot);
}; // Size: 0x950

#endif
