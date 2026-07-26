#ifndef UE4SS_SDK_BP_ActionUnlockCagePalLock_HPP
#define UE4SS_SDK_BP_ActionUnlockCagePalLock_HPP

class UBP_ActionUnlockCagePalLock_C : public UBP_ActionInteractBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01B0 (size: 0x8)
    FName flagName;                                                                   // 0x01B8 (size: 0x8)
    class UAkAudioEvent* AkEventUnlockCage;                                           // 0x01C0 (size: 0x8)

    void RotateToLockModel();
    void OnEndAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionUnlockCagePalLock(int32 EntryPoint);
}; // Size: 0x1C8

#endif
