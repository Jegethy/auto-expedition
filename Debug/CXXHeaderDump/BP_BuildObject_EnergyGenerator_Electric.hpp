#ifndef UE4SS_SDK_BP_BuildObject_EnergyGenerator_Electric_HPP
#define UE4SS_SDK_BP_BuildObject_EnergyGenerator_Electric_HPP

class ABP_BuildObject_EnergyGenerator_Electric_C : public APalBuildObjectGenerateEnergy
{
    class UBP_BuildObjectSimulateArrowComponent_C* BP_BuildObjectSimulateArrowComponent; // 0x0760 (size: 0x8)
    class UPalMapObjectGenerateEnergyParameterComponent* GenerateEnergyParameter;     // 0x0768 (size: 0x8)
    class USceneComponent* EffectAttachment;                                          // 0x0770 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0778 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0780 (size: 0x8)
    class USceneComponent* Meshes;                                                    // 0x0788 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0790 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0798 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x07A0 (size: 0x8)
    class UNiagaraComponent* PlayingFX;                                               // 0x07A8 (size: 0x8)

    void OnEndGenerate();
    void OnStartGenerate();
}; // Size: 0x7B0

#endif
