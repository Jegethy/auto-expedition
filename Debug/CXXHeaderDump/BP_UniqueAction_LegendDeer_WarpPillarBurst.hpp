#ifndef UE4SS_SDK_BP_UniqueAction_LegendDeer_WarpPillarBurst_HPP
#define UE4SS_SDK_BP_UniqueAction_LegendDeer_WarpPillarBurst_HPP

class UBP_UniqueAction_LegendDeer_WarpPillarBurst_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    TEnumAsByte<Enum_WarpPillarBurst_State::Type> State;                              // 0x02A0 (size: 0x1)
    TArray<FReserveMontage> montageList;                                              // 0x02A8 (size: 0x10)
    FTimerHandle CurrentTimer;                                                        // 0x02B8 (size: 0x8)
    float ChargeTime;                                                                 // 0x02C0 (size: 0x4)
    float AttackTime;                                                                 // 0x02C4 (size: 0x4)
    class ABP_UniqueSkillEffect_LegendDeer_WarpPillarBurst_Charge_C* ChargeEffect;    // 0x02C8 (size: 0x8)
    double Warp Destination Distance;                                                 // 0x02D0 (size: 0x8)
    double Warp Destination Distance Map Object;                                      // 0x02D8 (size: 0x8)
    class APalCharacter* CacheRider;                                                  // 0x02E0 (size: 0x8)
    bool HasControlled;                                                               // 0x02E8 (size: 0x1)

    void Check Warp Location Ride(FVector& Location, FRotator& DirectRot, bool& TraceTooClose);
    void Reset Player State(class AActor* RideActor);
    void SwitchWarpEffect(bool IsWarpIn);
    void IsUniqueMontage(class UAnimMontage* Montage, bool& Return);
    void GetMontageByState(TArray<FReserveMontage>& List);
    void OnBeginAction();
    void OnEndAction();
    void OnMontageEnd(class UAnimMontage* Montage, bool bInterrupted);
    void WarpOut();
    void ChargeEnd();
    void AttackEnd();
    void ExecuteUbergraph_BP_UniqueAction_LegendDeer_WarpPillarBurst(int32 EntryPoint);
}; // Size: 0x2E9

#endif
