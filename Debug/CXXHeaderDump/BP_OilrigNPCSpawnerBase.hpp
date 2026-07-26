#ifndef UE4SS_SDK_BP_OilrigNPCSpawnerBase_HPP
#define UE4SS_SDK_BP_OilrigNPCSpawnerBase_HPP

class ABP_OilrigNPCSpawnerBase_C : public APalOilrigNPCSpawnerBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Debug_Mesh;                                           // 0x02D8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02E0 (size: 0x8)
    TSubclassOf<class UBP_AIAction_NPC_RelaxBase_C> DefaultAction;                    // 0x02E8 (size: 0x8)
    FPalDataTableRowName_PalHumanData HumanName;                                      // 0x02F0 (size: 0x8)
    int32 Level;                                                                      // 0x02F8 (size: 0x4)
    class UPalIndividualCharacterHandle* SpawnedNPCHandle;                            // 0x0300 (size: 0x8)
    FPalDataTableRowName_PalMonsterData OtomoName;                                    // 0x0308 (size: 0x8)
    FTimerHandle RecheckTimerHandle;                                                  // 0x0310 (size: 0x8)
    class APalCharacter* SpawnedOtomo;                                                // 0x0318 (size: 0x8)
    bool StartCombatByOilrigAlert;                                                    // 0x0320 (size: 0x1)

    void GetAllSpawnedNPCHandle(TArray<class UPalIndividualCharacterHandle*>& Handles);
    void On Spawn Otomo(class AController* HolderController, class APalCharacter* OtomoPal);
    void ExistSpawnableCollision(bool& Exist);
    void RequestSpawn();
    void IsNearAnyPlayer(double Distance, bool& IsNear);
    void SpawnOneNPC();
    void Despawn Delegate(FPalInstanceID ID);
    void Despawn(class UPalIndividualCharacterHandle* Handle);
    void InitializeSpawnedCharacter(class UPalIndividualCharacterHandle* Handle);
    void Spawn Delegate(FPalInstanceID ID);
    void Spawn(FName CharacterID, int32 Level, FVector Location, FRotator Rotation, class UPalIndividualCharacterHandle*& Handle);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_OilrigNPCSpawnerBase(int32 EntryPoint);
}; // Size: 0x321

#endif
