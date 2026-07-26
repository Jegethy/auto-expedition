#ifndef UE4SS_SDK_BP_PalAction_AnimationStepBase_HPP
#define UE4SS_SDK_BP_PalAction_AnimationStepBase_HPP

class UBP_PalAction_AnimationStepBase_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    class UAnimMontage* Montage;                                                      // 0x0168 (size: 0x8)
    EPalActionType SideStepType;                                                      // 0x0170 (size: 0x1)
    double MoveSideScale;                                                             // 0x0178 (size: 0x8)

    FVector GetStepLocation(class APalCharacter* ActionCharacter);
    void OnNotifyEnd_11C8AEDC4F3769A096E4E2B69E978173(FName NotifyName);
    void OnNotifyBegin_11C8AEDC4F3769A096E4E2B69E978173(FName NotifyName);
    void OnInterrupted_11C8AEDC4F3769A096E4E2B69E978173(FName NotifyName);
    void OnBlendOut_11C8AEDC4F3769A096E4E2B69E978173(FName NotifyName);
    void OnCompleted_11C8AEDC4F3769A096E4E2B69E978173(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_PalAction_AnimationStepBase(int32 EntryPoint);
}; // Size: 0x180

#endif
