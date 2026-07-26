#ifndef UE4SS_SDK_BP_FishingSpotPalSpawner_HPP
#define UE4SS_SDK_BP_FishingSpotPalSpawner_HPP

class ABP_FishingSpotPalSpawner_C : public APalNPCSpawnerBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0528 (size: 0x8)
    class UStaticMeshComponent* Debug_Mesh;                                           // 0x0530 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0538 (size: 0x8)
    TArray<class UPalIndividualCharacterHandle*> IndividualHandleList;                // 0x0540 (size: 0x10)
    double SpawnRadius;                                                               // 0x0550 (size: 0x8)
    bool IsWorldLoadComplete;                                                         // 0x0558 (size: 0x1)
    bool IsSpawnRequested;                                                            // 0x0559 (size: 0x1)
    double DespawnPlusDistance;                                                       // 0x0560 (size: 0x8)
    double ReturnTerritoryRadius;                                                     // 0x0568 (size: 0x8)
    double WildLifeWalkingAreaRadius;                                                 // 0x0570 (size: 0x8)
    double ReturnRadiusRate_Combat;                                                   // 0x0578 (size: 0x8)
    TEnumAsByte<ELeashType::Type> Leash Type;                                         // 0x0580 (size: 0x1)
    double WanderingRadius;                                                           // 0x0588 (size: 0x8)

    void SetMuteki(class APalCharacter* Pal, bool IsMuteki);
    void ExistAliveCharacter(bool& Exist);
    void BlueprintTick_Spawning(float DeltaTime);
    void BlueprintTick_Despawning(float DeltaTime);
    void DespawnDelegate(FPalInstanceID ID);
    void Despawn();
    void CheckWorldLoadCompleted();
    void SpawnAllPal();
    void OnDestroyedCharacter(class AActor* DestroyedActor);
    void SetLocationIgnoreRaycast(class AActor* PalActor);
    void FindIndividualHandle(FPalInstanceID ID, class UPalIndividualCharacterHandle*& Handle);
    void Spawn Delegate(FPalInstanceID ID);
    void Spawn(FName CharacterID, int32 Level, FVector Location);
    void RequestSpawn();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnCreateActor(class UPalIndividualCharacterHandle* Handle);
    void ExecuteUbergraph_BP_FishingSpotPalSpawner(int32 EntryPoint);
}; // Size: 0x590

#endif
