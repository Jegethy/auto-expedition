#ifndef UE4SS_SDK_BP_WantedPolice_SpawnerRouter_HPP
#define UE4SS_SDK_BP_WantedPolice_SpawnerRouter_HPP

class ABP_WantedPolice_SpawnerRouter_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    class UBP_WorldSecurityPoliceSpawner_C* PoliceSpawnerModel;                       // 0x02A0 (size: 0x8)
    class ABP_WantedPolice_NPCSpawner_C* NPCSpawner;                                  // 0x02A8 (size: 0x8)
    class ABP_WantedPolice_PalSpawner_C* PalSpawner;                                  // 0x02B0 (size: 0x8)
    class ABP_WantedPolice_CombatHeliSpawner_C* HeliSpawner;                          // 0x02B8 (size: 0x8)

    void SpawnSpawnerActor();
    void ReceiveBeginPlay();
    void OnSpawnPolices(const FPalWorldSecurityWantedPoliceSettingData PoliceData);
    void OnDespawnPolices(const TArray<class UPalIndividualCharacterHandle*>& DespawnHandles);
    void OnReleaseWanted();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_WantedPolice_SpawnerRouter(int32 EntryPoint);
}; // Size: 0x2C0

#endif
