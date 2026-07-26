#ifndef UE4SS_SDK_BP_UniqueSkillModule_Tackle_HPP
#define UE4SS_SDK_BP_UniqueSkillModule_Tackle_HPP

class UBP_UniqueSkillModule_Tackle_C : public UPalUniqueSkillModule
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    class UAnimMontage* StartAnimMontage;                                             // 0x0158 (size: 0x8)
    class UAnimMontage* LoopAnimMontage;                                              // 0x0160 (size: 0x8)
    class UAnimMontage* EndAnimMontage;                                               // 0x0168 (size: 0x8)
    double AttackTime;                                                                // 0x0170 (size: 0x8)
    double YawMultiply;                                                               // 0x0178 (size: 0x8)
    double EndBrakeTime;                                                              // 0x0180 (size: 0x8)
    double EndBrakeTimer;                                                             // 0x0188 (size: 0x8)
    double MaxSpeedMultiply;                                                          // 0x0190 (size: 0x8)
    double MinSpeedMultiply;                                                          // 0x0198 (size: 0x8)
    double TackleHomingRate;                                                          // 0x01A0 (size: 0x8)
    bool StopUpdateYaw;                                                               // 0x01A8 (size: 0x1)
    FTimerHandle AttackTimerHandle;                                                   // 0x01B0 (size: 0x8)
    FName flagName;                                                                   // 0x01B8 (size: 0x8)
    TSubclassOf<class ABP_SkillEffectBase_C> StartSkillEffectClass;                   // 0x01C0 (size: 0x8)
    TSubclassOf<class ABP_SkillEffectBase_C> LoopSkillEffectClass;                    // 0x01C8 (size: 0x8)
    class ABP_SkillEffectBase_C* LoopSkillEffect;                                     // 0x01D0 (size: 0x8)
    FBP_UniqueSkillModule_Tackle_COnSpawnedLoopEffect OnSpawnedLoopEffect;            // 0x01D8 (size: 0x10)
    void OnSpawnedLoopEffect(class ABP_SkillEffectBase_C* LoopEffect);
    TEnumAsByte<EAction_Unique_Tackle::Type> State;                                   // 0x01E8 (size: 0x1)
    FBP_UniqueSkillModule_Tackle_COnEndAttackDelegate OnEndAttackDelegate;            // 0x01F0 (size: 0x10)
    void OnEndAttackDelegate();
    FBP_UniqueSkillModule_Tackle_COnMontageNotifyDelegate OnMontageNotifyDelegate;    // 0x0200 (size: 0x10)
    void OnMontageNotifyDelegate(class UAnimMontage* Montage, FName NotifyName);
    FBP_UniqueSkillModule_Tackle_COnCompletedEndMontageDelegate OnCompletedEndMontageDelegate; // 0x0210 (size: 0x10)
    void OnCompletedEndMontageDelegate();
    double StartHomingRate;                                                           // 0x0220 (size: 0x8)
    bool IsTackleHoming;                                                              // 0x0228 (size: 0x1)
    bool IsEffectSpawnOnGround;                                                       // 0x0229 (size: 0x1)
    bool EnableDashSkip;                                                              // 0x022A (size: 0x1)
    double DashSkipTime;                                                              // 0x0230 (size: 0x8)
    bool bLocalVelocityControl;                                                       // 0x0238 (size: 0x1)

    void CanDashSkip(const FGeneralAnimationParameter& GeneralAnimationParameter, class APalCharacter* Character, bool& Success);
    void IsPlayingAnyMontage(TArray<class UAnimMontage*>& Montages, bool& Result);
    void IsPlayingEndMontage(bool& Result);
    void SetFlagName(FName flagName);
    void GetCurrentState(TEnumAsByte<EAction_Unique_Tackle::Type>& State);
    void UpdateYaw();
    void UpdateVelocity();
    void TerminateMotion();
    void ControllInput(double DeltaTime);
    void OnNotifyEnd_26A182C445668EE79190E6AE1D795120(FName NotifyName);
    void OnNotifyBegin_26A182C445668EE79190E6AE1D795120(FName NotifyName);
    void OnInterrupted_26A182C445668EE79190E6AE1D795120(FName NotifyName);
    void OnBlendOut_26A182C445668EE79190E6AE1D795120(FName NotifyName);
    void OnCompleted_26A182C445668EE79190E6AE1D795120(FName NotifyName);
    void OnBeginModule();
    void OnEndModule();
    void TickModule(float DeltaTime);
    void OnEndAttack();
    void OnMontageNotifyEvent(class UAnimMontage* Montage, FName NotifyName);
    void OnStartTossin();
    void OnMontageEnded_Tackle(class UAnimMontage* Montage, bool bInterrupted);
    void ExecuteUbergraph_BP_UniqueSkillModule_Tackle(int32 EntryPoint);
    void OnCompletedEndMontageDelegate__DelegateSignature();
    void OnMontageNotifyDelegate__DelegateSignature(class UAnimMontage* Montage, FName NotifyName);
    void OnEndAttackDelegate__DelegateSignature();
    void OnSpawnedLoopEffect__DelegateSignature(class ABP_SkillEffectBase_C* LoopEffect);
}; // Size: 0x239

#endif
