#ifndef UE4SS_SDK_BP_Action_Unique_WhiteShieldDragon_ShieldTackle_HPP
#define UE4SS_SDK_BP_Action_Unique_WhiteShieldDragon_ShieldTackle_HPP

class UBP_Action_Unique_WhiteShieldDragon_ShieldTackle_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    TArray<FTimerHandle> TimerHandles;                                                // 0x02A0 (size: 0x10)
    class UBP_UniqueSkillModule_Tackle_C* TackleModule;                               // 0x02B0 (size: 0x8)
    double PassThroughAngleThreshold;                                                 // 0x02B8 (size: 0x8)
    double EndAttackDistance;                                                         // 0x02C0 (size: 0x8)
    FVector ShieldLocationOffset;                                                     // 0x02C8 (size: 0x18)
    double ShiledScaleForBoss;                                                        // 0x02E0 (size: 0x8)
    FTimerHandle CameraShakeTimer;                                                    // 0x02E8 (size: 0x8)
    double MinTackleDuration;                                                         // 0x02F0 (size: 0x8)
    double TackleDuration;                                                            // 0x02F8 (size: 0x8)

    void On Montage Notify(class UAnimMontage* Montage, FName NotifyName);
    void CheckObjectAttack(bool& CanAttackObject);
    void OnEndAction();
    void OnModuleCompletedEndMontage();
    void TickAction(float DeltaTime);
    void OnBeginAction();
    void PlayCameraShake();
    void ExecuteUbergraph_BP_Action_Unique_WhiteShieldDragon_ShieldTackle(int32 EntryPoint);
}; // Size: 0x300

#endif
