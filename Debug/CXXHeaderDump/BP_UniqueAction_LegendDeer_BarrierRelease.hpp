#ifndef UE4SS_SDK_BP_UniqueAction_LegendDeer_BarrierRelease_HPP
#define UE4SS_SDK_BP_UniqueAction_LegendDeer_BarrierRelease_HPP

class UBP_UniqueAction_LegendDeer_BarrierRelease_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    TArray<FReserveMontage> Montage List;                                             // 0x02A0 (size: 0x10)
    float ReleaseTime;                                                                // 0x02B0 (size: 0x4)
    FTimerHandle ReleaseTimer;                                                        // 0x02B8 (size: 0x8)
    class ABP_UniqueSkillEffect_LegendDeer_BarrierRelease_Barrier_C* Barrier;         // 0x02C0 (size: 0x8)
    FBP_UniqueAction_LegendDeer_BarrierRelease_COnBarrierBreak OnBarrierBreak;        // 0x02C8 (size: 0x10)
    void OnBarrierBreak(bool IsRelease);
    bool CurrentLocalMarking;                                                         // 0x02D8 (size: 0x1)
    EPalElementType Weak Element Type;                                                // 0x02D9 (size: 0x1)
    FVector LockLocation;                                                             // 0x02E0 (size: 0x18)
    bool LocationLocked;                                                              // 0x02F8 (size: 0x1)

    void SetMoveState_Collision(bool isDisable);
    void Local Warning Sign(bool IsAdd);
    void GetReleaseClass(TSubclassOf<class ABP_UniqueSkillEffect_LegendDeer_BarrierRelease_Release_C>& Class);
    void GetBarrierClass(TSubclassOf<class ABP_UniqueSkillEffect_LegendDeer_BarrierRelease_Barrier_C>& Class);
    void BarrierBreak();
    void OnNotifyEnd_D0DA816D4994816C14E2EFBFEE248597(FName NotifyName);
    void OnNotifyBegin_D0DA816D4994816C14E2EFBFEE248597(FName NotifyName);
    void OnInterrupted_D0DA816D4994816C14E2EFBFEE248597(FName NotifyName);
    void OnBlendOut_D0DA816D4994816C14E2EFBFEE248597(FName NotifyName);
    void OnCompleted_D0DA816D4994816C14E2EFBFEE248597(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void ReleaseBarrier();
    void OnMontageEnd(class UAnimMontage* Montage, bool bInterrupted);
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_UniqueAction_LegendDeer_BarrierRelease(int32 EntryPoint);
    void OnBarrierBreak__DelegateSignature(bool IsRelease);
}; // Size: 0x2F9

#endif
