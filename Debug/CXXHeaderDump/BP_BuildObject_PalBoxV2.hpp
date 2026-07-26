#ifndef UE4SS_SDK_BP_BuildObject_PalBoxV2_HPP
#define UE4SS_SDK_BP_BuildObject_PalBoxV2_HPP

class ABP_BuildObject_PalBoxV2_C : public APalBuildObjectBaseCampPoint
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0750 (size: 0x8)
    class UBP_BuildObjectSimulateArrowComponent_C* BP_BuildObjectSimulateArrowComponent; // 0x0758 (size: 0x8)
    class UBoxComponent* CannotOverlapArea;                                           // 0x0760 (size: 0x8)
    class UStaticMeshComponent* AreaRange1;                                           // 0x0768 (size: 0x8)
    class UStaticMeshComponent* AreaRange;                                            // 0x0770 (size: 0x8)
    class UPalNavigationInvokerComponent* PalNavigationInvoker;                       // 0x0778 (size: 0x8)
    class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource_FarMountain; // 0x0780 (size: 0x8)
    class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource_Foliage; // 0x0788 (size: 0x8)
    class UPalLimitVolumeBoxComponent* PalLimitVolumeBox;                             // 0x0790 (size: 0x8)
    class UStaticMeshComponent* PalSphereLight;                                       // 0x0798 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x07A0 (size: 0x8)
    class UStaticMeshComponent* space;                                                // 0x07A8 (size: 0x8)
    class UArrowComponent* WorkerSpawnPoint;                                          // 0x07B0 (size: 0x8)
    class UArrowComponent* FastTravelPoint;                                           // 0x07B8 (size: 0x8)
    class UBP_InteractableCapsule_C* BP_PalBoxInteractableCapsule;                    // 0x07C0 (size: 0x8)
    class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource_MainGrid; // 0x07C8 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x07D0 (size: 0x8)
    class UStaticMeshComponent* PCStaticMesh;                                         // 0x07D8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x07E0 (size: 0x8)

    class UStaticMeshComponent* GetBaseCampPointMeshComponent();
    void UpdateVisibleAreaRange();
    void OnAvailable_BlueprintImpl();
    FTransform GetWorkerSpawnLocalTransform();
    FTransform GetFastTravelLocalTransform();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnStartSimulation();
    void ExecuteUbergraph_BP_BuildObject_PalBoxV2(int32 EntryPoint);
}; // Size: 0x7E8

#endif
