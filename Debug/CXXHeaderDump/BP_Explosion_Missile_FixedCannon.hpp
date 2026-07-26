#ifndef UE4SS_SDK_BP_Explosion_Missile_FixedCannon_HPP
#define UE4SS_SDK_BP_Explosion_Missile_FixedCannon_HPP

class ABP_Explosion_Missile_FixedCannon_C : public ABP_Explosion_Missile_C
{

    void GetEffectValue(int32& Value);
    void GetEffectType(EPalAdditionalEffectType& Effect);
    void FindAttacker(class AActor*& Attacker);
}; // Size: 0x328

#endif
