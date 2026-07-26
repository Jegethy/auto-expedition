#ifndef UE4SS_SDK_BP_FishingSpotAreaBase_HPP
#define UE4SS_SDK_BP_FishingSpotAreaBase_HPP

class ABP_FishingSpotAreaBase_C : public APalFishingSpotArea
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UBoxComponent* SpawnLocation_9;                                             // 0x0410 (size: 0x8)
    class UBoxComponent* SpawnLocation_8;                                             // 0x0418 (size: 0x8)
    class UBoxComponent* SpawnLocation_7;                                             // 0x0420 (size: 0x8)
    class UBoxComponent* SpawnLocation_6;                                             // 0x0428 (size: 0x8)
    class UChildActorComponent* Spawner;                                              // 0x0430 (size: 0x8)
    class UBoxComponent* FishingSpotAttackBlock;                                      // 0x0438 (size: 0x8)
    class UStaticMeshComponent* LocationBenchmark;                                    // 0x0440 (size: 0x8)
    class UBoxComponent* SpawnLocation_5;                                             // 0x0448 (size: 0x8)
    class UBoxComponent* SpawnLocation_4;                                             // 0x0450 (size: 0x8)
    class UBoxComponent* SpawnLocation_3;                                             // 0x0458 (size: 0x8)
    class UBoxComponent* SpawnLocation_2;                                             // 0x0460 (size: 0x8)
    class UBoxComponent* SpawnLocation_1;                                             // 0x0468 (size: 0x8)
    class UBoxComponent* SpotAreaVolume;                                              // 0x0470 (size: 0x8)
    class UStaticMeshComponent* DebugMesh;                                            // 0x0478 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0480 (size: 0x8)
    TEnumAsByte<ECollisionEnabled::Type> AttackBlockCollisionType;                    // 0x0488 (size: 0x1)

    void AdjustActorToWater();
    void ReceiveBeginPlay();
    void BndEvt__BP_FishingSpotAreaBase_FishingSpotAttackBlock_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnSpawnFish();
    void OnEmptySpot();
    void ExecuteUbergraph_BP_FishingSpotAreaBase(int32 EntryPoint);
}; // Size: 0x489

#endif
