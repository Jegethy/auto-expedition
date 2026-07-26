#ifndef UE4SS_SDK_BP_BuildObject_WeaponFactoryBase_HPP
#define UE4SS_SDK_BP_BuildObject_WeaponFactoryBase_HPP

class ABP_BuildObject_WeaponFactoryBase_C : public APalBuildObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0750 (size: 0x8)
    class UStaticMeshComponent* SM_WeaponFactoryMedieval;                             // 0x0758 (size: 0x8)
    class UBP_WorkVisualFX_C* BP_WorkVisualFX2;                                       // 0x0760 (size: 0x8)
    class UPalWorkFacingComponent* WorkFacing2;                                       // 0x0768 (size: 0x8)
    class USceneComponent* StaticMesh;                                                // 0x0770 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0778 (size: 0x8)
    class UPalMapObjectItemConverterParameterComponent* ItemConverterParameter;       // 0x0780 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0788 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0790 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0798 (size: 0x8)

    void WeaponLoop(class USceneComponent* Input);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BuildObject_WeaponFactoryBase(int32 EntryPoint);
}; // Size: 0x7A0

#endif
