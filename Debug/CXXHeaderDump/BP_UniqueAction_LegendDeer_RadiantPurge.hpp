#ifndef UE4SS_SDK_BP_UniqueAction_LegendDeer_RadiantPurge_HPP
#define UE4SS_SDK_BP_UniqueAction_LegendDeer_RadiantPurge_HPP

class UBP_UniqueAction_LegendDeer_RadiantPurge_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    TArray<FReserveMontage> Montage List;                                             // 0x02A0 (size: 0x10)
    TEnumAsByte<Enum_RadiantPurge_State::Type> CurrentState;                          // 0x02B0 (size: 0x1)
    FTimerHandle CurrentTimer;                                                        // 0x02B8 (size: 0x8)
    double ChargeTime;                                                                // 0x02C0 (size: 0x8)
    double ActTime;                                                                   // 0x02C8 (size: 0x8)
    double WearyTime;                                                                 // 0x02D0 (size: 0x8)
    FVector Target Location;                                                          // 0x02D8 (size: 0x18)
    double MoveSpeed;                                                                 // 0x02F0 (size: 0x8)
    bool Landing;                                                                     // 0x02F8 (size: 0x1)
    double MoveHeight;                                                                // 0x0300 (size: 0x8)
    bool EnableRotate;                                                                // 0x0308 (size: 0x1)
    class ABP_UniqueSkillEffect_LegendDeer_RadiantPurge_Ball_C* BallEffect;           // 0x0310 (size: 0x8)
    double PurgeRadius;                                                               // 0x0318 (size: 0x8)
    FBP_UniqueAction_LegendDeer_RadiantPurge_COnWeary OnWeary;                        // 0x0320 (size: 0x10)
    void OnWeary(bool IsEnd);
    double Height_Ball;                                                               // 0x0330 (size: 0x8)
    bool Casting;                                                                     // 0x0338 (size: 0x1)
    double OffsetAlpha;                                                               // 0x0340 (size: 0x8)
    bool LocalCameraAdjusted;                                                         // 0x0348 (size: 0x1)
    class APalCharacter* LocalRidePal;                                                // 0x0350 (size: 0x8)
    int32 RockCount;                                                                  // 0x0358 (size: 0x4)
    double RockDistance;                                                              // 0x0360 (size: 0x8)
    double RockRandomRange;                                                           // 0x0368 (size: 0x8)
    bool First Radiant Purge;                                                         // 0x0370 (size: 0x1)

    void StateExtraProcess();
    void Spawn Rock();
    void SwitchLocalCameraAdjust(bool ToAdjust);
    void TickAction(float DeltaTime);
    void GetMontageListByState(TArray<FReserveMontage>& Montages);
    void OnNotifyEnd_B3E3296545AD7E4C4A3F1398BAB72990(FName NotifyName);
    void OnNotifyBegin_B3E3296545AD7E4C4A3F1398BAB72990(FName NotifyName);
    void OnInterrupted_B3E3296545AD7E4C4A3F1398BAB72990(FName NotifyName);
    void OnBlendOut_B3E3296545AD7E4C4A3F1398BAB72990(FName NotifyName);
    void OnCompleted_B3E3296545AD7E4C4A3F1398BAB72990(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void ProcessState();
    void OnNotifyBegin(class UAnimMontage* Montage, FName NotifyName);
    void OnMontageEnd(class UAnimMontage* Montage, bool bInterrupted);
    void SetRotateEnable();
    void ExecuteUbergraph_BP_UniqueAction_LegendDeer_RadiantPurge(int32 EntryPoint);
    void OnWeary__DelegateSignature(bool IsEnd);
}; // Size: 0x371

#endif
