#ifndef UE4SS_SDK_BP_HomingMissile_MissileLauncher_NPC_HPP
#define UE4SS_SDK_BP_HomingMissile_MissileLauncher_NPC_HPP

class ABP_HomingMissile_MissileLauncher_NPC_C : public ABP_HomingMissile_MissileLauncher_C
{

    void GetExplosionClass(TSubclassOf<class ABP_ExplosionAttackBase_C>& ExplosionClass);
    void Find Target Actor(class APalCharacter*& PalCharacter);
}; // Size: 0x474

#endif
