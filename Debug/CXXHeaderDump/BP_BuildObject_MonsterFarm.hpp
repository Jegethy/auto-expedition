#ifndef UE4SS_SDK_BP_BuildObject_MonsterFarm_HPP
#define UE4SS_SDK_BP_BuildObject_MonsterFarm_HPP

class ABP_BuildObject_MonsterFarm_C : public APalBuildObjectMonsterFarm
{
    class UBP_BuildObjectSimulateArrowComponent_C* BP_BuildObjectSimulateArrowComponent; // 0x0780 (size: 0x8)
    class USphereComponent* WalkableRange;                                            // 0x0788 (size: 0x8)
    class UStaticMeshComponent* SM_PalFarm;                                           // 0x0790 (size: 0x8)
    class UPalMapObjectMonsterFarmParameterComponent* MonsterFarmParameter;           // 0x0798 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x07A0 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x07A8 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x07B0 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x07B8 (size: 0x8)

}; // Size: 0x7C0

#endif
