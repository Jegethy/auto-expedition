#ifndef UE4SS_SDK_BP_RaidBossSummonMeteor_HPP
#define UE4SS_SDK_BP_RaidBossSummonMeteor_HPP

class ABP_RaidBossSummonMeteor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0298 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x02A0 (size: 0x8)
    class USphereComponent* SphereCollision;                                          // 0x02A8 (size: 0x8)
    TMap<FPalDataTableRowName_PalMonsterData, int32> PalNameAndNum;                   // 0x02B0 (size: 0x50)
    FVector MoveDirection;                                                            // 0x0300 (size: 0x18)
    double Const_MoveSpeed;                                                           // 0x0318 (size: 0x8)
    FGuid TargetCamp ID;                                                              // 0x0320 (size: 0x10)
    int32 PalLevel;                                                                   // 0x0330 (size: 0x4)
    bool IsRequestedSpawn;                                                            // 0x0334 (size: 0x1)
    bool IsFadeOutMode;                                                               // 0x0335 (size: 0x1)
    double FadeTimer;                                                                 // 0x0338 (size: 0x8)

    void EffectFadeOutLoop(double Timer, double FadeTime, class UNiagaraComponent* Effect, FName ParamName);
    void CalcSpawnLocation(int32 Index, int32 MaxNum, FVector& Location, FRotator& Rotate);
    void SpawnPal();
    void SetupMeteor(TMap<FPalDataTableRowName_PalMonsterData, int32> NameAndNum, FVector MovementDirection, FGuid campID, int32 Level, bool DelayTime);
    void BndEvt__BP_RaidBossSummonMeteor_SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_RaidBossSummonMeteor(int32 EntryPoint);
}; // Size: 0x340

#endif
