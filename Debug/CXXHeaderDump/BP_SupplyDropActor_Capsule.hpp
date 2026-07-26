#ifndef UE4SS_SDK_BP_SupplyDropActor_Capsule_HPP
#define UE4SS_SDK_BP_SupplyDropActor_Capsule_HPP

class ABP_SupplyDropActor_Capsule_C : public APalSupplyDropActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0308 (size: 0x8)
    class UStaticMeshComponent* hitCollision;                                         // 0x0310 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnLanded_BP();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_SupplyDropActor_Capsule(int32 EntryPoint);
}; // Size: 0x328

#endif
