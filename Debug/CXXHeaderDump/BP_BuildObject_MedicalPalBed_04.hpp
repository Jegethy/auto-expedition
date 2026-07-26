#ifndef UE4SS_SDK_BP_BuildObject_MedicalPalBed_04_HPP
#define UE4SS_SDK_BP_BuildObject_MedicalPalBed_04_HPP

class ABP_BuildObject_MedicalPalBed_04_C : public APalBuildObject
{
    class UBoxComponent* BackgroundCheckOverlapCollision;                             // 0x0750 (size: 0x8)
    class UBP_BuildObjectSimulateArrowComponent_C* BP_BuildObjectSimulateArrowComponent; // 0x0758 (size: 0x8)
    class UPalMapObjectMedicalPalBedPalLocationComponent* tMedicalPalBedPalLocation;  // 0x0760 (size: 0x8)
    class UPalMapObjectMedicalPalBedSleepOnSideLocationOffsetComponent* MedicalPalBedSleepOnSideLocationOffset; // 0x0768 (size: 0x8)
    class UPalMapObjectPlayerBedParameterSceneComponent* PlayerBedParameterScene;     // 0x0770 (size: 0x8)
    class USceneComponent* IndicatorOrigin;                                           // 0x0778 (size: 0x8)
    class UPalMapObjectMedicalPalBedParameterComponent* MedicalPalBedParameter;       // 0x0780 (size: 0x8)
    class UBP_InteractableCapsule_C* BP_InteractableCapsule;                          // 0x0788 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0790 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0798 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x07A0 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x07A8 (size: 0x8)

}; // Size: 0x7B0

#endif
