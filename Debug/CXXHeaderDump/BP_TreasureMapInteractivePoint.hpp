#ifndef UE4SS_SDK_BP_TreasureMapInteractivePoint_HPP
#define UE4SS_SDK_BP_TreasureMapInteractivePoint_HPP

class ABP_TreasureMapInteractivePoint_C : public APalTreasureMapInteractivePoint
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UBP_InteractableCapsule_C* BP_InteractableCapsule;                          // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* Cone;                                                 // 0x02D0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02D8 (size: 0x8)
    class UNiagaraSystem* PillarFX;                                                   // 0x02E0 (size: 0x8)
    class UNiagaraComponent* PillarFXComponent;                                       // 0x02E8 (size: 0x8)
    TMap<int32, FLinearColor> PillarColorMapByRank;                                   // 0x02F0 (size: 0x50)
    double PillarLength;                                                              // 0x0340 (size: 0x8)

    void Setup();
    void OnChangedActorLocation();
    void SetVisualByPointDataItem(const FPalPlayerTreasureMapPointDataItem& Item);
    void SetActiveForPlayerInteract(const bool bActive);
    void SetActiveFXInLocal(bool Condition);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TreasureMapInteractivePoint(int32 EntryPoint);
}; // Size: 0x348

#endif
