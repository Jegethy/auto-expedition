#ifndef UE4SS_SDK_BP_ActionPlanting_Player_HPP
#define UE4SS_SDK_BP_ActionPlanting_Player_HPP

class UBP_ActionPlanting_Player_C : public UBP_ActionInteractBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01B0 (size: 0x8)
    FName flagName;                                                                   // 0x01B8 (size: 0x8)

    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionPlanting_Player(int32 EntryPoint);
}; // Size: 0x1C0

#endif
