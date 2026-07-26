#ifndef UE4SS_SDK_BP_Action_Unique_Anubis_GroundPunch_HPP
#define UE4SS_SDK_BP_Action_Unique_Anubis_GroundPunch_HPP

class UBP_Action_Unique_Anubis_GroundPunch_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    double DefaultJumpZ;                                                              // 0x02A0 (size: 0x8)
    double JumpZVelocity;                                                             // 0x02A8 (size: 0x8)
    double GravityRate;                                                               // 0x02B0 (size: 0x8)
    FName flagName_0;                                                                 // 0x02B8 (size: 0x8)
    TEnumAsByte<EAction_Anubis_GroundPunchState::Type> State;                         // 0x02C0 (size: 0x1)
    FVector2D TargetLocation;                                                         // 0x02C8 (size: 0x10)
    FVector2D StartLocation;                                                          // 0x02D8 (size: 0x10)
    double MovementTimer;                                                             // 0x02E8 (size: 0x8)
    double MovementTime;                                                              // 0x02F0 (size: 0x8)
    double StateChangeVelocityZ;                                                      // 0x02F8 (size: 0x8)
    double StateChangeGroundRange;                                                    // 0x0300 (size: 0x8)
    double AdditionalTargetingTime;                                                   // 0x0308 (size: 0x8)
    class UNiagaraComponent* OmenEffect;                                              // 0x0310 (size: 0x8)

    void StopMontage();
    void ActivateOmenEffect();
    void Update Effect Location(double DeltaTime);
    void Set Target Location();
    void TerminateMovementState();
    void MovementActor(double DeltaTime);
    void OnNotifyEnd_3EAF69114CDC3D3144F4EBB8A4E9DFF5(FName NotifyName);
    void OnNotifyBegin_3EAF69114CDC3D3144F4EBB8A4E9DFF5(FName NotifyName);
    void OnInterrupted_3EAF69114CDC3D3144F4EBB8A4E9DFF5(FName NotifyName);
    void OnBlendOut_3EAF69114CDC3D3144F4EBB8A4E9DFF5(FName NotifyName);
    void OnCompleted_3EAF69114CDC3D3144F4EBB8A4E9DFF5(FName NotifyName);
    void TickAction(float DeltaTime);
    void OnEndAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch(int32 EntryPoint);
}; // Size: 0x318

#endif
