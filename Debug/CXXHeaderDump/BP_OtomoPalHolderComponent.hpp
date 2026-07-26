#ifndef UE4SS_SDK_BP_OtomoPalHolderComponent_HPP
#define UE4SS_SDK_BP_OtomoPalHolderComponent_HPP

class UBP_OtomoPalHolderComponent_C : public UPalOtomoHolderComponentBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    int32 ActivatedOtomoSlotID;                                                       // 0x02A0 (size: 0x4)
    int32 SelectedOtomoSlotID;                                                        // 0x02A4 (size: 0x4)
    FBP_OtomoPalHolderComponent_COnChangedSelectOtomoIndexEvent OnChangedSelectOtomoIndexEvent; // 0x02A8 (size: 0x10)
    void OnChangedSelectOtomoIndexEvent();
    FBP_OtomoPalHolderComponent_COnActivateOtomo OnActivateOtomo;                     // 0x02B8 (size: 0x10)
    void OnActivateOtomo();
    FBP_OtomoPalHolderComponent_COnUsedActiveSkill OnUsedActiveSkill;                 // 0x02C8 (size: 0x10)
    void OnUsedActiveSkill();
    FBP_OtomoPalHolderComponent_COnInactiveOtomoEvent OnInactiveOtomoEvent;           // 0x02D8 (size: 0x10)
    void OnInactiveOtomoEvent();
    class UPalIndividualCharacterHandle* ActivatedHandle;                             // 0x02E8 (size: 0x8)
    TArray<class APalCharacter*> ReservePalLocationList;                              // 0x02F0 (size: 0x10)
    bool OtomoDespawnable;                                                            // 0x0300 (size: 0x1)
    bool DisableOtomoCollision;                                                       // 0x0301 (size: 0x1)
    int32 NewVar;                                                                     // 0x0304 (size: 0x4)
    bool bSkipSpawnOtomoForPalLoadoutSlotUpdate;                                      // 0x0308 (size: 0x1)

    void ActivatePalByHandle(const class UPalIndividualCharacterHandle* OtomoHandle, const FVector& Location, const FRotator& Rotation, bool bKeepActigvateOtomoId);
    void GetAIClass(TSubclassOf<class AAIController>& Class);
    void InactivateAllOtomo();
    void SetOtomoInvokerDisable(class AActor* Otomo, bool isDisable);
    void Update Reserve Pal Location(double DeltaTime);
    void IncrementActiveOtomoCount(class UPalPlayerRecordData* PlayerRecordData, FName CharacterID);
    void GetNextValidSlotIndex();
    bool IsValidCurrentSelectPalActor();
    class APalCharacter* TryGetCurrentSelectPalActor();
    void SetTrainer(class APalCharacter* Character);
    void RemovePalFromParty(class UPalIndividualCharacterHandle* RemoveHandle);
    void GetOwnerCharacter(class APalCharacter*& Character);
    void FindNearstEnemy(FVector Location, class AActor*& Actor);
    void ActivateCurrentOtomoFromBall(FTransform ballTransform, class AActor* BallHitActor);
    bool ActivateCurrentOtomoNearThePlayer();
    bool ActivateCurrentOtomo(FTransform SpawnTransform);
    int32 GetSpawnedOtomoID();
    void TryFixAssignNearestWorkSelectedOtomo(const class AActor* HitActor);
    void SetSelectOtomoID_Internal(int32 Index);
    void DecrementSelectOtomoID_Internal();
    void IncrementSelectOtomoID_Internal();
    void InactiveActor(class APalCharacter* Actor, bool StayVisible, bool& IsSuccess);
    void InitializeSlot();
    bool IsActivatedSelectOtomo();
    int32 GetMaxOtomoNum();
    int32 GetPreviousOtomoSlotID();
    int32 GetNextOtomoSlotID();
    int32 GetSelectedOtomoID();
    bool IsRidingBySelectSlotID();
    bool IsRidingBySpawnSlotID();
    void CallCancelCommand();
    void CoopCallCommand();
    void Dummy Despawn Callback(FPalInstanceID ID);
    void Try Get Current Active Pal Actor(class APalCharacter*& Otomo);
    void ActiveAndAttackCurrentPal(class AActor* Target);
    void Update Otomo Slot in Local(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle);
    void Update Otomo Slot In Server(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle);
    void Inactivate Otomo By Handle(class UPalIndividualCharacterHandle* IndividualHandle, bool IsDelayAddReserver, bool& IsSuccess);
    void Inactivate Otomo(bool& IsSuccess);
    void ActivateOtomo(int32 SlotId, FTransform StartTransform, bool& IsSuccess);
    void IsRidingByOtomoSlotID(int32 SlotId, bool& IsRiding);
    void Add Otomo Down Log(FPalDeadInfo Actor);
    void FindSlotByIndividualID(FPalInstanceID ID, int32& SlotId);
    void Spawn Character Callback(FPalInstanceID ID);
    void SpawnOtomo(int32 SlotId);
    void ActivateCurrentOtomoFromBall_ToServer(FTransform ballTransform, class AActor* HitActor);
    void SetActivateOtomoID_ToALL(int32 ID);
    void CallOnActivateOtomo_ToALL();
    void CallOnInactivateOtomo_ToALL();
    void SetLocationOtomoForActive_ToAll(class AActor* Otomo, FTransform TF);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void UpdateSlot(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle);
    void Otomo_DeathEvent(FPalDeadInfo DeadInfo);
    void InactivateCurrentOtomo();
    void Setup();
    void Setup_ToServer();
    void UpdateSlotInServer(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle);
    void SpawnOtomoByLoad(int32 SlotIndex);
    void ReceiveTick(float DeltaSeconds);
    void DelayAddOtomoForReserverList(class APalCharacter* Otomo, bool IsDelay);
    void OnOtomoDeath_ToAll(FPalDeadInfo DeadInfo);
    void DIsplayOtomoDeathLog(FPalDeadInfo DeadInfo);
    void ActivateCurrentOtomoFromBallNative(FTransform ballTransform, class AActor* hitTarget);
    void ExecuteUbergraph_BP_OtomoPalHolderComponent(int32 EntryPoint);
    void OnInactiveOtomoEvent__DelegateSignature();
    void OnUsedActiveSkill__DelegateSignature();
    void OnActivateOtomo__DelegateSignature();
    void OnChangedSelectOtomoIndexEvent__DelegateSignature();
}; // Size: 0x309

#endif
