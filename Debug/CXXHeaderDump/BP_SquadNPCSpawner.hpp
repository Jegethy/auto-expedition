#ifndef UE4SS_SDK_BP_SquadNPCSpawner_HPP
#define UE4SS_SDK_BP_SquadNPCSpawner_HPP

class ABP_SquadNPCSpawner_C : public ABP_MonoNPCSpawner_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0608 (size: 0x8)
    TArray<class UPalIndividualCharacterHandle*> SpawnedHandleList;                   // 0x0610 (size: 0x10)
    TArray<FF_NPCOnePointSpawnInfo> SpawnInfoList;                                    // 0x0620 (size: 0x10)
    bool IsLoadingFlag;                                                               // 0x0630 (size: 0x1)
    TArray<class UPalIndividualCharacterHandle*> SpawnedOtomoHandleList;              // 0x0638 (size: 0x10)
    int32 SpawnedCount;                                                               // 0x0648 (size: 0x4)
    FBP_SquadNPCSpawner_COnSquadSpawnedCharacter OnSquadSpawnedCharacter;             // 0x0650 (size: 0x10)
    void OnSquadSpawnedCharacter(class UPalIndividualCharacterHandle* NewParam);
    TArray<class UPalIndividualCharacterHandle*> Handles;                             // 0x0660 (size: 0x10)

    void SetNullHandleWhenDestoryOtomoSquad(class AActor* DestroyedActor);
    void OnOtomoSpawnedSquad(class AController* HolderController, class APalCharacter* OtomoPal);
    void GetAllSpawnedNPCHandle(TArray<class UPalIndividualCharacterHandle*>& Handles);
    float GetSpawnPointRadius_0();
    void GetWorldLoadWaitRadius(double& Radius);
    void DeleteOnePoint(class AActor* Point);
    void SetNullHandleWhenDestoryNPC(class AActor* DestroyedActor);
    void DespawnDelegate(FPalInstanceID ID);
    void Despawn();
    void SetCharaNames();
    void SetupSpawnInfoList();
    void SpawnDelegate(FPalInstanceID ID);
    void FindIndividualHandle(FPalInstanceID ID, class UPalIndividualCharacterHandle*& Handle, int32& Index);
    void Spawn();
    void Check Spawn(double DeltaTime);
    void ReceiveBeginPlay();
    void SetAllNPCLocation();
    void ExecuteUbergraph_BP_SquadNPCSpawner(int32 EntryPoint);
    void OnSquadSpawnedCharacter__DelegateSignature(class UPalIndividualCharacterHandle* NewParam);
}; // Size: 0x670

#endif
