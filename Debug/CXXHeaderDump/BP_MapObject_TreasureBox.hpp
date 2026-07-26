#ifndef UE4SS_SDK_BP_MapObject_TreasureBox_HPP
#define UE4SS_SDK_BP_MapObject_TreasureBox_HPP

class ABP_MapObject_TreasureBox_C : public APalMapObjectTreasureBox
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UPalPickingGameDataComponent* PalPickingGameData;                           // 0x0458 (size: 0x8)
    class UChildActorComponent* VisualActor;                                          // 0x0460 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x0468 (size: 0x8)
    class USceneComponent* IndicatorOrigin;                                           // 0x0470 (size: 0x8)
    TMap<class EPalMapObjectTreasureGradeType, class TSubclassOf<AActor>> VisualMap;  // 0x0478 (size: 0x50)

    void SetupVisual(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void TriggerOpen();
    void OnFinishOpenVisual();
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OnNotifiedStartOpen();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MapObject_TreasureBox(int32 EntryPoint);
}; // Size: 0x4C8

#endif
