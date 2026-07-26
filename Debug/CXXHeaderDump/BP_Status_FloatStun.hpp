#ifndef UE4SS_SDK_BP_Status_FloatStun_HPP
#define UE4SS_SDK_BP_Status_FloatStun_HPP

class UBP_Status_FloatStun_C : public UPalStatusBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class UPalAIActionBase* AIActionFreeze;                                           // 0x00B8 (size: 0x8)
    FName CommonFlagName;                                                             // 0x00C0 (size: 0x8)
    FVector CacheLocation;                                                            // 0x00C8 (size: 0x18)
    FRotator CacheRotation;                                                           // 0x00E0 (size: 0x18)
    float CacheGravity;                                                               // 0x00F8 (size: 0x4)
    bool ReturnRot;                                                                   // 0x00FC (size: 0x1)
    FRotator RandomRot;                                                               // 0x0100 (size: 0x18)
    TArray<EPalStatusID> OriginalDisableAddStatus;                                    // 0x0118 (size: 0x10)
    bool IsInitialized;                                                               // 0x0128 (size: 0x1)

    void SetFlag(bool IsFreeze);
    void TickStatus(float DeltaTime);
    void OnBeginStatus();
    void OnEndStatus();
    void ActDrop();
    void OnTargetDead(FPalDeadInfo DeadInfo);
    void ExecuteUbergraph_BP_Status_FloatStun(int32 EntryPoint);
}; // Size: 0x129

#endif
