#ifndef UE4SS_SDK_BP_DropWeaponPartNotify_HPP
#define UE4SS_SDK_BP_DropWeaponPartNotify_HPP

class UBP_DropWeaponPartNotify_C : public UAnimNotify
{
    class UStaticMesh* Mesh;                                                          // 0x0038 (size: 0x8)
    FName In Bone Name;                                                               // 0x0040 (size: 0x8)
    FRotator Offset;                                                                  // 0x0048 (size: 0x18)
    FVector Velocity;                                                                 // 0x0060 (size: 0x18)
    float Angular Intensify;                                                          // 0x0078 (size: 0x4)

    void BeginWeaponDrop(class ABP_DropWeaponPart_C* self2, class AActor* Owner);
    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x7C

#endif
