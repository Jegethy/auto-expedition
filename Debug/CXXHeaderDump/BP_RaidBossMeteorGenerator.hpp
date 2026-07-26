#ifndef UE4SS_SDK_BP_RaidBossMeteorGenerator_HPP
#define UE4SS_SDK_BP_RaidBossMeteorGenerator_HPP

class ABP_RaidBossMeteorGenerator_C : public ABP_RaidBossSummonGeneratorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    FGuid CampGuid;                                                                   // 0x02A0 (size: 0x10)
    int32 Level;                                                                      // 0x02B0 (size: 0x4)
    double Const_SpawnInterval;                                                       // 0x02B8 (size: 0x8)
    class AActor* BossPal;                                                            // 0x02C0 (size: 0x8)
    TArray<FF_SummonMeteorSpawnInfo> InfoList;                                        // 0x02C8 (size: 0x10)
    int32 CurrentIndex;                                                               // 0x02D8 (size: 0x4)
    double Timer;                                                                     // 0x02E0 (size: 0x8)

    void SpawnSpawner(class AActor* BossActor, FGuid campID, int32 GeneralIndex);
    void OneSpawnMeteor();
    void Calc Spawn Transform 22(int32 Index, int32 MaxNum, FVector CampPos, FTransform& SpawnTF);
    void Spawn Meteor(class AActor* BossActor, FGuid campID, int32 GeneralIndex);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_RaidBossMeteorGenerator(int32 EntryPoint);
}; // Size: 0x2E8

#endif
