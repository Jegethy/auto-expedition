#ifndef UE4SS_SDK_BP_PalIncidentInvaderBase_HPP
#define UE4SS_SDK_BP_PalIncidentInvaderBase_HPP

class UBP_PalIncidentInvaderBase_C : public UPalInvaderIncidentBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F0 (size: 0x8)
    TArray<class UPalIndividualCharacterHandle*> IndividualHandleList;                // 0x02F8 (size: 0x10)
    FVector MarchStartPoint;                                                          // 0x0308 (size: 0x18)
    int32 MemberCount;                                                                // 0x0320 (size: 0x4)
    int32 SpawnedCount;                                                               // 0x0324 (size: 0x4)
    class ABP_DummyNavigationInvoker_C* DummyNav_Start;                               // 0x0328 (size: 0x8)
    class ABP_DummyNavigationInvoker_C* DummyNav_Goal;                                // 0x0330 (size: 0x8)
    FVector CashedBaseCampLocation;                                                   // 0x0338 (size: 0x18)
    bool IsBaseCampLocationCashed;                                                    // 0x0350 (size: 0x1)
    TArray<class UPalIndividualCharacterHandle*> OtomoHandleList;                     // 0x0358 (size: 0x10)
    TMap<class UPalIndividualCharacterHandle*, class FName> OtomoNameMap;             // 0x0368 (size: 0x50)

    void ClearInvaderCompassIcon();
    void OnOtomoActivated(class APalCharacter* Otomo, bool IsActive);
    void GetIndividualHandleIndex(class UPalIndividualCharacterHandle* IndividualHandle, int32& Index);
    void IsUniqueNPCID(FName CharacterID, bool& IsUnique);
    void SpawnCharacter(const FPalInvaderSpawnCharacterParameter& SpawnParameter, int32 Index, FRotator SpawnRot);
    void OnDespawnOtomoByTerminate(FPalInstanceID ID);
    void SetNullHandleWhenDestoryOtomo(class AActor* DestroyedActor);
    void OnOtomoSpawned(class AController* HolderController, class APalCharacter* OtomoPal);
    FVector CalcSpawnLocation(const FVector& SpawnCenter, const FRotator& Rot, int32 Index);
    TSubclassOf<class APalAIController> GetNPCAIControllerClass(const FPalInvaderSpawnCharacterParameter& SpawnParameter);
    void IsSquad(bool& Result);
    void GetStartLocation(FVector& StartLocation);
    void OnAllCharacterSpawned(TArray<class APalAIController*>& MemberController);
    void OnCharacterSpawned(class APalCharacter* SpawnedCharacter);
    void Get Character Location Type(EPalCharacterLocationType& CharacterLocationType);
    void SpawnMemberCharacters(FVector StartLocation);
    void GetTargetBaseCampPosition(FVector& Location);
    void TerminateProc();
    void EndProc();
    void StartProc();
    void SpawnDummyNavInvoker(class ABP_DummyNavigationInvoker_C*& DummyNav);
    void DummyActorSetLoaction();
    void OnDestroyActor(class AActor* Actor);
    void GoalPointPerAgent(int32 SpawnedIndex, FVector& GoalPosition);
    void RemoveHandleList(class APalCharacter* Character);
    void FindIndividualHandle(FPalInstanceID ID, class UPalIndividualCharacterHandle*& Handle);
    void SpawnDelegate(FPalInstanceID ID);
    void RandomTransform(int32 Index, FVector& RandomPos);
    void OnEndInvade();
    void OnInitialized();
    void OnStartInvade();
    void OnWaveTimeup();
    void ExecuteUbergraph_BP_PalIncidentInvaderBase(int32 EntryPoint);
}; // Size: 0x3B8

#endif
