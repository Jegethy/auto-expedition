#ifndef UE4SS_SDK_BP_Action_Emote_KickCollision_HPP
#define UE4SS_SDK_BP_Action_Emote_KickCollision_HPP

class ABP_Action_Emote_KickCollision_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0298 (size: 0x8)
    FHitResult Hit;                                                                   // 0x02A0 (size: 0xE8)
    class USkeletalMeshComponent* NewLocalVar;                                        // 0x0388 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__BP_Action_Emote_KickCollision_Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_Action_Emote_KickCollision(int32 EntryPoint);
}; // Size: 0x390

#endif
