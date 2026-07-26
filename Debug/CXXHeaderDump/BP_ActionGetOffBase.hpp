#ifndef UE4SS_SDK_BP_ActionGetOffBase_HPP
#define UE4SS_SDK_BP_ActionGetOffBase_HPP

class UBP_ActionGetOffBase_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    EPalActionType ActionType;                                                        // 0x0168 (size: 0x1)
    double JumpVelocity;                                                              // 0x0170 (size: 0x8)
    bool bPlayJump;                                                                   // 0x0178 (size: 0x1)
    FVector Player Velocity;                                                          // 0x0180 (size: 0x18)
    class APalCharacter* RidePal;                                                     // 0x0198 (size: 0x8)
    FVector ActionVelocity;                                                           // 0x01A0 (size: 0x18)
    double VelocityLimit;                                                             // 0x01B8 (size: 0x8)

    void FindMontage(class UAnimMontage*& Montage, bool& Exist);
    void OnNotifyEnd_6FCB806A490F13A95ECF158CB239855B(FName NotifyName);
    void OnNotifyBegin_6FCB806A490F13A95ECF158CB239855B(FName NotifyName);
    void OnInterrupted_6FCB806A490F13A95ECF158CB239855B(FName NotifyName);
    void OnBlendOut_6FCB806A490F13A95ECF158CB239855B(FName NotifyName);
    void OnCompleted_6FCB806A490F13A95ECF158CB239855B(FName NotifyName);
    void OnEndAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionGetOffBase(int32 EntryPoint);
}; // Size: 0x1C0

#endif
