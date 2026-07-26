#ifndef UE4SS_SDK_BP_Hedgehog_HPP
#define UE4SS_SDK_BP_Hedgehog_HPP

class ABP_Hedgehog_C : public ABP_MonsterBase_C
{
    class UBP_PalTimerPointLightComponent_C* BP_PalTimerPointLightComponent;          // 0x0D30 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0D38 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0D40 (size: 0x8)
    class UBP_CoopParam_Weapon_C* BP_CoopParam_Weapon;                                // 0x0D48 (size: 0x8)
    TArray<double> PartnerSkillMagnification;                                         // 0x0D50 (size: 0x10)

    void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>& OutComponent);
}; // Size: 0xD60

#endif
