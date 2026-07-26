#ifndef UE4SS_SDK_BP_BuildObject_Altar_HPP
#define UE4SS_SDK_BP_BuildObject_Altar_HPP

class ABP_BuildObject_Altar_C : public APalBuildObjectRaidBossSummon
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0750 (size: 0x8)
    class UPalMapObjectRaidBossSummonParameterComponent* RaidBossSummonParameter;     // 0x0758 (size: 0x8)
    class UPalLimitVolumeBoxComponent* PalLimitVolumeBox;                             // 0x0760 (size: 0x8)
    class UStaticMeshComponent* SM_PalHealingMachine;                                 // 0x0768 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0770 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0778 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0780 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0788 (size: 0x8)
    float _________Track_0_FA7ECEA24E645B7F041C05A2FDD75DDF;                          // 0x0790 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ________Direction_FA7ECEA24E645B7F041C05A2FDD75DDF; // 0x0794 (size: 0x1)
    class UTimelineComponent* タイムライン;                                                 // 0x0798 (size: 0x8)
    class UMaterialInstanceDynamic* Material_PalSummoningStandBase;                   // 0x07A0 (size: 0x8)
    class UMaterialInstanceDynamic* Material_PalSummoningStandTower;                  // 0x07A8 (size: 0x8)
    class UNiagaraSystem* SummonFX;                                                   // 0x07B0 (size: 0x8)

    void タイムライン__FinishedFunc();
    void タイムライン__UpdateFunc();
    void BP_PlayPerform();
    void BroadcastPlayPerform();
    void ResetPlayPerform();
    void ExecuteUbergraph_BP_BuildObject_Altar(int32 EntryPoint);
}; // Size: 0x7B8

#endif
