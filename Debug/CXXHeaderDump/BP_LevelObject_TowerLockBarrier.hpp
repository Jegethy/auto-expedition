#ifndef UE4SS_SDK_BP_LevelObject_TowerLockBarrier_HPP
#define UE4SS_SDK_BP_LevelObject_TowerLockBarrier_HPP

class ABP_LevelObject_TowerLockBarrier_C : public APalLevelObject_LockedObstacle
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0308 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0310 (size: 0x8)
    class UStaticMeshComponent* BarrierMesh;                                          // 0x0318 (size: 0x8)

    void OnDataChanged();
    void ExecuteUbergraph_BP_LevelObject_TowerLockBarrier(int32 EntryPoint);
}; // Size: 0x320

#endif
