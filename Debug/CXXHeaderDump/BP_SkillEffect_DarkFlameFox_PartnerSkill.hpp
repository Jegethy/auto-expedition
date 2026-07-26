#ifndef UE4SS_SDK_BP_SkillEffect_DarkFlameFox_PartnerSkill_HPP
#define UE4SS_SDK_BP_SkillEffect_DarkFlameFox_PartnerSkill_HPP

class ABP_SkillEffect_DarkFlameFox_PartnerSkill_C : public ABP_PassiveAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0328 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0330 (size: 0x8)
    double ImpactTimer;                                                               // 0x0338 (size: 0x8)
    TArray<int32> FoliageIndex;                                                       // 0x0340 (size: 0x10)
    TMap<class AActor*, class UPrimitiveComponent*> CurrentHitableActorMap;           // 0x0350 (size: 0x50)
    TArray<class AActor*> HittedActors;                                               // 0x03A0 (size: 0x10)
    double ImpactAlpha;                                                               // 0x03B0 (size: 0x8)
    double CurrentImpactRadius;                                                       // 0x03B8 (size: 0x8)
    double ImpactTime;                                                                // 0x03C0 (size: 0x8)
    double ImpactRaidus;                                                              // 0x03C8 (size: 0x8)
    double ImpactHeight;                                                              // 0x03D0 (size: 0x8)
    double ImpcactHeightOffset;                                                       // 0x03D8 (size: 0x8)
    double HitInterval;                                                               // 0x03E0 (size: 0x8)
    double HitMaxCount;                                                               // 0x03E8 (size: 0x8)
    TMap<AActor*, double> HitLastTimeMap;                                             // 0x03F0 (size: 0x50)
    TMap<AActor*, int32> HitCountMap;                                                 // 0x0440 (size: 0x50)
    bool IsRadiusImmediate;                                                           // 0x0490 (size: 0x1)
    TMap<class AActor*, class FMultiHitFoliageIndexArrayStruct> HittedFoliageArray;   // 0x0498 (size: 0x50)
    bool IsIgnoreFly;                                                                 // 0x04E8 (size: 0x1)

    void GetRootLocationZ(class APalCharacter* Character, double& LocationZ);
    void CheckHitFoliage(class AActor* TargetActor, class UPrimitiveComponent* TargetComponent, int32 HitIndex, int32 CheckHitIndex);
    void CheckOnTheGround(class APalCharacter* PalCharacter, bool& OnTheGround);
    void CanHit(class AActor* TargetActor, bool& IsHit);
    void GetCollision(class UPrimitiveComponent*& Collision);
    void GetElement(EPalElementType& Element);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_SkillEffect_FoxExorcist_PartnerSkill_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_DarkFlameFox_PartnerSkill(int32 EntryPoint);
}; // Size: 0x4E9

#endif
