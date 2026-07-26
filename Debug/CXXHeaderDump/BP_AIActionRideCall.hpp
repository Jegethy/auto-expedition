#ifndef UE4SS_SDK_BP_AIActionRideCall_HPP
#define UE4SS_SDK_BP_AIActionRideCall_HPP

class UBP_AIActionRideCall_C : public UBP_AIAction_CallBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0188 (size: 0x8)
    double NotifyTimer;                                                               // 0x0190 (size: 0x8)
    double Const_NotifyInterval;                                                      // 0x0198 (size: 0x8)

    void CheckWallRaycast(bool& HitWall);
    void CanRide(bool& CanRide);
    void DoRide(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionPause(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIActionRideCall(int32 EntryPoint);
}; // Size: 0x1A0

#endif
