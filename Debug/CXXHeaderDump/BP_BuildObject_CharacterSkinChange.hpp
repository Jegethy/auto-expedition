#ifndef UE4SS_SDK_BP_BuildObject_CharacterSkinChange_HPP
#define UE4SS_SDK_BP_BuildObject_CharacterSkinChange_HPP

class ABP_BuildObject_CharacterSkinChange_C : public APalBuildObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0750 (size: 0x8)
    class UBP_BuildObjectSimulateArrowComponent_C* BP_BuildObjectSimulateArrowComponent; // 0x0758 (size: 0x8)
    class UBP_PalStaticMeshComponent_AutoRotation_C* BP_PalStaticMeshComponent_AutoRotation; // 0x0760 (size: 0x8)
    class UNiagaraComponent* Glow;                                                    // 0x0768 (size: 0x8)
    class UStaticMeshComponent* StaticMesh_Base;                                      // 0x0770 (size: 0x8)
    class UPalMapObjectRepairItemParameterComponent* RepairItemParameter;             // 0x0778 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0780 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0788 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0790 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0798 (size: 0x8)

    void SetActiveInternal(bool on);
    void OnAvailable_BlueprintImpl();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BuildObject_CharacterSkinChange(int32 EntryPoint);
}; // Size: 0x7A0

#endif
