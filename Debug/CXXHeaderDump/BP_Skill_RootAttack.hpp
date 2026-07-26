#ifndef UE4SS_SDK_BP_Skill_RootAttack_HPP
#define UE4SS_SDK_BP_Skill_RootAttack_HPP

class ABP_Skill_RootAttack_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNiagaraComponent* RootAttack;                                              // 0x0438 (size: 0x8)
    double UnlockDistance;                                                            // 0x0440 (size: 0x8)
    double HomingStrength;                                                            // 0x0448 (size: 0x8)
    FVector InitVector;                                                               // 0x0450 (size: 0x18)
    double Distance;                                                                  // 0x0468 (size: 0x8)
    float Duration;                                                                   // 0x0470 (size: 0x4)
    float RoadInterval;                                                               // 0x0474 (size: 0x4)
    FTimerHandle RoadSpawnTimer;                                                      // 0x0478 (size: 0x8)
    FTimerHandle AttackTimer;                                                         // 0x0480 (size: 0x8)
    FTimerHandle CloseAttackTimer;                                                    // 0x0488 (size: 0x8)
    FVector AddVector;                                                                // 0x0490 (size: 0x18)
    class AActor* RideTarget;                                                         // 0x04A8 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void SetInitVector(FVector Vector);
    void Attack();
    void SetUseRideTarget(class AActor* RideTarget);
    void ExecuteUbergraph_BP_Skill_RootAttack(int32 EntryPoint);
}; // Size: 0x4B0

#endif
