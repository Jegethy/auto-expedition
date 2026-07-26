#ifndef UE4SS_SDK_BP_PalBossBattleInstanceRootBase_HPP
#define UE4SS_SDK_BP_PalBossBattleInstanceRootBase_HPP

class ABP_PalBossBattleInstanceRootBase_C : public APalBossBattleInstanceRoot
{
    class UChildActorComponent* ChildActor;                                           // 0x02B8 (size: 0x8)
    class UBoxComponent* WallBox4;                                                    // 0x02C0 (size: 0x8)
    class UBoxComponent* WallBox3;                                                    // 0x02C8 (size: 0x8)
    class UBoxComponent* WallBox2;                                                    // 0x02D0 (size: 0x8)
    class UBoxComponent* WallBox1;                                                    // 0x02D8 (size: 0x8)
    class USceneComponent* GroundCheckPoint;                                          // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* SequencerTransform;                                   // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* SM_EnemyPoint;                                        // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* PlayerStartPoint;                                     // 0x02F8 (size: 0x8)
    class UBoxComponent* CeilingBox;                                                  // 0x0300 (size: 0x8)
    class UBoxComponent* EdgeBox;                                                     // 0x0308 (size: 0x8)
    class UBoxComponent* EdgeBox1;                                                    // 0x0310 (size: 0x8)
    class UBoxComponent* ForNavMesh_Ground;                                           // 0x0318 (size: 0x8)
    class UBoxComponent* EdgeBox3;                                                    // 0x0320 (size: 0x8)
    class UBoxComponent* EdgeBox2;                                                    // 0x0328 (size: 0x8)
    class ABP_BossBattle_BossCharacterSpawner_C* BossSpawner;                         // 0x0330 (size: 0x8)
    bool Should Boss Location No Adjust;                                              // 0x0338 (size: 0x1)

    FTransform GetPalBoxSpawnTransform();
    void ResetBossLocation();
    void SpawnBossSpawner(EPalBossType InBossType, int32 JoinPlayerNum, bool bIgnoreSpawn);
    FTransform GetPlayerStartTransform();
    void GetBossSpawner(class ABP_BossBattle_BossCharacterSpawner_C*& BossSpawner);
    bool CheckLevelLoaded();
}; // Size: 0x339

#endif
