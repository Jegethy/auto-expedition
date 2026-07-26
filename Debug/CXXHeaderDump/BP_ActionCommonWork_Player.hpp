#ifndef UE4SS_SDK_BP_ActionCommonWork_Player_HPP
#define UE4SS_SDK_BP_ActionCommonWork_Player_HPP

class UBP_ActionCommonWork_Player_C : public UBP_ActionInteractBase_Player_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01C0 (size: 0x8)
    FName flagName;                                                                   // 0x01C8 (size: 0x8)
    class UAkAudioEvent* AkEventPlayerCrafting;                                       // 0x01D0 (size: 0x8)
    int32 PlayingID;                                                                  // 0x01D8 (size: 0x4)

    void OnEndAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionCommonWork_Player(int32 EntryPoint);
}; // Size: 0x1DC

#endif
