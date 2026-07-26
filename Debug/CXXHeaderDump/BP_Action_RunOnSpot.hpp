#ifndef UE4SS_SDK_BP_Action_RunOnSpot_HPP
#define UE4SS_SDK_BP_Action_RunOnSpot_HPP

class UBP_Action_RunOnSpot_C : public UPalAction_RunOnSpot
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)

    void SetActionCharacterGravity(bool bOn);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_RunOnSpot(int32 EntryPoint);
}; // Size: 0x168

#endif
