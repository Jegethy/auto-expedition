#ifndef UE4SS_SDK_BP_PalIncidentInvaderVisitorNPC_HPP
#define UE4SS_SDK_BP_PalIncidentInvaderVisitorNPC_HPP

class UBP_PalIncidentInvaderVisitorNPC_C : public UBP_PalIncidentInvaderBase_C
{
    TSubclassOf<class APalAIController> GuardmanNPCAIControllerClass;                 // 0x03B8 (size: 0x8)
    double Formation_Width;                                                           // 0x03C0 (size: 0x8)
    double FormationSpace_X;                                                          // 0x03C8 (size: 0x8)
    double FormationSpace_Y;                                                          // 0x03D0 (size: 0x8)

    void OnLeaderBaseCampArrived();
    void CalcFormationOffset(int32 Index, int32 Row, FVector& Offset);
    TSubclassOf<class APalAIController> GetNPCAIControllerClass(const FPalInvaderSpawnCharacterParameter& SpawnParameter);
    void IsSquad(bool& Result);
    void Get Chosen Row Data(FPalVisitorNPCDatabaseRow& ChosenRowData);
    void OnAllCharacterSpawned(TArray<class APalAIController*>& MemberController);
    void Get Character Location Type(EPalCharacterLocationType& CharacterLocationType);
    bool GetInvaderStartPoint(FVector& Result);
    void EndProc();
    void StartProc();
}; // Size: 0x3D8

#endif
