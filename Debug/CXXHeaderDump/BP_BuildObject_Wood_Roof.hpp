#ifndef UE4SS_SDK_BP_BuildObject_Wood_Roof_HPP
#define UE4SS_SDK_BP_BuildObject_Wood_Roof_HPP

class ABP_BuildObject_Wood_Roof_C : public APalBuildObjectBasicBase
{
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0780 (size: 0x8)
    class UStaticMeshComponent* SM_Roof_Wood;                                         // 0x0788 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0790 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0798 (size: 0x8)

    void GetStaticMeshComponents(TArray<class UStaticMeshComponent*>& OutComponents);
    void GetStaticMeshInfos(TArray<FPalStaticMeshImposterStaticMeshInfo>& OutStaticMeshInfo);
}; // Size: 0x7A0

#endif
