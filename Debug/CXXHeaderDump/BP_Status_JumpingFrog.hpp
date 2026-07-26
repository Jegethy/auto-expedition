#ifndef UE4SS_SDK_BP_Status_JumpingFrog_HPP
#define UE4SS_SDK_BP_Status_JumpingFrog_HPP

class UBP_Status_JumpingFrog_C : public UPalStatusJumpingFrog
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00D0 (size: 0x8)
    EPalVisualEffectID Visual Effect ID;                                              // 0x00D8 (size: 0x1)
    class UNiagaraComponent* Effect;                                                  // 0x00E0 (size: 0x8)
    bool ShowEffect;                                                                  // 0x00E8 (size: 0x1)

    void DeleteEffect();
    void UpdateEffect();
    void CreateEffect();
    void StartPassiveSkills();
    void DebugOnTick();
    void DebugOnEnd();
    void DebugOnBegin();
    void OnBeginStatus();
    void OnInactive();
    void OnChangeSliding(class UPalCharacterMovementComponent* Component, bool IsInSliding);
    void OnLanded(class UPalCharacterMovementComponent* Component, const FHitResult& Hit);
    void OnMovementModeChanged(class UPalCharacterMovementComponent* Component, TEnumAsByte<EMovementMode> prevMode, TEnumAsByte<EMovementMode> newMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode);
    void OnJump(class UPalCharacterMovementComponent* Component);
    void TickStatus(float DeltaTime);
    void OnEndStatus();
    void OnBeginSomeStatus();
    void ExecuteUbergraph_BP_Status_JumpingFrog(int32 EntryPoint);
}; // Size: 0xE9

#endif
