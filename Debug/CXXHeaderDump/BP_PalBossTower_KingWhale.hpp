#ifndef UE4SS_SDK_BP_PalBossTower_KingWhale_HPP
#define UE4SS_SDK_BP_PalBossTower_KingWhale_HPP

class ABP_PalBossTower_KingWhale_C : public ABP_PalBossTowerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UPalInteractableSphereComponentNative* WaitInfoTrigger;                     // 0x03B0 (size: 0x8)
    class UPalInteractableSphereComponentNative* EntryCancelTrigger;                  // 0x03B8 (size: 0x8)
    class UPalInteractableSphereComponentNative* InteractableTrigger;                 // 0x03C0 (size: 0x8)

    void ProgressQuest(UClass* ConditionQuestBlock);
    void OnClosedLockDialog(bool bResult);
    void GetInteractableTrigger(class UShapeComponent*& InteractableTrigger);
    void GetInteractableInterface(TScriptInterface<class IPalInteractiveObjectComponentInterface>& Interface);
    void GetEntryWaitInfoTrigger(class UShapeComponent*& EntryWaitInfoTrigger);
    void GetEntryCancelTrigger(class UShapeComponent*& EntryCancelTrigger);
    void Interact(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    void ExecuteUbergraph_BP_PalBossTower_KingWhale(int32 EntryPoint);
}; // Size: 0x3C8

#endif
