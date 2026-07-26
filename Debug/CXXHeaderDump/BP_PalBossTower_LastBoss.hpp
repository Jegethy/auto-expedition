#ifndef UE4SS_SDK_BP_PalBossTower_LastBoss_HPP
#define UE4SS_SDK_BP_PalBossTower_LastBoss_HPP

class ABP_PalBossTower_LastBoss_C : public ABP_PalBossTowerBase_C
{
    class UPalInteractableSphereComponentNative* WaitInfoTrigger;                     // 0x03A8 (size: 0x8)
    class UPalInteractableSphereComponentNative* EntryCancelTrigger;                  // 0x03B0 (size: 0x8)
    class UPalInteractableSphereComponentNative* InteractableTrigger;                 // 0x03B8 (size: 0x8)

    void GetInteractableTrigger(class UShapeComponent*& InteractableTrigger);
    void GetInteractableInterface(TScriptInterface<class IPalInteractiveObjectComponentInterface>& Interface);
    void GetEntryWaitInfoTrigger(class UShapeComponent*& EntryWaitInfoTrigger);
    void GetEntryCancelTrigger(class UShapeComponent*& EntryCancelTrigger);
}; // Size: 0x3C0

#endif
