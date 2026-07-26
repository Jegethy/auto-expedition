#ifndef UE4SS_SDK_BP_CombatHeli_HPP
#define UE4SS_SDK_BP_CombatHeli_HPP

class ABP_CombatHeli_C : public APalNPC
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0BF0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0BF8 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule3;                        // 0x0C00 (size: 0x8)
    class UPalBodyPartsBoxComponent* PalBodyPartsBox3;                                // 0x0C08 (size: 0x8)
    class UPalBodyPartsBoxComponent* PalBodyPartsBox2;                                // 0x0C10 (size: 0x8)
    class UPalBodyPartsBoxComponent* PalBodyPartsBox1;                                // 0x0C18 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule2;                        // 0x0C20 (size: 0x8)
    class UStaticMeshComponent* CombatHeli_HeliBody;                                  // 0x0C28 (size: 0x8)
    class UStaticMeshComponent* CombatHeli_Gun;                                       // 0x0C30 (size: 0x8)
    class UPalBodyPartsBoxComponent* PalBodyPartsBox;                                 // 0x0C38 (size: 0x8)
    class UBP_CombatHeliRpidWeaponComponent_Bomber_C* BP_CombatHeliRpidWeaponComponent_Bomber; // 0x0C40 (size: 0x8)
    class UBP_CombatHeliRpidWeaponComponent_WingMiso_C* BP_CombatHeliRpidWeaponComponent_WingMiso; // 0x0C48 (size: 0x8)
    class UBP_CombatHeliRpidWeaponComponent_FrontMG_C* BP_CombatHeliRpidWeaponComponent_FrontMG; // 0x0C50 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x0C58 (size: 0x8)

    void CalcHeightControl(double TargetHeight, double& Result);
    void SetHideAll();
    void ShootMGBullet();
    void ReceiveBeginPlay();
    void OnHPGaugeCollisionOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnHPGaugeCollisionOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_CombatHeli(int32 EntryPoint);
}; // Size: 0xC60

#endif
