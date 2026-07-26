#ifndef UE4SS_SDK_BP_Fishing_CaughtJumpModule_HPP
#define UE4SS_SDK_BP_Fishing_CaughtJumpModule_HPP

class UBP_Fishing_CaughtJumpModule_C : public UObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0028 (size: 0x8)
    FVector JumpStartLocation;                                                        // 0x0030 (size: 0x18)
    FVector JumpEndLocation;                                                          // 0x0048 (size: 0x18)
    double JumpTimer;                                                                 // 0x0060 (size: 0x8)
    double JumpHeight;                                                                // 0x0068 (size: 0x8)
    double JumpAlpha;                                                                 // 0x0070 (size: 0x8)
    double JumpApproachToPlayerDistance;                                              // 0x0078 (size: 0x8)
    class APalCharacter* OwnerCharacter;                                              // 0x0080 (size: 0x8)
    class AActor* JumpActor;                                                          // 0x0088 (size: 0x8)

    void UpdateCutscenePalLocation(double DeltaTime);
    void GetJumpEndLocation(FVector StartLocation, FVector& EndLocation);
    void CalculateArcPositionAtTime(double DeltaTime, FVector StartLocation, FVector TargetLocation, FVector& Location, double& location_x, double& location_y, double& Location_Z);
    void Initialize(class APalCharacter* OwnerCharacter, class AActor* JumpActor);
    void SetupJump(FVector StartLocation);
    void Destroy();
    void ExecuteUbergraph_BP_Fishing_CaughtJumpModule(int32 EntryPoint);
}; // Size: 0x90

#endif
