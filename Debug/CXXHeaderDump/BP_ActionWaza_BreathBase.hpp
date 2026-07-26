#ifndef UE4SS_SDK_BP_ActionWaza_BreathBase_HPP
#define UE4SS_SDK_BP_ActionWaza_BreathBase_HPP

class UBP_ActionWaza_BreathBase_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x02F0 (size: 0x8)
    TSubclassOf<class ABP_SkillEffect_BreathBulletBase_C> Const_BulletCalss;          // 0x02F8 (size: 0x8)

    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void ShootBullet();
    void TickAction(float DeltaTime);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionWaza_BreathBase(int32 EntryPoint);
}; // Size: 0x300

#endif
