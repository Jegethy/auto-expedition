#ifndef UE4SS_SDK_BP_SkillEffect_ClownRabbit_PartnerSkill_PlayerLowHealthBlast_HPP
#define UE4SS_SDK_BP_SkillEffect_ClownRabbit_PartnerSkill_PlayerLowHealthBlast_HPP

class ABP_SkillEffect_ClownRabbit_PartnerSkill_PlayerLowHealthBlast_C : public ABP_PassiveAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0328 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0330 (size: 0x8)
    double ImpactTime;                                                                // 0x0338 (size: 0x8)
    double ImpactRaidus;                                                              // 0x0340 (size: 0x8)
    double ImpactHeight;                                                              // 0x0348 (size: 0x8)
    double ImpactTimer;                                                               // 0x0350 (size: 0x8)
    double ImpactAlpha;                                                               // 0x0358 (size: 0x8)
    double CurrentImpactRadius;                                                       // 0x0360 (size: 0x8)
    double ImpcactHeightOffset;                                                       // 0x0368 (size: 0x8)
    double HitInterval;                                                               // 0x0370 (size: 0x8)
    double HitMaxCount;                                                               // 0x0378 (size: 0x8)
    bool IsIgnoreFly;                                                                 // 0x0380 (size: 0x1)
    TArray<int32> FoliageIndex;                                                       // 0x0388 (size: 0x10)
    TMap<class AActor*, class UPrimitiveComponent*> CurrentHitableActorMap;           // 0x0398 (size: 0x50)
    TArray<class AActor*> HittedActors;                                               // 0x03E8 (size: 0x10)
    TMap<AActor*, double> HitLastTimeMap;                                             // 0x03F8 (size: 0x50)
    TMap<AActor*, int32> HitCountMap;                                                 // 0x0448 (size: 0x50)
    bool IsRadiusImmediate;                                                           // 0x0498 (size: 0x1)
    TMap<class AActor*, class FMultiHitFoliageIndexArrayStruct> HittedFoliageArray;   // 0x04A0 (size: 0x50)

    void GetEffectValue(int32& Value);
    void GetEffectType(EPalAdditionalEffectType& Effect);
    void GetRootLocationZ(class APalCharacter* Character, double& LocationZ);
    void CheckHitFoliage(class AActor* TargetActor, class UPrimitiveComponent* TargetComponent, int32 HitIndex, int32 CheckHitIndex);
    void CheckOnTheGround(class APalCharacter* PalCharacter, bool& OnTheGround);
    void CanHit(class AActor* TargetActor, bool& IsHit);
    void GetCollision(class UPrimitiveComponent*& Collision);
    void GetElement(EPalElementType& Element);
    void GetWeaponAttackType(EPalAttackType& AttackType);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_SkillEffect_FoxExorcist_PartnerSkill_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_ClownRabbit_PartnerSkill_PlayerLowHealthBlast(int32 EntryPoint);
}; // Size: 0x4F0

#endif
