#ifndef UE4SS_SDK_BP_LaserMiningBullet_HPP
#define UE4SS_SDK_BP_LaserMiningBullet_HPP

class ABP_LaserMiningBullet_C : public ABP_NormalBullet_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0438 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0440 (size: 0x8)
    double Range;                                                                     // 0x0448 (size: 0x8)
    FVector TargetLocation;                                                           // 0x0450 (size: 0x18)

    void OnHitToActor(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void StartTrace(class APalWeaponBase* OwnerWeapon, FVector TargetLocation);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LaserMiningBullet(int32 EntryPoint);
}; // Size: 0x468

#endif
