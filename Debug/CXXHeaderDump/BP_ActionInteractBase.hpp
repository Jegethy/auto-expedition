#ifndef UE4SS_SDK_BP_ActionInteractBase_HPP
#define UE4SS_SDK_BP_ActionInteractBase_HPP

class UBP_ActionInteractBase_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0190 (size: 0x8)
    FName InteractFlagName;                                                           // 0x0198 (size: 0x8)
    FTimerHandle MovableTimer;                                                        // 0x01A0 (size: 0x8)
    bool IsDisableMoveOnToggle;                                                       // 0x01A8 (size: 0x1)

    void OnJumpDelegate(class UPalCharacterMovementComponent* Component);
    void EnableMove();
    void UnbindDelegates();
    void CancelInteract();
    void BindDelegates();
    void SetPlayerFlags(bool isDisable);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionInteractBase(int32 EntryPoint);
}; // Size: 0x1A9

#endif
