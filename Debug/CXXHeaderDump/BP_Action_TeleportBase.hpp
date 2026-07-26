#ifndef UE4SS_SDK_BP_Action_TeleportBase_HPP
#define UE4SS_SDK_BP_Action_TeleportBase_HPP

class UBP_Action_TeleportBase_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    FBP_Action_TeleportBase_COnActionEnd OnActionEnd;                                 // 0x0168 (size: 0x10)
    void OnActionEnd();
    FBP_Action_TeleportBase_COnTeleportAct OnTeleportAct;                             // 0x0178 (size: 0x10)
    void OnTeleportAct(FVector CurrentPosition, FVector TargetLocation);
    FVector RandomDirect;                                                             // 0x0188 (size: 0x18)
    FName Flag Name;                                                                  // 0x01A0 (size: 0x8)
    bool Moving;                                                                      // 0x01A8 (size: 0x1)
    float ReadyTime;                                                                  // 0x01AC (size: 0x4)
    FTimerHandle CurrentTimer;                                                        // 0x01B0 (size: 0x8)
    float TeleportDelay;                                                              // 0x01B8 (size: 0x4)
    bool IsInvisible;                                                                 // 0x01BC (size: 0x1)

    void EndProcess();
    void BeginProcess();
    void SetVisibleState(bool IsVisible);
    void Set Move State(bool IsDriveMove);
    void OnEndAction();
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void ActTeleport();
    void TeleportEnd();
    void ExecuteUbergraph_BP_Action_TeleportBase(int32 EntryPoint);
    void OnTeleportAct__DelegateSignature(FVector CurrentPosition, FVector TargetLocation);
    void OnActionEnd__DelegateSignature();
}; // Size: 0x1BD

#endif
