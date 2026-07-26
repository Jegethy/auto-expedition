#ifndef UE4SS_SDK_BP_AnimNotify_DisableAnimationLeaning_HPP
#define UE4SS_SDK_BP_AnimNotify_DisableAnimationLeaning_HPP

class UBP_AnimNotify_DisableAnimationLeaning_C : public UAnimNotifyState
{

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x30

#endif
