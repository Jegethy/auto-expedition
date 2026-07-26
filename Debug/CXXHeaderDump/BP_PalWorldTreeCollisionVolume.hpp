#ifndef UE4SS_SDK_BP_PalWorldTreeCollisionVolume_HPP
#define UE4SS_SDK_BP_PalWorldTreeCollisionVolume_HPP

class ABP_PalWorldTreeCollisionVolume_C : public AActor
{
    class UStaticMeshComponent* Cube;                                                 // 0x0290 (size: 0x8)
    class UPalNoClimbVolumeBoxComponent* PalNoClimbVolumeBox;                         // 0x0298 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02A0 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x2A8

#endif
