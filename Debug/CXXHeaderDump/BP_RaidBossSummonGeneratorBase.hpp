#ifndef UE4SS_SDK_BP_RaidBossSummonGeneratorBase_HPP
#define UE4SS_SDK_BP_RaidBossSummonGeneratorBase_HPP

class ABP_RaidBossSummonGeneratorBase_C : public APalRaidBossSummonGeneratorBase
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0290 (size: 0x8)

    void CalcSpawnTransform(int32 Index, int32 MaxNum, FVector CenterPos, double Height, FTransform& SpawnTF);
    void SpawnSpawner(class AActor* BossActor, FGuid campID, int32 GeneralIndex);
}; // Size: 0x298

#endif
