#ifndef UE4SS_SDK_BP_PalSpawner_Standard_HPP
#define UE4SS_SDK_BP_PalSpawner_Standard_HPP

class ABP_PalSpawner_Standard_C : public APalNPCSpawnerBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0528 (size: 0x8)
    class UTextRenderComponent* DummyTextRender;                                      // 0x0530 (size: 0x8)
    class USkeletalMeshComponent* DummySkeletalMesh;                                  // 0x0538 (size: 0x8)
    class USphereComponent* SpawnCollision;                                           // 0x0540 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0548 (size: 0x8)
    bool NotSleepFlag;                                                                // 0x0550 (size: 0x1)
    class ABP_MonsterBase_C* tempSpawnedMonster;                                      // 0x0558 (size: 0x8)
    TArray<class UPalIndividualCharacterHandle*> IndividualHandleList;                // 0x0560 (size: 0x10)
    double ReturnTerritoryRadius;                                                     // 0x0570 (size: 0x8)
    double WanderingRadius;                                                           // 0x0578 (size: 0x8)
    TEnumAsByte<ELeashType::Type> Leash Type;                                         // 0x0580 (size: 0x1)
    FVector BattleStartLocation;                                                      // 0x0588 (size: 0x18)
    double SpawnRadius;                                                               // 0x05A0 (size: 0x8)
    TArray<FPalSpawnerGroupInfo> SpawnGroupList;                                      // 0x05A8 (size: 0x10)
    double RayStartUpOffset;                                                          // 0x05B8 (size: 0x8)
    FPalSpawnerGroupInfo tempSpawnGroupInfo;                                          // 0x05C0 (size: 0x30)
    double DespawnPlusDistance;                                                       // 0x05F0 (size: 0x8)
    bool IsLoading;                                                                   // 0x05F8 (size: 0x1)
    bool IsWorldLoadComplete;                                                         // 0x05F9 (size: 0x1)
    FName SpawnerName;                                                                // 0x05FC (size: 0x8)
    EPalSpawnedCharacterType SpawnerType;                                             // 0x0604 (size: 0x1)
    double ReturnRadiusRate_Combat;                                                   // 0x0608 (size: 0x8)
    bool IgnoreGroundRaycast;                                                         // 0x0610 (size: 0x1)
    TSubclassOf<class APalAIController> AIControllerClass;                            // 0x0618 (size: 0x8)
    TArray<FName> WorldTreeAuraPassiveSkillNames;                                     // 0x0620 (size: 0x10)
    bool HasWorldTreeAura;                                                            // 0x0630 (size: 0x1)
    bool bIsFixSpawnGroup;                                                            // 0x0631 (size: 0x1)
    EPalOneDayTimeType FixSpawnGroupTime;                                             // 0x0632 (size: 0x1)
    bool RarePalAble;                                                                 // 0x0633 (size: 0x1)

    void OnCapturedWorldTreeAuraPal(class APalCharacter* SelfCharacter, class APalCharacter* Attacker);
    void GetLotteriedIDs(TArray<FName>& ids);
    void IsFixSpawnGroup(bool& fixed);
    void ResetLottery();
    void GetRandomWorldTreePassiveSkill(TArray<FName>& Passives);
    void EnableWorldTreeAura(class APalCharacter* SpawnCharacter);
    void SetLocationIgnoreRaycast(class AActor* PalActor);
    EPalSpawnedCharacterType GetSpawnerType();
    FName GetSpawnerName();
    TArray<FPalSpawnerGroupInfo> GetOriginalSpawnGroupList();
    TArray<FPalSpawnerGroupInfo> GetSpawnGroupList(class UObject* WorldContextObject);
    void GetAllSpawnedNPCHandle(TArray<class UPalIndividualCharacterHandle*>& Handles);
    bool IsSuppressedByRandomIncident();
    float GetSpawnPointRadius();
    void BlueprintTick_Despawning(float DeltaTime);
    void BlueprintTick_Spawning(float DeltaTime);
    void Is Field Boss or Imprisonment Boss Spawner(bool& IsTimer);
    void OnDead(FPalDeadInfo Info);
    void OnCaptured(class APalCharacter* SelfPal, class APalCharacter* Attacker);
    void Lottery and Spawn Reauest();
    void ExistAliveCharacter(bool& Exist);
    int32 GetMaxMonsterLevel();
    void IsWorldPartitionLoadComplete(bool& IsLoading);
    void IsCharacterLoading(bool& IsLoading);
    void GetFixedSpawnInfo(FPalSpawnerGroupInfo& Group);
    void CheckIntervalByDistance();
    void BP_PalSpawner_Standard_AutoGenFunc(class AActor* DestroyedActor);
    void CheckWorldLoadCompleted();
    void IsAlwaysSpawn(bool& Always);
    void LotterySpawnPalListIndex(bool& Success, FPalSpawnerGroupInfo& SpawnGroup);
    void RemoveHandleList(class APalCharacter* Monster);
    void FindIndividualHandle(FPalInstanceID ID, class UPalIndividualCharacterHandle*& Handle);
    void DespawnDelegate(FPalInstanceID ID);
    void Spawn Delegate(FPalInstanceID ID);
    void CheckSpawn(double DeltaTime);
    void Despawn();
    void Spawn(FPalSpawnerGroupInfo SpawnGroup);
    void ReceiveBeginPlay();
    void カスタムイベント_0();
    void CreateDebugSpawnerGroupInfo(FPalSpawnerGroupInfo OneGroupInfo);
    void SetAllNPCLocation();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void SpawnRequest_ByOutside(bool IsDeleteAliveCharacter);
    void TestDelaySetLocation(class AActor* Actor);
    void RequestLottery();
    void ExecuteUbergraph_BP_PalSpawner_Standard(int32 EntryPoint);
}; // Size: 0x634

#endif
