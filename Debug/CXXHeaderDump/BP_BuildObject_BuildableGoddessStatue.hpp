#ifndef UE4SS_SDK_BP_BuildObject_BuildableGoddessStatue_HPP
#define UE4SS_SDK_BP_BuildObject_BuildableGoddessStatue_HPP

class ABP_BuildObject_BuildableGoddessStatue_C : public APalBuildObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0750 (size: 0x8)
    class UBP_BuildObjectSimulateArrowComponent_C* BP_BuildObjectSimulateArrowComponent; // 0x0758 (size: 0x8)
    class UNiagaraComponent* NS_GoddessStatue_Glow;                                   // 0x0760 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0768 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0770 (size: 0x8)
    class USceneComponent* IndicatorOrigin;                                           // 0x0778 (size: 0x8)
    class UBP_InteractableCapsule_C* BP_InteractableCapsule;                          // 0x0780 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0788 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0790 (size: 0x8)

    void SetActive_Internal(bool bOn);
    void ReceiveBeginPlay();
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void CustomEvent(class UPalMapObjectConcreteModelBase* Model);
    void ExecuteUbergraph_BP_BuildObject_BuildableGoddessStatue(int32 EntryPoint);
}; // Size: 0x798

#endif
