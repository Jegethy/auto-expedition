#ifndef UE4SS_SDK_BP_Action_CancelJump_HPP
#define UE4SS_SDK_BP_Action_CancelJump_HPP

class UBP_Action_CancelJump_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    class UAnimMontage* Montage;                                                      // 0x0168 (size: 0x8)
    FVector MoveVelocity;                                                             // 0x0170 (size: 0x18)
    double Timer;                                                                     // 0x0188 (size: 0x8)
    class UCurveFloat* MoveCurve;                                                     // 0x0190 (size: 0x8)
    double MaxSpeed;                                                                  // 0x0198 (size: 0x8)

    void GetMontage(bool& Success, class UAnimMontage*& Montage);
    void OnNotifyEnd_58F171F54216B568591C1B85CC3DA632(FName NotifyName);
    void OnNotifyBegin_58F171F54216B568591C1B85CC3DA632(FName NotifyName);
    void OnInterrupted_58F171F54216B568591C1B85CC3DA632(FName NotifyName);
    void OnBlendOut_58F171F54216B568591C1B85CC3DA632(FName NotifyName);
    void OnCompleted_58F171F54216B568591C1B85CC3DA632(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_CancelJump(int32 EntryPoint);
}; // Size: 0x1A0

#endif
