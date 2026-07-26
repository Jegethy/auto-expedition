#ifndef UE4SS_SDK_BP_PalBossTowerBase_HPP
#define UE4SS_SDK_BP_PalBossTowerBase_HPP

class ABP_PalBossTowerBase_C : public APalBossTower
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UArrowComponent* FrontWarpPoint;                                            // 0x0308 (size: 0x8)
    class UArrowComponent* TopWarpPoint;                                              // 0x0310 (size: 0x8)
    class UArrowComponent* DeadItemDropPoint;                                         // 0x0318 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0320 (size: 0x8)
    class UPalInteractLockSettingComponent* PalInteractLockSetting;                   // 0x0328 (size: 0x8)
    FGuid DialogUId;                                                                  // 0x0330 (size: 0x10)
    FDataTableRowHandle DialogMsgID;                                                  // 0x0340 (size: 0x10)
    FTimerHandle QuestManagerInitializeTimerHandle;                                   // 0x0350 (size: 0x8)
    TMap<class EPalBossType, class FDataTableRowHandle> BossTypeAndQuestIdMap;        // 0x0358 (size: 0x50)

    void OnClosedLockDialog(bool bResult);
    FTransform GetTopWarpPoint();
    FTransform GetFrontWarpPoint();
    FTransform GetDeadItemDropPoint();
    void GetEntryCancelTrigger(class UShapeComponent*& EntryCancelTrigger);
    void SetQuestEffectActive(bool IsActive);
    void OnCompleteQuestLocal(const FName& QuestId);
    void OnOrderedQuestLocal(const FName& QuestId);
    void GetEntryWaitInfoTrigger(class UShapeComponent*& EntryWaitInfoTrigger);
    void GetInteractableTrigger(class UShapeComponent*& InteractableTrigger);
    void GetInteractableInterface(TScriptInterface<class IPalInteractiveObjectComponentInterface>& Interface);
    void UpdateBossBattleState(EPalBossBattleState NewBossBattleState);
    void OpenStartBattleCheckDialog();
    void BP_PalBossTowerBase_AutoGenFunc(bool bResult);
    void On Close Start Battle Check Dialog(bool bResult);
    void ReceiveBeginPlay();
    void OnChangeBossBattleStateBP(EPalBossBattleState NewState);
    void Interact(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    void IntializeQuestManagerEvent();
    void OnCancelTriggerEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnEntryWaitInfoTriggerEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnEntryWaitInfoTriggerBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnInteractableTriggerEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnInteractableTriggerStartOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_PalBossTowerBase(int32 EntryPoint);
}; // Size: 0x3A8

#endif
