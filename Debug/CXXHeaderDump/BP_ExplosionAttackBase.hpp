#ifndef UE4SS_SDK_BP_ExplosionAttackBase_HPP
#define UE4SS_SDK_BP_ExplosionAttackBase_HPP

class ABP_ExplosionAttackBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0298 (size: 0x8)
    double HitCollisionTime;                                                          // 0x02A0 (size: 0x8)
    class UPalHitFilter* HitFilter;                                                   // 0x02A8 (size: 0x8)
    int32 AttackPower;                                                                // 0x02B0 (size: 0x4)
    double BlowPower;                                                                 // 0x02B8 (size: 0x8)
    double SneakAttackRate;                                                           // 0x02C0 (size: 0x8)
    TSubclassOf<class UPalCameraShakeBase> CameraShakeClass;                          // 0x02C8 (size: 0x8)
    bool IsBlow;                                                                      // 0x02D0 (size: 0x1)
    TArray<FPalSpecialAttackRateInfo> Special Attack Rate Infos;                      // 0x02D8 (size: 0x10)
    double PvPRate;                                                                   // 0x02E8 (size: 0x8)
    bool MuteSoundForAI;                                                              // 0x02F0 (size: 0x1)
    FName OwnerStaticItemId;                                                          // 0x02F4 (size: 0x8)
    double PvPBuildingRate;                                                           // 0x0300 (size: 0x8)
    double PvPPlayerToGuildPalDamageRate;                                             // 0x0308 (size: 0x8)
    float DelayDestroyTime;                                                           // 0x0310 (size: 0x4)
    bool IsPartnerSkillAttack;                                                        // 0x0314 (size: 0x1)

    void GetHumanStunType(EPalHumanStunType& HumanStunType);
    void SetSpecialAttackInfos(TArray<FPalSpecialAttackRateInfo>& NewParam);
    void Can Damage by Ray Check(class UPrimitiveComponent* OtherHitCollision, bool& CanDamage);
    void Is Attack Able(class AActor* Attacker, class AActor* HitActor, class UPrimitiveComponent* HitComponent, bool& IsHit);
    void Get Attackable Friend(bool& IsFriendAttack);
    void GetEffectValue(int32& Value);
    void GetEffectType(EPalAdditionalEffectType& Effect);
    void GetElement(EPalElementType& Element);
    void FindAttacker(class AActor*& Attacker);
    void GetWeaponAttackType(EPalAttackType& AttackType);
    void SetBlowPower(double NewBlowPower);
    void SetRadius(int32 NewParam);
    void SetPower(int32 NewParam, double SnakeRate, double PvPDamageRate, double PvPBuildingDamageRate, double PvPPlayerToGuildPalDamageRate, bool IsPartnerSkill);
    void OnHit(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    void ReceiveBeginPlay();
    void SetOwnerStaticItemId(FName OwnerStaticItemId);
    void ReceiveTick(float DeltaSeconds);
    void SetupHitFilter();
    void DisableCollision();
    void カスタムイベント();
    void ExecuteUbergraph_BP_ExplosionAttackBase(int32 EntryPoint);
}; // Size: 0x315

#endif
