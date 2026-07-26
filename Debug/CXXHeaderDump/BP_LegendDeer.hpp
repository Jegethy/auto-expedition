#ifndef UE4SS_SDK_BP_LegendDeer_HPP
#define UE4SS_SDK_BP_LegendDeer_HPP

class ABP_LegendDeer_C : public ABP_MonsterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0D30 (size: 0x8)
    class UPalSpeedCollisionComponent* PalSpeedCollision;                             // 0x0D38 (size: 0x8)
    class UBP_PalRideMarkerSaddle_C* BP_PalRideMarkerSaddle;                          // 0x0D40 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule5;                        // 0x0D48 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule4;                        // 0x0D50 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule3;                        // 0x0D58 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule2;                        // 0x0D60 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule1;                        // 0x0D68 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0D70 (size: 0x8)

    void SpawnMultiJumpEffect();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LegendDeer(int32 EntryPoint);
}; // Size: 0xD78

#endif
