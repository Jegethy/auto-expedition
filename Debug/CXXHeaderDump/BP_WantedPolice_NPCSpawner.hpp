#ifndef UE4SS_SDK_BP_WantedPolice_NPCSpawner_HPP
#define UE4SS_SDK_BP_WantedPolice_NPCSpawner_HPP

class ABP_WantedPolice_NPCSpawner_C : public ABP_MonoNPCSpawner_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0608 (size: 0x8)
    FName CharacterID;                                                                // 0x0610 (size: 0x8)
    int32 PoliceLevel;                                                                // 0x0618 (size: 0x4)
    double PoliceHate;                                                                // 0x0620 (size: 0x8)
    class UPalIndividualCharacterHandle* DespawnHandle;                               // 0x0628 (size: 0x8)
    class UBP_WorldSecurityPoliceSpawner_C* PoliceSpawnerModel;                       // 0x0630 (size: 0x8)
    TArray<FVector> SpawnLocations;                                                   // 0x0638 (size: 0x10)
    int32 SpawnIndex;                                                                 // 0x0648 (size: 0x4)
    TArray<class UPalIndividualCharacterHandle*> OwnedHandles;                        // 0x0650 (size: 0x10)
    bool bDeferredMode;                                                               // 0x0660 (size: 0x1)
    int32 DeferredSpawnCount;                                                         // 0x0664 (size: 0x4)
    TArray<class UPalIndividualCharacterHandle*> NotAdjustToFloorHandles;             // 0x0668 (size: 0x10)

    void SpawnInternal(FVector SpawnLocation, bool AdjustToFloor);
    void CreateGroup(TArray<FName>& CharacterIDList);
    void SetPoliceSpawnerModel(class UBP_WorldSecurityPoliceSpawner_C* Model);
    void DespawnPolices(TArray<class UPalIndividualCharacterHandle*>& DespawnHandles);
    void SpawnDelegate(FPalInstanceID ID);
    void Despawn();
    void Spawn();
    void OnReleaseWanted();
    void OnDespawnPolices(const TArray<class UPalIndividualCharacterHandle*>& DespawnHandles);
    void OnSpawnPolices(const FPalWorldSecurityWantedPoliceSettingData PoliceData);
    void ReceiveBeginPlay();
    void OnHeliRequestSpawn(FVector Location);
    void OnHeliDropOffFallback(int32 Count);
    void ExecuteUbergraph_BP_WantedPolice_NPCSpawner(int32 EntryPoint);
}; // Size: 0x678

#endif
