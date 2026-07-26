#ifndef UE4SS_SDK_BP_Action_WaitLoadingWorldPartition_HPP
#define UE4SS_SDK_BP_Action_WaitLoadingWorldPartition_HPP

class UBP_Action_WaitLoadingWorldPartition_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    FName flagName;                                                                   // 0x0168 (size: 0x8)
    double DelayTime;                                                                 // 0x0170 (size: 0x8)
    double DelayTimer;                                                                // 0x0178 (size: 0x8)
    class APalPlayerCharacter* PlayerCharacter;                                       // 0x0180 (size: 0x8)
    double TimeoutTimer;                                                              // 0x0188 (size: 0x8)
    bool IsLoaded;                                                                    // 0x0190 (size: 0x1)
    FVector WaitWPLocation;                                                           // 0x0198 (size: 0x18)
    FTimerHandle TimerHandle;                                                         // 0x01B0 (size: 0x8)
    double forGroundTimer;                                                            // 0x01B8 (size: 0x8)
    double forWaterTimer;                                                             // 0x01C0 (size: 0x8)
    bool IsShortRayLength;                                                            // 0x01C8 (size: 0x1)
    bool bActionBreaked;                                                              // 0x01C9 (size: 0x1)
    FVector QueuedTimingLocation;                                                     // 0x01D0 (size: 0x18)
    bool bAdjustedToFloor;                                                            // 0x01E8 (size: 0x1)
    bool bTeleportedToSafePointByTimeOut;                                             // 0x01E9 (size: 0x1)

    void OnCompleteLoadedWorldPartitionAndAdjustCharacter();
    void CheckDistanceAgainstQueueTimingLocation(bool& NeedCorrection);
    void Dev_GetStringOfActorLocationAndLoadingLocation(FString& String_ActorLocationAndLoadingLocation);
    void CheckEndAction(double DeltaTime, bool& IsEnd);
    void IsWaterActor(class AActor* TargetActor, bool& IsWater);
    void CheckGround(TEnumAsByte<EGroundHitResult::Type>& Result);
    void CanTimeout(bool& CanTimeout);
    void RequestWaitWorldPartition();
    void CheckLoadLocationDistance(double Threshold, bool& IsFarEnough);
    void GetFadeOutParameter(class UPalHUDDispatchParameter_FadeWidget*& NewParam);
    void ResetCamera();
    void SetMoveDisable(bool Disable);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void OnCompleteLoad();
    void OnBreakAction();
    void OnQueueAction();
    void ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition(int32 EntryPoint);
}; // Size: 0x1EA

#endif
