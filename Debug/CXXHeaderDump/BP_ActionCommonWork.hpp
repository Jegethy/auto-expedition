#ifndef UE4SS_SDK_BP_ActionCommonWork_HPP
#define UE4SS_SDK_BP_ActionCommonWork_HPP

class UBP_ActionCommonWork_C : public UBP_ActionInteractBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01B0 (size: 0x8)
    FName flagName;                                                                   // 0x01B8 (size: 0x8)
    class UAkAudioEvent* AkEventPlayerCrafting;                                       // 0x01C0 (size: 0x8)
    int32 PlayingID;                                                                  // 0x01C8 (size: 0x4)

    void OnEndAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionCommonWork(int32 EntryPoint);
}; // Size: 0x1CC

#endif
