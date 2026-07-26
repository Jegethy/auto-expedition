#ifndef UE4SS_SDK_BP_MapObject_TreasureBox_FishingJunkSpot_Junk_Rank1_HPP
#define UE4SS_SDK_BP_MapObject_TreasureBox_FishingJunkSpot_Junk_Rank1_HPP

class ABP_MapObject_TreasureBox_FishingJunkSpot_Junk_Rank1_C : public APalMapObjectTreasureBox
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UNiagaraComponent* NS_SingleStar;                                           // 0x0458 (size: 0x8)
    class UBP_InteractableCapsule_C* BP_InteractableCapsule;                          // 0x0460 (size: 0x8)
    class UPalMapObjectTreasureBoxSalvageParameterComponent* TreasureBoxSalvageParameter; // 0x0468 (size: 0x8)
    class UBP_FloatingObject_C* BP_FloatingObject;                                    // 0x0470 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0478 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0480 (size: 0x8)
    class USceneComponent* IndicatorOrigin;                                           // 0x0488 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MapObject_TreasureBox_FishingJunkSpot_Junk_Rank1(int32 EntryPoint);
}; // Size: 0x490

#endif
