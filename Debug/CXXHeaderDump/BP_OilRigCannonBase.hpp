#ifndef UE4SS_SDK_BP_OilRigCannonBase_HPP
#define UE4SS_SDK_BP_OilRigCannonBase_HPP

class ABP_OilRigCannonBase_C : public APalOilRigCannonBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    EPalActionType ActionType;                                                        // 0x0330 (size: 0x1)
    bool IsCallDestroyed_Local;                                                       // 0x0331 (size: 0x1)

    EPalInteractiveObjectIndicatorType GetIndicatorType();
    void Stop Animation(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    void Start Animation(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    void Interact Completed(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    void ReceiveBeginPlay();
    void OnDestroyedWeapon_ForBP();
    void ChangeDefaultVisual_BP();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_OilRigCannonBase(int32 EntryPoint);
}; // Size: 0x332

#endif
