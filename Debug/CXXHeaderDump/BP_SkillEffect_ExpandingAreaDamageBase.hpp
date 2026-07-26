#ifndef UE4SS_SDK_BP_SkillEffect_ExpandingAreaDamageBase_HPP
#define UE4SS_SDK_BP_SkillEffect_ExpandingAreaDamageBase_HPP

class ABP_SkillEffect_ExpandingAreaDamageBase_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UBoxComponent* BoxCollision;                                                // 0x0438 (size: 0x8)
    class UNiagaraComponent* ImpactWaveEffect;                                        // 0x0440 (size: 0x8)
    class UNiagaraComponent* DustEffect;                                              // 0x0448 (size: 0x8)
    double ImpactTime;                                                                // 0x0450 (size: 0x8)
    double ImpactRaidus;                                                              // 0x0458 (size: 0x8)
    double ImpactHeight;                                                              // 0x0460 (size: 0x8)
    double ImpactTimer;                                                               // 0x0468 (size: 0x8)
    double ImpactAlpha;                                                               // 0x0470 (size: 0x8)
    double CurrentImpactRadius;                                                       // 0x0478 (size: 0x8)
    TMap<class AActor*, class UPrimitiveComponent*> CurrentHitableActorMap;           // 0x0480 (size: 0x50)
    TArray<class AActor*> HittedActors;                                               // 0x04D0 (size: 0x10)
    TArray<class UPrimitiveComponent*> OverlappingFoliageComponents;                  // 0x04E0 (size: 0x10)
    TArray<FPalFoliageInstanceId> HittedFoliageIds;                                   // 0x04F0 (size: 0x10)
    TArray<int32> TempFoliageIndex;                                                   // 0x0500 (size: 0x10)
    double CameraShakeOuterRadius;                                                    // 0x0510 (size: 0x8)
    bool EnableFoliageDamage;                                                         // 0x0518 (size: 0x1)
    TSubclassOf<class UCameraShakeBase> CameraShakeClass;                             // 0x0520 (size: 0x8)
    bool ShowDebugImpact;                                                             // 0x0528 (size: 0x1)

    void CheckDamageToActor();
    void CheckDamageToFoliage();
    void UpdateBoxCollisionSize();
    void CheckOnTheGround(class APalCharacter* PalCharacter, bool& OnTheGround);
    void CanHit(class AActor* TargetActor, bool& IsHit);
    void GetRootLocationZ(class APalCharacter* Character, double& LocationZ);
    void ReceiveTick(float DeltaSeconds);
    void FadeOutEffect(double DeltaSecond);
    void ReceiveBeginPlay();
    void BndEvt__BP_SkillEffect_Unique_GrassMammoth_Earthquake_BoxCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_SkillEffect_ExpandingAreaDamageBase(int32 EntryPoint);
}; // Size: 0x529

#endif
