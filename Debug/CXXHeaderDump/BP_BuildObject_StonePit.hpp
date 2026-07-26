#ifndef UE4SS_SDK_BP_BuildObject_StonePit_HPP
#define UE4SS_SDK_BP_BuildObject_StonePit_HPP

class ABP_BuildObject_StonePit_C : public APalBuildObject
{
    class UPalWorkFacingComponent* PalWorkFacing 1;                                   // 0x0750 (size: 0x8)
    class UPalWorkFacingComponent* PalWorkFacing ;                                    // 0x0758 (size: 0x8)
    class UPalWorkFacingComponent* PalWorkFacing 2;                                   // 0x0760 (size: 0x8)
    class UStaticMeshComponent* SM_StonePit_SM_StonePit_RockC;                        // 0x0768 (size: 0x8)
    class UStaticMeshComponent* SM_StonePit_SM_StonePit_RockB;                        // 0x0770 (size: 0x8)
    class UStaticMeshComponent* SM_StonePit_SM_StonePit_RockA;                        // 0x0778 (size: 0x8)
    class UStaticMeshComponent* SM_StonePit_SM_StonePit_Acce;                         // 0x0780 (size: 0x8)
    class UStaticMeshComponent* SM_StonePit_SM_StonePit_Fence;                        // 0x0788 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0790 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0798 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x07A0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x07A8 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x07B0 (size: 0x8)
    class UPalMapObjectItemSimpleProductParameterComponent* ItemSimpleProductParameter; // 0x07B8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x07C0 (size: 0x8)

}; // Size: 0x7C8

#endif
