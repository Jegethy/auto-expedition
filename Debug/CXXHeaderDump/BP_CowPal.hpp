#ifndef UE4SS_SDK_BP_CowPal_HPP
#define UE4SS_SDK_BP_CowPal_HPP

class ABP_CowPal_C : public ABP_MonsterBase_C
{
    class UPalSpeedCollisionComponent* PalSpeedCollision;                             // 0x0D30 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule1;                        // 0x0D38 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0D40 (size: 0x8)

}; // Size: 0xD48

#endif
