#ifndef UE4SS_SDK_BP_AIActionCombatHeli_BattleMode_Field_HPP
#define UE4SS_SDK_BP_AIActionCombatHeli_BattleMode_Field_HPP

class UBP_AIActionCombatHeli_BattleMode_Field_C : public UBP_AIActionCombatHeli_BattleMode_C
{

    void IsValid Target(class AActor* TargetActor, bool& Validd);
    void FindTarget(class AActor*& TargetActor);
}; // Size: 0x218

#endif
