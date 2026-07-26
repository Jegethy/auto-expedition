#ifndef UE4SS_SDK_BP_AnimNotifyState_HiddenWeaponSubPart_HPP
#define UE4SS_SDK_BP_AnimNotifyState_HiddenWeaponSubPart_HPP

class UBP_AnimNotifyState_HiddenWeaponSubPart_C : public UAnimNotifyState
{

    bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference);
    FString GetNotifyName();
    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x30

#endif
