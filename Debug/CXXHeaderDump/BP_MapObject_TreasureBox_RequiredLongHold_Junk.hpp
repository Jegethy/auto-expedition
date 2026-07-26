#ifndef UE4SS_SDK_BP_MapObject_TreasureBox_RequiredLongHold_Junk_HPP
#define UE4SS_SDK_BP_MapObject_TreasureBox_RequiredLongHold_Junk_HPP

class ABP_MapObject_TreasureBox_RequiredLongHold_Junk_C : public APalMapObjectTreasureBox
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UNiagaraComponent* NS_SingleStar;                                           // 0x0458 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0460 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x0468 (size: 0x8)
    class USceneComponent* IndicatorOrigin;                                           // 0x0470 (size: 0x8)
    class UAkAudioEvent* OpenSE;                                                      // 0x0478 (size: 0x8)

    void TriggerOpen();
    void ExecuteUbergraph_BP_MapObject_TreasureBox_RequiredLongHold_Junk(int32 EntryPoint);
}; // Size: 0x480

#endif
