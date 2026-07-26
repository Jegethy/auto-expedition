#ifndef UE4SS_SDK_BP_ActionCommandToPal_HPP
#define UE4SS_SDK_BP_ActionCommandToPal_HPP

class UBP_ActionCommandToPal_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0190 (size: 0x8)
    FRotator TargetRotation;                                                          // 0x0198 (size: 0x18)
    double ElapsedTime;                                                               // 0x01B0 (size: 0x8)
    FRotator CurrentRotation;                                                         // 0x01B8 (size: 0x18)

    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_ActionCommandToPal(int32 EntryPoint);
}; // Size: 0x1D0

#endif
