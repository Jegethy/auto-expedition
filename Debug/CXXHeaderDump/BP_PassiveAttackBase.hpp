#ifndef UE4SS_SDK_BP_PassiveAttackBase_HPP
#define UE4SS_SDK_BP_PassiveAttackBase_HPP

class ABP_PassiveAttackBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    double HitCollisionTime;                                                          // 0x02A0 (size: 0x8)
    class UPalHitFilter* HitFilter;                                                   // 0x02A8 (size: 0x8)
    int32 AttackPower;                                                                // 0x02B0 (size: 0x4)
    EPalBlowVelocityOwner VelocityOwner;                                              // 0x02B4 (size: 0x1)
    FVector NativeBlowVelocity;                                                       // 0x02B8 (size: 0x18)
    double SneakAttackRate;                                                           // 0x02D0 (size: 0x8)
    TArray<FPalSpecialAttackRateInfo> Special Attack Rate Infos;                      // 0x02D8 (size: 0x10)
    double PvPRate;                                                                   // 0x02E8 (size: 0x8)
    FName OwnerStaticItemId;                                                          // 0x02F0 (size: 0x8)
    double PvPBuildingRate;                                                           // 0x02F8 (size: 0x8)
    double PvPPlayerToGuildPalDamageRate;                                             // 0x0300 (size: 0x8)
    float DelayDestroyTime;                                                           // 0x0308 (size: 0x4)
    bool StartEffectFadeOut;                                                          // 0x030C (size: 0x1)
    double FadeOutTimer;                                                              // 0x0310 (size: 0x8)
    bool IsEnableHitEffect;                                                           // 0x0318 (size: 0x1)
    bool IsOverrideHitCheck;                                                          // 0x0319 (size: 0x1)

    void ApplyDamageHit(class AActor* Attacker, class UPrimitiveComponent* MyHitComponent, class AActor* OhterHitActor, class UPrimitiveComponent* OtherHitComponent, TArray<int32>& FoliageIndex);
    void GetCollision(class UPrimitiveComponent*& Collision);
    void SetSpecialAttackInfos(TArray<FPalSpecialAttackRateInfo>& NewParam);
    void Can Damage by Ray Check(class UPrimitiveComponent* OtherHitCollision, bool& CanDamage);
    void Is Attack Able(class AActor* Attacker, class AActor* HitActor, class UPrimitiveComponent* HitComponent, bool& IsHit);
    void Get Attackable Friend(bool& IsFriendAttack);
    void GetEffectValue(int32& Value);
    void GetEffectType(EPalAdditionalEffectType& Effect);
    void GetElement(EPalElementType& Element);
    void FindAttacker(class AActor*& Attacker);
    void GetWeaponAttackType(EPalAttackType& AttackType);
    void SetPower(int32 NewParam, double SnakeRate, double PvPDamageRate, double PvPBuildingDamageRate, double PvPPlayerToGuildPalDamageRate);
    void OnHit(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    void DisableCollision();
    void SetupHitFilter();
    void SetOwnerStaticItemId(FName OwnerStaticItemId);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void カスタムイベント();
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_PassiveAttackBase(int32 EntryPoint);
}; // Size: 0x31A

#endif
