#ifndef UE4SS_SDK_BP_BuildObject_Wood_Wall_V2_HPP
#define UE4SS_SDK_BP_BuildObject_Wood_Wall_V2_HPP

class ABP_BuildObject_Wood_Wall_V2_C : public APalBuildObjectBasicBase
{
    class UBP_BuildObjectSimulateArrowComponent_C* BP_BuildObjectSimulateArrowComponent; // 0x0780 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0788 (size: 0x8)
    class UBoxComponent* AffectNavigationBox;                                         // 0x0790 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0798 (size: 0x8)
    class UStaticMeshComponent* SM_Wall_Wood;                                         // 0x07A0 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x07A8 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x07B0 (size: 0x8)

    void GetStaticMeshComponents(TArray<class UStaticMeshComponent*>& OutComponents);
    void GetStaticMeshInfos(TArray<FPalStaticMeshImposterStaticMeshInfo>& OutStaticMeshInfo);
}; // Size: 0x7B8

#endif
