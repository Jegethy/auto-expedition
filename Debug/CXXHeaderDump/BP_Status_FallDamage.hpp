#ifndef UE4SS_SDK_BP_Status_FallDamage_HPP
#define UE4SS_SDK_BP_Status_FallDamage_HPP

class UBP_Status_FallDamage_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    double Const_DamageStartHeight;                                                   // 0x00B8 (size: 0x8)
    double Const_DeathHeight;                                                         // 0x00C0 (size: 0x8)
    bool IsGlider;                                                                    // 0x00C8 (size: 0x1)
    bool IsSliding;                                                                   // 0x00C9 (size: 0x1)

    void GetFallDamage(double Diff, int32& FallDamage);
    void IsFloating(bool& IsFloating);
    void IsIgnoreCharacter(bool& Ignore);
    void GetLastJumpedZ(double& Z);
    void LandDamage();
    void Reset Fall Start Pos(bool OnLand);
    void OnBeginStatus();
    void OnLand(class UPalCharacterMovementComponent* Component, const FHitResult& Hit);
    void OnModeChange(class UPalCharacterMovementComponent* Component, TEnumAsByte<EMovementMode> prevMode, TEnumAsByte<EMovementMode> newMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode);
    void OnEndStatus();
    void TickStatus(float DeltaTime);
    void SetUp_FallDamage(class APalCharacter* InCharacter);
    void OnJumped(class UPalCharacterMovementComponent* Component);
    void OnChangeSliding(class UPalCharacterMovementComponent* Component, bool IsInSliding);
    void ExecuteUbergraph_BP_Status_FallDamage(int32 EntryPoint);
}; // Size: 0xCA

#endif
