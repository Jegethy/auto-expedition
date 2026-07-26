#ifndef UE4SS_SDK_BP_WantedPolice_PalSpawner_HPP
#define UE4SS_SDK_BP_WantedPolice_PalSpawner_HPP

class ABP_WantedPolice_PalSpawner_C : public APalNPCSpawnerBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0528 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0530 (size: 0x8)
    FName CharacterID;                                                                // 0x0538 (size: 0x8)
    int32 PoliceLevel;                                                                // 0x0540 (size: 0x4)
    double PoliceHate;                                                                // 0x0548 (size: 0x8)
    class UPalIndividualCharacterHandle* DespawnHandle;                               // 0x0550 (size: 0x8)
    TArray<FVector> SpawnLocations;                                                   // 0x0558 (size: 0x10)
    int32 SpawnIndex;                                                                 // 0x0568 (size: 0x4)
    int32 UseIndex;                                                                   // 0x056C (size: 0x4)
    TSubclassOf<class APalAIController> ControllerClass;                              // 0x0570 (size: 0x8)
    TSubclassOf<class UPalAIActionBase> DefaultActionClass;                           // 0x0578 (size: 0x8)
    class UBP_WorldSecurityPoliceSpawner_C* PoliceSpawnerModel;                       // 0x0580 (size: 0x8)
    TArray<class UPalIndividualCharacterHandle*> OwnedHandles;                        // 0x0588 (size: 0x10)

    void CreateGroup();
    void SetPoliceSpawnerModel(class UBP_WorldSecurityPoliceSpawner_C* Model);
    void DespawnDelegateMono(FPalInstanceID ID);
    void Despawn(TArray<class UPalIndividualCharacterHandle*>& DespawnHandle);
    void SpawnDelegate(FPalInstanceID ID);
    void Spawn();
    void OnReleaseWanted();
    void OnDespawnPolices(const TArray<class UPalIndividualCharacterHandle*>& DespawnHandles);
    void OnSpawnPolices(const FPalWorldSecurityWantedPoliceSettingData PoliceData);
    void ExecuteUbergraph_BP_WantedPolice_PalSpawner(int32 EntryPoint);
}; // Size: 0x598

#endif
