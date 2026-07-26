#ifndef UE4SS_SDK_BP_OilrigExplosiveObjectBase_HPP
#define UE4SS_SDK_BP_OilrigExplosiveObjectBase_HPP

class ABP_OilrigExplosiveObjectBase_C : public APalOilrigExplosiveObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02C8 (size: 0x8)
    class UBP_PalDamageExplodeComponent_C* BP_PalDamageExplodeComponent;              // 0x02D0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02D8 (size: 0x8)

    void ReceiveBeginPlay();
    void PlayDestroyEffect();
    void ChangeDestroyedVisual_BP();
    void ChangeDefaultVisual_BP();
    void ExecuteUbergraph_BP_OilrigExplosiveObjectBase(int32 EntryPoint);
}; // Size: 0x2E0

#endif
