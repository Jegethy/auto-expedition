#ifndef UE4SS_SDK_BP_UniqueSkillEffect_LegendDeer_RadiantPurge_Purge_HPP
#define UE4SS_SDK_BP_UniqueSkillEffect_LegendDeer_RadiantPurge_Purge_HPP

class ABP_UniqueSkillEffect_LegendDeer_RadiantPurge_Purge_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class USphereComponent* Sphere_MapOb;                                             // 0x0438 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0440 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0448 (size: 0x8)
    FTimerHandle SearchTimer;                                                         // 0x0450 (size: 0x8)
    TArray<class AActor*> AttackedTargets;                                            // 0x0458 (size: 0x10)
    float PurgeDuration;                                                              // 0x0468 (size: 0x4)
    TMap<class AActor*, class UPrimitiveComponent*> CurrentHitableActorMap;           // 0x0470 (size: 0x50)
    FTimerHandle ExtraTimer;                                                          // 0x04C0 (size: 0x8)

    void CrateFlash();
    void SearchTarget();
    void ReceiveBeginPlay();
    void EndPurge();
    void BndEvt__BP_UniqueSkillEffect_LegendDeer_RadiantPurge_Purge_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void SetRadius(double Radius);
    void CrateExtraEffect();
    void ExecuteUbergraph_BP_UniqueSkillEffect_LegendDeer_RadiantPurge_Purge(int32 EntryPoint);
}; // Size: 0x4C8

#endif
