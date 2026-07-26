#ifndef UE4SS_SDK_BP_Action_GrapplingBase_HPP
#define UE4SS_SDK_BP_Action_GrapplingBase_HPP

class UBP_Action_GrapplingBase_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    double JumpPower;                                                                 // 0x0168 (size: 0x8)
    bool IsEndCompleted;                                                              // 0x0170 (size: 0x1)
    FQuat MeshRotationCache;                                                          // 0x0180 (size: 0x20)
    FVector MeshLocationCache;                                                        // 0x01A0 (size: 0x18)
    class UAkAudioEvent* ReelingSE;                                                   // 0x01B8 (size: 0x8)
    class UNiagaraSystem* HitPointEffect;                                             // 0x01C0 (size: 0x8)

    bool CanInterruptByMovementModeAction();
    void EndProcess();
    void UpdateMeshRotation(float DeltaTime);
    void SetCharacterVelocity(FVector Velocity);
    void NotifyStartToWeapon(FVector HitLocation, double CoolTimeRate);
    void NotifyFinishToWeapon();
    void OnNotifyEnd_284045CE4BC4B2D43CCB2E9B3225F0C8(FName NotifyName);
    void OnNotifyBegin_284045CE4BC4B2D43CCB2E9B3225F0C8(FName NotifyName);
    void OnInterrupted_284045CE4BC4B2D43CCB2E9B3225F0C8(FName NotifyName);
    void OnBlendOut_284045CE4BC4B2D43CCB2E9B3225F0C8(FName NotifyName);
    void OnCompleted_284045CE4BC4B2D43CCB2E9B3225F0C8(FName NotifyName);
    void OnBeginAction();
    void OnBreakAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_GrapplingBase(int32 EntryPoint);
}; // Size: 0x1C8

#endif
