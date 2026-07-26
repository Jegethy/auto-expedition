#ifndef UE4SS_SDK_BP_Fishing_CatchBattle_Behavior_HPP
#define UE4SS_SDK_BP_Fishing_CatchBattle_Behavior_HPP

class UBP_Fishing_CatchBattle_Behavior_C : public UPalFishingCatchBattleBehaviorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0028 (size: 0x8)
    EPalFishBattleBehaviorType BehaviorType;                                          // 0x0030 (size: 0x1)
    double Difficulty;                                                                // 0x0038 (size: 0x8)
    double CurrentPosX;                                                               // 0x0040 (size: 0x8)
    double TargetPosX;                                                                // 0x0048 (size: 0x8)
    double MaxPosX;                                                                   // 0x0050 (size: 0x8)
    double StartPosX;                                                                 // 0x0058 (size: 0x8)
    double TargetChangeTimer;                                                         // 0x0060 (size: 0x8)
    double TargetPosMultiplier;                                                       // 0x0068 (size: 0x8)
    double TargetRandMin;                                                             // 0x0070 (size: 0x8)
    double TargetRandMax;                                                             // 0x0078 (size: 0x8)
    double IntervalMin;                                                               // 0x0080 (size: 0x8)
    double IntervalMax;                                                               // 0x0088 (size: 0x8)
    double IntervalMultiplier;                                                        // 0x0090 (size: 0x8)
    double EaseAlpha;                                                                 // 0x0098 (size: 0x8)
    bool IsMoving;                                                                    // 0x00A0 (size: 0x1)
    double arrivetime;                                                                // 0x00A8 (size: 0x8)
    double SinkerDiverSpeed;                                                          // 0x00B0 (size: 0x8)
    double SinkerDiverBias;                                                           // 0x00B8 (size: 0x8)
    FString DebugString;                                                              // 0x00C0 (size: 0x10)
    double MinPosX;                                                                   // 0x00D0 (size: 0x8)
    bool IsFloatWhileNotMove;                                                         // 0x00D8 (size: 0x1)
    EPalFishBattleBehaviorType FishingBehavoirType;                                   // 0x00D9 (size: 0x1)
    bool PreMoveRight;                                                                // 0x00DA (size: 0x1)
    double TiredDistance;                                                             // 0x00E0 (size: 0x8)
    double TiredDistanceSetting;                                                      // 0x00E8 (size: 0x8)
    bool IsTired;                                                                     // 0x00F0 (size: 0x1)
    double TiredInterval;                                                             // 0x00F8 (size: 0x8)
    double TiredIntervalSetting;                                                      // 0x0100 (size: 0x8)
    double RandomMoveMod;                                                             // 0x0108 (size: 0x8)

    void OverRideDistance(double Distance, double& mod_distance);
    void OverRideNotMove_DiverRiser(double DeltaTime, double mod);
    void OverRideArrivalTime_Calm(double arrivetime, double& mod_arrivetime);
    void Tick Calc Fish Pos X(double DeltaTime, double& FishPosX);
    void Get Predict Arrival Time(double Distance, double& ArrivalTime);
    void GetIsChangeNextInterval(double Difficulty, int32 SameDirection, bool& IsChange);
    void UpdateNextTarget(double NextTargetPosX, double Distance);
    void Get Next Target Pos X(double CurrentPosX, bool ForceUp, double mod, double max_Clamp, double& Distance, double& NextTargetPos, bool& IsMoveRight);
    void ClampLimitPos(double PosX, double& ClampedPosX);
    void GetDirection(double& Direction);
    void GetNextInterval(double& NextInterval);
    void Initialize(const FPalFishingCatchBattleInfo& Info);
    void OnInitialized();
    void ExecuteUbergraph_BP_Fishing_CatchBattle_Behavior(int32 EntryPoint);
}; // Size: 0x110

#endif
