#ifndef UE4SS_SDK_BP_ActionDigOut_HPP
#define UE4SS_SDK_BP_ActionDigOut_HPP

class UBP_ActionDigOut_C : public UBP_ActionInteractBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01B0 (size: 0x8)
    FName flagName;                                                                   // 0x01B8 (size: 0x8)
    class UAkAudioEvent* AkEventPlayerCrafting;                                       // 0x01C0 (size: 0x8)

    void OnEndAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionDigOut(int32 EntryPoint);
}; // Size: 0x1C8

#endif
