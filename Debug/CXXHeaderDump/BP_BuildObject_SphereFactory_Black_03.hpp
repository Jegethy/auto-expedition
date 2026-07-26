#ifndef UE4SS_SDK_BP_BuildObject_SphereFactory_Black_03_HPP
#define UE4SS_SDK_BP_BuildObject_SphereFactory_Black_03_HPP

class ABP_BuildObject_SphereFactory_Black_03_C : public APalBuildObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0750 (size: 0x8)
    class UPalWorkEffectSoundComponent* WorkSound_Spark;                              // 0x0758 (size: 0x8)
    class UPalWorkEffectSoundComponent* WorkSound_Flowing;                            // 0x0760 (size: 0x8)
    class UPalWorkEffectSoundComponent* WorkSound_Manufacturing;                      // 0x0768 (size: 0x8)
    class UPalWorkFacingComponent* WorkFacing3;                                       // 0x0770 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0778 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0780 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0788 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0790 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0798 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x07A0 (size: 0x8)
    class UBP_BuildObjectFactoryConveyorComponent_C* FactoryConveyorComponent;        // 0x07A8 (size: 0x8)
    class UPalWorkFacingComponent* WorkFacing1;                                       // 0x07B0 (size: 0x8)
    class UPalWorkFacingComponent* WorkFacing2;                                       // 0x07B8 (size: 0x8)
    class UPalWorkFacingComponent* WorkFacing;                                        // 0x07C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x07C8 (size: 0x8)
    class UPalMapObjectItemConverterParameterComponent* ItemConverterParameter;       // 0x07D0 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x07D8 (size: 0x8)

    void OnAvailable_BlueprintImpl();
    void OnSetConcreteModel(class UPalMapObjectConcreteModelBase* Model);
    void ExecuteUbergraph_BP_BuildObject_SphereFactory_Black_03(int32 EntryPoint);
}; // Size: 0x7E0

#endif
