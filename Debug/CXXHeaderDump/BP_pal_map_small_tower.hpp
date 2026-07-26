#ifndef UE4SS_SDK_BP_pal_map_small_tower_HPP
#define UE4SS_SDK_BP_pal_map_small_tower_HPP

class ABP_pal_map_small_tower_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class URotatingMovementComponent* RotatingMovement;                               // 0x0298 (size: 0x8)
    class UStaticMeshComponent* SM_pal_b07_PaldiumCrystal_02;                         // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* SM_pal_b07_PaldiumCrystal_02_Collision;               // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* SM_pal_map_small_tower_01;                            // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_pal_map_small_tower(int32 EntryPoint);
}; // Size: 0x2C0

#endif
