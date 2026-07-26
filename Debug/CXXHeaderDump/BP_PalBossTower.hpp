#ifndef UE4SS_SDK_BP_PalBossTower_HPP
#define UE4SS_SDK_BP_PalBossTower_HPP

class ABP_PalBossTower_C : public ABP_PalBossTowerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UBoxComponent* DeadItemDropPlane;                                           // 0x03B0 (size: 0x8)
    class UStaticMeshComponent* SM_Tower;                                             // 0x03B8 (size: 0x8)
    class UNiagaraComponent* Niagara_QuestGlowEffect;                                 // 0x03C0 (size: 0x8)
    class UBoxComponent* EntryWaitInfoTrigger;                                        // 0x03C8 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x03D0 (size: 0x8)
    class USphereComponent* EntryCancel_Trigger;                                      // 0x03D8 (size: 0x8)
    class USphereComponent* InsidePlayerCheck_Trigger;                                // 0x03E0 (size: 0x8)
    class UStaticMeshComponent* SM_TowerSphere_tower_sphere_geo;                      // 0x03E8 (size: 0x8)
    class UStaticMeshComponent* SM_TowerSphere_tower_sphereCube_geo;                  // 0x03F0 (size: 0x8)
    TMap<class UMaterialInterface*, class UTexture*> TextureMap;                      // 0x03F8 (size: 0x50)
    class UMaterialInterface* CachedMaterial;                                         // 0x0448 (size: 0x8)
    bool Debug;                                                                       // 0x0450 (size: 0x1)

    void GetInteractableTrigger(class UShapeComponent*& InteractableTrigger);
    void GetInteractableInterface(TScriptInterface<class IPalInteractiveObjectComponentInterface>& Interface);
    void GetEntryWaitInfoTrigger(class UShapeComponent*& EntryWaitInfoTrigger);
    void GetEntryCancelTrigger(class UShapeComponent*& EntryCancelTrigger);
    void ReceiveTick(float DeltaSeconds);
    void OnChangeLocalBossDefeatStateBP(bool bDefeated);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PalBossTower(int32 EntryPoint);
}; // Size: 0x451

#endif
