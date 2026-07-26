#ifndef UE4SS_SDK_BP_BuildObject_FarmBlockV2_wheet_HPP
#define UE4SS_SDK_BP_BuildObject_FarmBlockV2_wheet_HPP

class ABP_BuildObject_FarmBlockV2_wheet_C : public APalBuildObjectFarmBlockV2
{
    class UBP_BuildObjectSimulateArrowComponent_C* BP_BuildObjectSimulateArrowComponent; // 0x0780 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0788 (size: 0x8)
    class UBoxComponent* VirtualMeshCollision;                                        // 0x0790 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0798 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x07A0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x07A8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x07B0 (size: 0x8)

}; // Size: 0x7B8

#endif
