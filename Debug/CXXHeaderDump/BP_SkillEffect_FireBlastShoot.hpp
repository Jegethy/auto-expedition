#ifndef UE4SS_SDK_BP_SkillEffect_FireBlastShoot_HPP
#define UE4SS_SDK_BP_SkillEffect_FireBlastShoot_HPP

class ABP_SkillEffect_FireBlastShoot_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0438 (size: 0x8)
    TSubclassOf<class APalSkillEffectBase> BulletClass;                               // 0x0440 (size: 0x8)
    double ShootIntervalTime;                                                         // 0x0448 (size: 0x8)
    FTimerHandle TimeHandle;                                                          // 0x0450 (size: 0x8)

    void OnDestroyed_イベント_0(class AActor* DestroyedActor);
    void ReceiveBeginPlay();
    void OnSystemFinished_イベント_0(class UParticleSystemComponent* PSystem);
    void Shoot();
    void ExecuteUbergraph_BP_SkillEffect_FireBlastShoot(int32 EntryPoint);
}; // Size: 0x458

#endif
