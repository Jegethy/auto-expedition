#ifndef UE4SS_SDK_BP_MapObject_TreasureBox_ElementalLockBase_HPP
#define UE4SS_SDK_BP_MapObject_TreasureBox_ElementalLockBase_HPP

class ABP_MapObject_TreasureBox_ElementalLockBase_C : public APalMapObjectTreasureBox
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UPalMapObjectTreasureBoxLockComponent* TreasureBoxLock;                     // 0x0458 (size: 0x8)
    class UChildActorComponent* VisualActor;                                          // 0x0460 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x0468 (size: 0x8)
    class USceneComponent* IndicatorOrigin;                                           // 0x0470 (size: 0x8)
    bool IsUnlockedElement;                                                           // 0x0478 (size: 0x1)
    double DestroyDelay;                                                              // 0x0480 (size: 0x8)

    void OnFinishUnlockPerformance();
    void OnProceedUnlockPerformance();
    void OnStartUnlockPerformance();
    void TriggerOpen();
    void OnFinishOpenVisual();
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OnNotifiedStartOpen();
    void ReceiveBeginPlay();
    void TriggerUnlockElemental();
    void ExecuteUbergraph_BP_MapObject_TreasureBox_ElementalLockBase(int32 EntryPoint);
}; // Size: 0x488

#endif
