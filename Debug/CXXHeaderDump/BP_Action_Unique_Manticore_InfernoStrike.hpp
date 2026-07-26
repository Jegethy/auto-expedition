#ifndef UE4SS_SDK_BP_Action_Unique_Manticore_InfernoStrike_HPP
#define UE4SS_SDK_BP_Action_Unique_Manticore_InfernoStrike_HPP

class UBP_Action_Unique_Manticore_InfernoStrike_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBP_UniqueSkillModule_Tackle_C* TackleModule;                               // 0x02A0 (size: 0x8)
    double CheckDistanceAngle;                                                        // 0x02A8 (size: 0x8)
    double CheckStartJumpDistance;                                                    // 0x02B0 (size: 0x8)
    FVector StartLocation;                                                            // 0x02B8 (size: 0x18)
    FVector TargetLocation;                                                           // 0x02D0 (size: 0x18)
    class UCurveVector* JumpCurveVector;                                              // 0x02E8 (size: 0x8)
    double JumpHeight;                                                                // 0x02F0 (size: 0x8)
    double JumpTimer;                                                                 // 0x02F8 (size: 0x8)
    double TargetLocationOffset;                                                      // 0x0300 (size: 0x8)
    bool IsJump;                                                                      // 0x0308 (size: 0x1)

    void Get TargetLocation(FVector _StartLocation, FVector& Location);
    void Get Jump Location(FVector _StartLocation, FVector _TargetLocation, class UCurveVector* _CurveVEctor, double _JumpHeight, double _Time, FVector& Location);
    void MovementActor(double DeltaTime);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void OnModuleCompletedEndMontage();
    void OnModuleEndAttack();
    void OnModuleMontageNotify(class UAnimMontage* Montage, FName NotifyName);
    void ExecuteUbergraph_BP_Action_Unique_Manticore_InfernoStrike(int32 EntryPoint);
}; // Size: 0x309

#endif
