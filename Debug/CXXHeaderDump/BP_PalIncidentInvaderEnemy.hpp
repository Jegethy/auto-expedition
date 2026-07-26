#ifndef UE4SS_SDK_BP_PalIncidentInvaderEnemy_HPP
#define UE4SS_SDK_BP_PalIncidentInvaderEnemy_HPP

class UBP_PalIncidentInvaderEnemy_C : public UBP_PalIncidentInvaderBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B8 (size: 0x8)
    double MarchTimer;                                                                // 0x03C0 (size: 0x8)
    FPalInvaderDatabaseRow ChosenInvaderData;                                         // 0x03C8 (size: 0xC8)
    TSet<APalPlayerCharacter*> AttackerPlayers;                                       // 0x0490 (size: 0x50)
    class APalInvaderInfo* NewVar;                                                    // 0x04E0 (size: 0x8)

    void OnDeadEnemy(FPalDeadInfo DeadInfo);
    TArray<class APalPlayerCharacter*> GetAttackerPlayers();
    void ReturnToSpawnedPoint();
    void OnAllCharacterSpawned(TArray<class APalAIController*>& MemberController);
    void OnCharacterSpawned(class APalCharacter* SpawnedCharacter);
    void Get Character Location Type(EPalCharacterLocationType& CharacterLocationType);
    bool GetInvaderStartPoint(FVector& Result);
    void EndProc();
    void StartProc();
    void OnInvaderArrived();
    void OnEndInvade();
    void OnWaveTimeup();
    void ExecuteUbergraph_BP_PalIncidentInvaderEnemy(int32 EntryPoint);
}; // Size: 0x4E8

#endif
