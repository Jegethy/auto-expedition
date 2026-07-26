#ifndef UE4SS_SDK_BP_BuildObject_EnergyStorage_Electric_HPP
#define UE4SS_SDK_BP_BuildObject_EnergyStorage_Electric_HPP

class ABP_BuildObject_EnergyStorage_Electric_C : public APalBuildObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0750 (size: 0x8)
    class UBP_BuildObjectSimulateArrowComponent_C* BP_BuildObjectSimulateArrowComponent; // 0x0758 (size: 0x8)
    class UPalMapObjectEnergyStorageParameterComponent* EnergyStorageParameter;       // 0x0760 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0768 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0770 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0778 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0780 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0788 (size: 0x8)
    class UNiagaraComponent* PlayingFX;                                               // 0x0790 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicMaterialInstance;                          // 0x0798 (size: 0x8)

    void OnUpdateStoredEnergyAmount(class UPalMapObjectEnergyStorageModel* Model);
    void OnAvailable_BlueprintImpl();
    void OnSetConcreteModel(class UPalMapObjectConcreteModelBase* Model);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BuildObject_EnergyStorage_Electric(int32 EntryPoint);
}; // Size: 0x7A0

#endif
