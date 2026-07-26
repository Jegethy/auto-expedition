#ifndef UE4SS_SDK_BP_BuildObjectFactoryConveyorComponent_HPP
#define UE4SS_SDK_BP_BuildObjectFactoryConveyorComponent_HPP

class UBP_BuildObjectFactoryConveyorComponent_C : public UPalItemFlowSplineComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0660 (size: 0x8)
    double ConveyorSpeed;                                                             // 0x0668 (size: 0x8)
    FName ScrollMaterialParametername;                                                // 0x0670 (size: 0x8)
    class UMeshComponent* Target Mesh Component;                                      // 0x0678 (size: 0x8)
    int32 Target Material Index;                                                      // 0x0680 (size: 0x4)

    class UMaterialInstanceDynamic* GetMaterialInstance();
    void SetRunningConveyor(bool bOn);
    void OnUpdateRecipe(class UPalMapObjectConvertItemModel* Model);
    void OnUpdateCurrentEnergyState(class UPalMapObjectEnergyModule* Module);
    void OnReadyOwnerEnergyModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
    void SetupByOwner(class UPalMapObjectConcreteModelBase* ConcreteModel, class UMeshComponent* TargetMeshComponent, int32 TargetMaterialIndex);
    void OnUpdateBuildObjectVisual(const class UPalMapObjectConcreteModelBase* MapObjectConcreteModel);
    void ExecuteUbergraph_BP_BuildObjectFactoryConveyorComponent(int32 EntryPoint);
}; // Size: 0x684

#endif
