#ifndef UE4SS_SDK_BP_AIActionCombatHeli_SearchingPlayer_Field_HPP
#define UE4SS_SDK_BP_AIActionCombatHeli_SearchingPlayer_Field_HPP

class UBP_AIActionCombatHeli_SearchingPlayer_Field_C : public UBP_AIActionCombatHeliBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0168 (size: 0x8)
    FVector TargetLocation;                                                           // 0x0170 (size: 0x18)
    double SearchOrbitRadius;                                                         // 0x0188 (size: 0x8)
    double SearchAltitude;                                                            // 0x0190 (size: 0x8)
    int32 NumOrbitPoints;                                                             // 0x0198 (size: 0x4)
    TArray<FVector> OrbitWaypoints;                                                   // 0x01A0 (size: 0x10)
    int32 CurrentWaypointIndex;                                                       // 0x01B0 (size: 0x4)
    double ArrivalDistance;                                                           // 0x01B8 (size: 0x8)
    FVector PrevLocation;                                                             // 0x01C0 (size: 0x18)
    double StuckElapsedTime;                                                          // 0x01D8 (size: 0x8)
    double StuckTimeThreshold;                                                        // 0x01E0 (size: 0x8)
    double DetectionRange;                                                            // 0x01E8 (size: 0x8)
    FBP_AIActionCombatHeli_SearchingPlayer_Field_COnArrivedTargetPoint OnArrivedTargetPoint; // 0x01F0 (size: 0x10)
    void OnArrivedTargetPoint();
    FBP_AIActionCombatHeli_SearchingPlayer_Field_COnStuck OnStuck;                    // 0x0200 (size: 0x10)
    void OnStuck();
    bool bIsApproaching;                                                              // 0x0210 (size: 0x1)
    FVector ApproachPoint;                                                            // 0x0218 (size: 0x18)
    class APalAIController* AIController;                                             // 0x0230 (size: 0x8)
    class AActor* AttackTargetActor;                                                  // 0x0238 (size: 0x8)
    double DistSqr;                                                                   // 0x0240 (size: 0x8)
    int32 HeliIndex;                                                                  // 0x0248 (size: 0x4)

    void CreateLocation(int32 Index, double RadiusOffset, FVector& Location);
    void StartCombatMode(class AActor* TargetActor);
    void GenerateOrbitWaypoints();
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIActionCombatHeli_SearchingPlayer_Field(int32 EntryPoint);
    void OnStuck__DelegateSignature();
    void OnArrivedTargetPoint__DelegateSignature();
}; // Size: 0x24C

#endif
