#ifndef UE4SS_SDK_BP_ThrowPalWeapon_HPP
#define UE4SS_SDK_BP_ThrowPalWeapon_HPP

class ABP_ThrowPalWeapon_C : public ABP_ThrowWeaponBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06A8 (size: 0x8)
    class USkeletalMeshComponent* SK_Weapon_PalSphere_001;                            // 0x06B0 (size: 0x8)
    bool IsPlayedThrowMotion;                                                         // 0x06B8 (size: 0x1)
    double Const_WalkSpeedRate;                                                       // 0x06C0 (size: 0x8)

    bool IsEmptyMagazine();
    void Set Flags(bool Disable, double Speed);
    void On Throw();
    void IsNotEmptyOtomo(bool& NotEmpty);
    FName GetEquipSocketName();
    void GetThrowObjectClass(TSubclassOf<class AActor>& ThrowObject);
    void OnAttachWeapon(class AActor* attachActor);
    void OnDetachWeapon(class AActor* detachActor);
    void ExecuteUbergraph_BP_ThrowPalWeapon(int32 EntryPoint);
}; // Size: 0x6C8

#endif
