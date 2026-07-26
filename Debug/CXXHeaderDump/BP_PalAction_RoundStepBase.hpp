#ifndef UE4SS_SDK_BP_PalAction_RoundStepBase_HPP
#define UE4SS_SDK_BP_PalAction_RoundStepBase_HPP

class UBP_PalAction_RoundStepBase_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    class UAnimMontage* Montage;                                                      // 0x0168 (size: 0x8)
    EPalActionType SideStepType;                                                      // 0x0170 (size: 0x1)
    FName Flag Name;                                                                  // 0x0174 (size: 0x8)
    double MoveFrontScale;                                                            // 0x0180 (size: 0x8)
    double MoveSideScale;                                                             // 0x0188 (size: 0x8)
    class UABP_MonsterBase_C* As ABP Monster Base;                                    // 0x0190 (size: 0x8)
    bool DisableLean;                                                                 // 0x0198 (size: 0x1)

    void GetMoveScale3D(class APalCharacter* Character, FVector& MoveScale3D);
    void GetMoveFrontScale(class APalCharacter* Character, double& MoveFrontScale);
    FVector GetStepLocation(class APalCharacter* ActionCharacter);
    void OnNotifyEnd_C2D8D2AC4976D03696B667A8CCBBF625(FName NotifyName);
    void OnNotifyBegin_C2D8D2AC4976D03696B667A8CCBBF625(FName NotifyName);
    void OnInterrupted_C2D8D2AC4976D03696B667A8CCBBF625(FName NotifyName);
    void OnBlendOut_C2D8D2AC4976D03696B667A8CCBBF625(FName NotifyName);
    void OnCompleted_C2D8D2AC4976D03696B667A8CCBBF625(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_PalAction_RoundStepBase(int32 EntryPoint);
}; // Size: 0x199

#endif
