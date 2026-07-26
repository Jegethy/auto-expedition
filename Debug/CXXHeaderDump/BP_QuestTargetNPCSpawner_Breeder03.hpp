#ifndef UE4SS_SDK_BP_QuestTargetNPCSpawner_Breeder03_HPP
#define UE4SS_SDK_BP_QuestTargetNPCSpawner_Breeder03_HPP

class ABP_QuestTargetNPCSpawner_Breeder03_C : public APalNPCSpawnerBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0528 (size: 0x8)
    class USphereComponent* SpawnCollision;                                           // 0x0530 (size: 0x8)
    class UStaticMeshComponent* Debug_Mesh;                                           // 0x0538 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0540 (size: 0x8)
    FPalDataTableRowName_PalHumanData HumanName;                                      // 0x0548 (size: 0x8)
    bool Spawned;                                                                     // 0x0550 (size: 0x1)
    FPalDataTableRowName_NPCUniqueData UniqueName;                                    // 0x0554 (size: 0x8)
    FPalDataTableRowName_PalMonsterData OtomoName;                                    // 0x055C (size: 0x8)
    int32 Level;                                                                      // 0x0564 (size: 0x4)
    FName CharaName;                                                                  // 0x0568 (size: 0x8)
    class UPalIndividualCharacterHandle* SpawnedHandle;                               // 0x0570 (size: 0x8)
    TArray<FName> NameList;                                                           // 0x0578 (size: 0x10)
    double ReturnRadius;                                                              // 0x0588 (size: 0x8)
    TSubclassOf<class ABP_NPCAIController_C> ControllerClass;                         // 0x0590 (size: 0x8)
    TSubclassOf<class UPalAIActionBase> DefaultActionClass;                           // 0x0598 (size: 0x8)
    double DespawnPlusDistance;                                                       // 0x05A0 (size: 0x8)
    FName UniqueNPCID;                                                                // 0x05A8 (size: 0x8)
    FF_NPC_PathWalkArray PathWalkArray;                                               // 0x05B0 (size: 0x10)
    bool IsLoading;                                                                   // 0x05C0 (size: 0x1)
    bool IsWorldLoadComplete;                                                         // 0x05C1 (size: 0x1)
    bool Debug_Disable;                                                               // 0x05C2 (size: 0x1)
    TArray<class ABP_NPC_WalkPathPoint_1_C*> WalkPointRefarence;                      // 0x05C8 (size: 0x10)
    class UPalIndividualCharacterHandle* OtomoHandle;                                 // 0x05D8 (size: 0x8)
    int32 DespawnWaitCounter;                                                         // 0x05E0 (size: 0x4)
    bool IsBossSpawner;                                                               // 0x05E4 (size: 0x1)
    FName SaveKeyName;                                                                // 0x05E8 (size: 0x8)
    bool NotDeleteGroupByDespawn;                                                     // 0x05F0 (size: 0x1)

    void GetCanAppearFlag(bool& CanSpawn);
    void SetFlag_IsLoading(bool Next);
    void RespawnByOutside();
    void On Dead(FPalDeadInfo DeadInfo);
    void SetSaveData(class AActor* Boss);
    void On Capture(class APalCharacter* SelfCharacter, class APalCharacter* Attacker);
    void SetNullHandleWhenDestoryOtomo(class AActor* DestroyedActor);
    void OnOtomoSpawned(class AController* HolderController, class APalCharacter* OtomoPal);
    void GetAllSpawnedNPCHandle(TArray<class UPalIndividualCharacterHandle*>& Handles);
    float GetSpawnPointRadius();
    void BlueprintTick_Despawning(float DeltaTime);
    void BlueprintTick_Spawning(float DeltaTime);
    void GetWorldLoadWaitRadius(double& Radius);
    void AdjustFloor(class AActor* SpaenedChara);
    void Editor Setup Walk Point Ref();
    void CheckWorldLoadCompleted();
    void CreateWalkPathList(class USceneComponent* Parent, FF_NPC_PathWalkArray& PathArray);
    void Initialize Spawned Character(class UPalIndividualCharacterHandle* Handle, TSubclassOf<class UPalAIActionBase> DefaultAction, FF_NPC_PathWalkArray WalkPath, FName Otomo);
    void SetCharaNames();
    void DespawnDelegateMono(FPalInstanceID ID);
    void SetNullHandleWhenDestoryNPC(class AActor* DestroyedActor);
    void SpawnDelegate(FPalInstanceID ID);
    void Despawn();
    void Spawn();
    void Check Spawn(double DeltaTime);
    void ReceiveBeginPlay();
    void カスタムイベント_0();
    void SetAllNPCLocation();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void CreateDebugSpawnerGroupInfo(FPalSpawnerGroupInfo OneGroupInfo);
    void ExecuteUbergraph_BP_QuestTargetNPCSpawner_Breeder03(int32 EntryPoint);
}; // Size: 0x5F1

#endif
