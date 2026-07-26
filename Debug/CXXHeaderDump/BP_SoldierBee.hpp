#ifndef UE4SS_SDK_BP_SoldierBee_HPP
#define UE4SS_SDK_BP_SoldierBee_HPP

class ABP_SoldierBee_C : public ABP_MonsterBase_C
{
    class UPalFlyMeshHeightCtrlComponent* PalFlyMeshHeightCtrl;                       // 0x0D30 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere2;                          // 0x0D38 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere1;                          // 0x0D40 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0D48 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0D50 (size: 0x8)
    class USkeletalMeshComponent* Weapon;                                             // 0x0D58 (size: 0x8)

    class USkeletalMeshComponent* GetHandAttachMesh();
}; // Size: 0xD60

#endif
