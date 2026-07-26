#ifndef UE4SS_SDK_BP_Action_FishingSalvage_HPP
#define UE4SS_SDK_BP_Action_FishingSalvage_HPP

class UBP_Action_FishingSalvage_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    class UAnimMontage* StartAnimMontage;                                             // 0x0168 (size: 0x8)
    class UAnimMontage* IdleLoopAnimMontage;                                          // 0x0170 (size: 0x8)
    class UAnimMontage* BattleLoopAnimMontage;                                        // 0x0178 (size: 0x8)
    class UAnimMontage* EndAnimMontage;                                               // 0x0180 (size: 0x8)
    class UAnimMontage* SuccessMontage;                                               // 0x0188 (size: 0x8)
    class UAnimMontage* FailedMontage;                                                // 0x0190 (size: 0x8)
    FName flagName;                                                                   // 0x0198 (size: 0x8)
    class UPalFishingComponent* FishingComponent;                                     // 0x01A0 (size: 0x8)
    double ThrowForwardOffset;                                                        // 0x01A8 (size: 0x8)
    double WaterPlaneCheckHeightOffset;                                               // 0x01B0 (size: 0x8)
    double WaterPlaneCheckLength;                                                     // 0x01B8 (size: 0x8)

    void FinishSalvageGame();
    void GetThrowLocation(FVector& WaterLocation);
    void SetUseUpperBodyOnly(bool Enable);
    void NotifySalvageEndToWeapon();
    void NotifySalvageStartToWeapon(FVector ThrowLocation);
    void EndAnim();
    void SetupAnim();
    void SetMoveState_Gravity(bool isDisable);
    void SetMoveState_BlowVelocity(bool isDisable);
    void SetMoveState_Common(bool isDisable);
    void OnNotifyEnd_04002E4E41E83AFF32177783C16C6AF7(FName NotifyName);
    void OnNotifyBegin_04002E4E41E83AFF32177783C16C6AF7(FName NotifyName);
    void OnInterrupted_04002E4E41E83AFF32177783C16C6AF7(FName NotifyName);
    void OnBlendOut_04002E4E41E83AFF32177783C16C6AF7(FName NotifyName);
    void OnCompleted_04002E4E41E83AFF32177783C16C6AF7(FName NotifyName);
    void OnNotifyEnd_F3355E1D4316C15ACD4B1A80526070EA(FName NotifyName);
    void OnNotifyBegin_F3355E1D4316C15ACD4B1A80526070EA(FName NotifyName);
    void OnInterrupted_F3355E1D4316C15ACD4B1A80526070EA(FName NotifyName);
    void OnBlendOut_F3355E1D4316C15ACD4B1A80526070EA(FName NotifyName);
    void OnCompleted_F3355E1D4316C15ACD4B1A80526070EA(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_FishingSalvage(int32 EntryPoint);
}; // Size: 0x1C0

#endif
