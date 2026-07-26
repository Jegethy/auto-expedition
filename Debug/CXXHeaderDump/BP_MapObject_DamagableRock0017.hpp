#ifndef UE4SS_SDK_BP_MapObject_DamagableRock0017_HPP
#define UE4SS_SDK_BP_MapObject_DamagableRock0017_HPP

class ABP_MapObject_DamagableRock0017_C : public APalMapObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0408 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0410 (size: 0x8)
    class UBoxComponent* WorkableBounds;                                              // 0x0418 (size: 0x8)
    class UArrowComponent* IndicatorOrigin;                                           // 0x0420 (size: 0x8)
    class UPalMapObjectDropItemParameterComponent* DropItemParameter;                 // 0x0428 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x0430 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0438 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0440 (size: 0x8)

    FPalObjectPoolParameter GetObjectPoolParameter();
    bool IsShowOutlineInReticleTargetting();
    void InitializeFromPool();
    void ReturnToPool();
    void ExecuteUbergraph_BP_MapObject_DamagableRock0017(int32 EntryPoint);
}; // Size: 0x448

#endif
