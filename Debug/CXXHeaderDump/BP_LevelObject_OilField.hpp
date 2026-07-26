#ifndef UE4SS_SDK_BP_LevelObject_OilField_HPP
#define UE4SS_SDK_BP_LevelObject_OilField_HPP

class ABP_LevelObject_OilField_C : public APalLevelObjectItemProvider
{
    class UStaticMeshComponent* SM_VFX_OilField_00_TF;                                // 0x02B8 (size: 0x8)
    class UDecalComponent* Decal_Oil;                                                 // 0x02C0 (size: 0x8)
    class UNiagaraComponent* NS_OilLeak_00;                                           // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02D0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02D8 (size: 0x8)

}; // Size: 0x2E0

#endif
