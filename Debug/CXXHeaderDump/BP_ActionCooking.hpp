#ifndef UE4SS_SDK_BP_ActionCooking_HPP
#define UE4SS_SDK_BP_ActionCooking_HPP

class UBP_ActionCooking_C : public UBP_ActionInteractBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01B0 (size: 0x8)

    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionCooking(int32 EntryPoint);
}; // Size: 0x1B8

#endif
