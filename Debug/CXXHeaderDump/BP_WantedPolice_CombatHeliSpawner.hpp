#ifndef UE4SS_SDK_BP_WantedPolice_CombatHeliSpawner_HPP
#define UE4SS_SDK_BP_WantedPolice_CombatHeliSpawner_HPP

class ABP_WantedPolice_CombatHeliSpawner_C : public APalNPCSpawnerBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0528 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0530 (size: 0x8)
    FName CharacterID;                                                                // 0x0538 (size: 0x8)
    int32 PoliceLevel;                                                                // 0x0540 (size: 0x4)
    double PoliceHate;                                                                // 0x0548 (size: 0x8)
    TArray<FVector> SpawnLocations;                                                   // 0x0550 (size: 0x10)
    int32 SpawnIndex;                                                                 // 0x0560 (size: 0x4)
    class UBP_WorldSecurityPoliceSpawner_C* PoliceSpawnerModel;                       // 0x0568 (size: 0x8)
    TArray<class UPalIndividualCharacterHandle*> OwnedHandles;                        // 0x0570 (size: 0x10)
    bool bShouldDropOff;                                                              // 0x0580 (size: 0x1)
    int32 SpawnedHeliCount;                                                           // 0x0584 (size: 0x4)
    int32 TotalHeliNum;                                                               // 0x0588 (size: 0x4)
    int32 TotalDropOffPoliceNum;                                                      // 0x058C (size: 0x4)
    int32 DropOffPoliceLevel;                                                         // 0x0590 (size: 0x4)
    FName DropOffPoliceCharacterID;                                                   // 0x0594 (size: 0x8)

    void Spawn();
    void OnSpawnDelegate(FPalInstanceID ID);
    void Despawn(class UPalIndividualCharacterHandle* Handle);
    void OnDespawnedHandle(FPalInstanceID ID);
    void DespawnPolices(TArray<class UPalIndividualCharacterHandle*>& DespawnHandles);
    void CreateGroup(TArray<FName>& CharacterIDList);
    void SetPoliceSpawnerModel(class UBP_WorldSecurityPoliceSpawner_C* Model);
    void OnSpawnPolices(const FPalWorldSecurityWantedPoliceSettingData PoliceData);
    void OnReleaseWanted();
    void OnDespawnPolices(const TArray<class UPalIndividualCharacterHandle*>& DespawnHandles);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_WantedPolice_CombatHeliSpawner(int32 EntryPoint);
}; // Size: 0x59C

#endif
