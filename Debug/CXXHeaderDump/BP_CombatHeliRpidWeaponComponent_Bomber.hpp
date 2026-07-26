#ifndef UE4SS_SDK_BP_CombatHeliRpidWeaponComponent_Bomber_HPP
#define UE4SS_SDK_BP_CombatHeliRpidWeaponComponent_Bomber_HPP

class UBP_CombatHeliRpidWeaponComponent_Bomber_C : public UBP_CombatHeliRpidWeaponComponent_C
{

    void GetMuzzleFlashEffect(class UNiagaraSystem*& Effect);
    void GetMuzzleTransform(FTransform& MzlTF);
}; // Size: 0xF8

#endif
