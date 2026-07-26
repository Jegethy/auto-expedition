#ifndef UE4SS_SDK_BP_ElecBombBullet_HPP
#define UE4SS_SDK_BP_ElecBombBullet_HPP

class ABP_ElecBombBullet_C : public ABP_ThrowObjectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0428 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0430 (size: 0x8)
    bool HitAble;                                                                     // 0x0438 (size: 0x1)
    FBP_ElecBombBullet_CHitEventDispatcher HitEventDispatcher;                        // 0x0440 (size: 0x10)
    void HitEventDispatcher(FVector BulletLocation);

    void GetExClass(TSubclassOf<class ABP_ExplosionAttackBase_C>& ExClass);
    void ReceiveBeginPlay();
    void OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void OnHitWater(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void ExecuteUbergraph_BP_ElecBombBullet(int32 EntryPoint);
    void HitEventDispatcher__DelegateSignature(FVector BulletLocation);
}; // Size: 0x450

#endif
