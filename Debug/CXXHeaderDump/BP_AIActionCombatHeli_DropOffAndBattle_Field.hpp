#ifndef UE4SS_SDK_BP_AIActionCombatHeli_DropOffAndBattle_Field_HPP
#define UE4SS_SDK_BP_AIActionCombatHeli_DropOffAndBattle_Field_HPP

class UBP_AIActionCombatHeli_DropOffAndBattle_Field_C : public UBP_AIActionCombatHeliBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0168 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x0170 (size: 0x8)
    class UPalCombatHeliPoliceDropOffComponent* DropOffComponent;                     // 0x0178 (size: 0x8)
    class UBP_WorldSecurityPoliceSpawner_C* PoliceSpawnerModel;                       // 0x0180 (size: 0x8)
    TEnumAsByte<EPalHeliDropOffPhase::Type> CurrentPhase;                             // 0x0188 (size: 0x1)
    FVector HoverPoint;                                                               // 0x0190 (size: 0x18)
    double HoverTimer;                                                                // 0x01A8 (size: 0x8)
    double HoverStabilizeTime;                                                        // 0x01B0 (size: 0x8)
    double DropOffInterval;                                                           // 0x01B8 (size: 0x8)
    double DropOffTimer;                                                              // 0x01C0 (size: 0x8)
    double HoverAltitude;                                                             // 0x01C8 (size: 0x8)
    double AscendAltitude;                                                            // 0x01D0 (size: 0x8)
    double ArrivalDistance;                                                           // 0x01D8 (size: 0x8)
    FVector PrevLocation;                                                             // 0x01E0 (size: 0x18)
    double StuckElapsedTime;                                                          // 0x01F8 (size: 0x8)
    double StuckTimeThreshold;                                                        // 0x0200 (size: 0x8)
    double AscendTimer;                                                               // 0x0208 (size: 0x8)
    class APalAIController* AIController;                                             // 0x0210 (size: 0x8)
    FVector CheckLocation;                                                            // 0x0218 (size: 0x18)
    double StuckDistanceThreshold;                                                    // 0x0230 (size: 0x8)

    void FallbackAndBattleMode();
    void TickAscending(double DeltaSeconds);
    void TickDropOff(double DeltaSeconds);
    void TickHovering(double DeltaSeconds);
    void TickApproaching(double DeltaSeconds);
    void StartCombatMode();
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIActionCombatHeli_DropOffAndBattle_Field(int32 EntryPoint);
}; // Size: 0x238

#endif
