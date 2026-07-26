#ifndef UE4SS_SDK_BP_LevelObject_Relic_IceCrocodile_HPP
#define UE4SS_SDK_BP_LevelObject_Relic_IceCrocodile_HPP

class ABP_LevelObject_Relic_IceCrocodile_C : public APalLevelObjectRelic
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    class UMaterialBillboardComponent* MaterialBillboard;                             // 0x0368 (size: 0x8)
    class USceneComponent* ObtainFXOrigin;                                            // 0x0370 (size: 0x8)
    class UStaticMeshComponent* StaticMesh_Base;                                      // 0x0378 (size: 0x8)
    class UNiagaraComponent* AuraEffect;                                              // 0x0380 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x0388 (size: 0x8)
    class UStaticMeshComponent* StaticMesh_Gem;                                       // 0x0390 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0398 (size: 0x8)

    FVector GetObtainFXLocation();
    void OnUpdatePickupStatus(class APalLevelObjectObtainable* LevelObject);
    void SetActiveSelf(class APalLevelObjectObtainable* LevelObject);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LevelObject_Relic_IceCrocodile(int32 EntryPoint);
}; // Size: 0x3A0

#endif
