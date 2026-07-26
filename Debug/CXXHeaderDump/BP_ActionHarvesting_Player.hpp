#ifndef UE4SS_SDK_BP_ActionHarvesting_Player_HPP
#define UE4SS_SDK_BP_ActionHarvesting_Player_HPP

class UBP_ActionHarvesting_Player_C : public UBP_ActionInteractBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01B0 (size: 0x8)

    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionHarvesting_Player(int32 EntryPoint);
}; // Size: 0x1B8

#endif
