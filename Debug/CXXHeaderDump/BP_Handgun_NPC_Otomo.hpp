#ifndef UE4SS_SDK_BP_Handgun_NPC_Otomo_HPP
#define UE4SS_SDK_BP_Handgun_NPC_Otomo_HPP

class ABP_Handgun_NPC_Otomo_C : public ABP_HandGun_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E8 (size: 0x8)

    void OnShoot(class APalBullet* BulletActor);
    void GetShootInterval(double& Time);
    float GetDefaultBlurAngle();
    int32 GetNPCWeaponDamage();
    int32 GetWeaponDamage();
    void OnPullTrigger();
    void OnReleaseTrigger(bool bCanShootOnRelease);
    void ExecuteUbergraph_BP_Handgun_NPC_Otomo(int32 EntryPoint);
}; // Size: 0x6F0

#endif
