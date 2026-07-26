#ifndef UE4SS_SDK_BP_LaserMiningTool_HPP
#define UE4SS_SDK_BP_LaserMiningTool_HPP

class ABP_LaserMiningTool_C : public ABP_NormalRifle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0710 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0718 (size: 0x8)
    class UStaticMeshComponent* LaserMesh;                                            // 0x0720 (size: 0x8)
    double Range;                                                                     // 0x0728 (size: 0x8)
    FVector TargetLocation;                                                           // 0x0730 (size: 0x18)
    bool IsActive;                                                                    // 0x0748 (size: 0x1)
    FRotator LastBulletRotation;                                                      // 0x0750 (size: 0x18)
    class UNiagaraComponent* Effect;                                                  // 0x0768 (size: 0x8)
    bool IsHit;                                                                       // 0x0770 (size: 0x1)
    FVector NewVar;                                                                   // 0x0778 (size: 0x18)

    void Is UseEjectionPort(bool& isUse);
    bool IsEmptyMagazine();
    class APalCharacter* GetRiderOrRideCharacter(class APalCharacter*& RidePal, bool& IsRide);
    void GetAIMLocation(FVector& Location);
    void GetAIMRotation(FRotator& Rotator);
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void GetMuzzleEffectParticle(class UParticleSystem*& Particle System);
    void GetMuzzleEffectAttached(class UNiagaraSystem*& Effect);
    void GetMuzzleEffect(class UNiagaraSystem*& NewParam);
    void GetShootInterval(double& Time);
    void ReceiveBeginPlay();
    void OnShoot(class APalBullet* BulletActor);
    void OnReleaseTrigger(bool bCanShootOnRelease);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteTrace();
    void ExecuteUbergraph_BP_LaserMiningTool(int32 EntryPoint);
}; // Size: 0x790

#endif
