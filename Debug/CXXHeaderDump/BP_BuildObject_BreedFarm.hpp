#ifndef UE4SS_SDK_BP_BuildObject_BreedFarm_HPP
#define UE4SS_SDK_BP_BuildObject_BreedFarm_HPP

class ABP_BuildObject_BreedFarm_C : public APalBuildObjectBreedFarm
{
    class UBP_BuildObjectSimulateArrowComponent_C* BP_BuildObjectSimulateArrowComponent; // 0x07A0 (size: 0x8)
    class USphereComponent* WalkableRange;                                            // 0x07A8 (size: 0x8)
    class UStaticMeshComponent* SM_MatingStation;                                     // 0x07B0 (size: 0x8)
    class UBP_InteractableBox_C* BP_ChestInteract;                                    // 0x07B8 (size: 0x8)
    class UStaticMeshComponent* SM_FlatChest;                                         // 0x07C0 (size: 0x8)
    class UPalMapObjectBreedFarmParameterComponent* BreedFarmParameter;               // 0x07C8 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x07D0 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x07D8 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x07E0 (size: 0x8)
    class UArrowComponent* SpawnPoint_PalEgg;                                         // 0x07E8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x07F0 (size: 0x8)

}; // Size: 0x7F8

#endif
