#ifndef UE4SS_SDK_BP_SendWeaponAnimationNotify_HPP
#define UE4SS_SDK_BP_SendWeaponAnimationNotify_HPP

class UBP_SendWeaponAnimationNotify_C : public UAnimNotify
{
    TEnumAsByte<E_PalWeaponAnimationNotify::Type> Notify;                             // 0x0038 (size: 0x1)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x39

#endif
