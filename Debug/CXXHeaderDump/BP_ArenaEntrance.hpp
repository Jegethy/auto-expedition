#ifndef UE4SS_SDK_BP_ArenaEntrance_HPP
#define UE4SS_SDK_BP_ArenaEntrance_HPP

class ABP_ArenaEntrance_C : public APalArenaEntrance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class USphereComponent* EntryCancel_Trigger;                                      // 0x02D0 (size: 0x8)
    class USceneComponent* ItemDropPoint;                                             // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* WarpPoint;                                            // 0x02E0 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x02E8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02F0 (size: 0x8)

    FTransform GetItemDropPoint();
    FTransform GetWarpPoint();
    void ReceiveBeginPlay();
    void カスタムイベント(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    void BndEvt__BP_ArenaEntrance_EntryCancel_Trigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OpenArenaGuide();
    void ExecuteUbergraph_BP_ArenaEntrance(int32 EntryPoint);
}; // Size: 0x2F8

#endif
