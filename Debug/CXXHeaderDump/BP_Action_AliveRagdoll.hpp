#ifndef UE4SS_SDK_BP_Action_AliveRagdoll_HPP
#define UE4SS_SDK_BP_Action_AliveRagdoll_HPP

class UBP_Action_AliveRagdoll_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    bool IsRagdoll;                                                                   // 0x0168 (size: 0x1)
    FVector preLocation;                                                              // 0x0170 (size: 0x18)
    FTransform MeshTF;                                                                // 0x0190 (size: 0x60)
    bool EndAble;                                                                     // 0x01F0 (size: 0x1)
    FName InBoneName;                                                                 // 0x01F4 (size: 0x8)
    FName flagName;                                                                   // 0x01FC (size: 0x8)
    FName DefaultCollisionProfile;                                                    // 0x0204 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0210 (size: 0x8)
    double Scale;                                                                     // 0x0218 (size: 0x8)
    bool AomukeOrLeft;                                                                // 0x0220 (size: 0x1)
    double StartHeight;                                                               // 0x0228 (size: 0x8)

    void InWaterFloat(double DeltaTime);
    void SetDefaultMeshTF();
    void ResetActorTransform(bool SafeHeight, bool IsLineTrace);
    void DisableRagdoll();
    void BlowCharacter();
    void OnLoaded_1E91249448FAC6F71D7339ACA5AC1552(class UObject* Loaded);
    void OnNotifyEnd_508CCDFE42B5F405657ADCB4ACB4DA10(FName NotifyName);
    void OnNotifyBegin_508CCDFE42B5F405657ADCB4ACB4DA10(FName NotifyName);
    void OnInterrupted_508CCDFE42B5F405657ADCB4ACB4DA10(FName NotifyName);
    void OnBlendOut_508CCDFE42B5F405657ADCB4ACB4DA10(FName NotifyName);
    void OnCompleted_508CCDFE42B5F405657ADCB4ACB4DA10(FName NotifyName);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void SpawnStunEffect(TSoftObjectPtr<UNiagaraSystem> Path);
    void ExecuteUbergraph_BP_Action_AliveRagdoll(int32 EntryPoint);
}; // Size: 0x230

#endif
