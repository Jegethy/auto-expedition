#ifndef UE4SS_SDK_BP_Action_Grappling_HPP
#define UE4SS_SDK_BP_Action_Grappling_HPP

class UBP_Action_Grappling_C : public UBP_Action_GrapplingBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01C8 (size: 0x8)
    FName flagName;                                                                   // 0x01D0 (size: 0x8)

    void TryClime();
    void EndProcess();
    void GetOffRide();
    void DisableShooter(bool Disable);
    void OnBeginAction();
    void ExecuteUbergraph_BP_Action_Grappling(int32 EntryPoint);
}; // Size: 0x1D8

#endif
