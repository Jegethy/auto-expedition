#ifndef UE4SS_SDK_WBP_AssignBoard_PalSlot_Assigned_HPP
#define UE4SS_SDK_WBP_AssignBoard_PalSlot_Assigned_HPP

class UWBP_AssignBoard_PalSlot_Assigned_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWBP_AssignBoard_PalSlot_C* WBP_AssignBoard_PalSlot;                        // 0x0280 (size: 0x8)

    void SetSuitability(EPalWorkSuitability Suitability);
    void SetEmpty();
    void SetIndividualParameter(class UPalIndividualCharacterParameter* Parameter);
    void Construct();
    void ExecuteUbergraph_WBP_AssignBoard_PalSlot_Assigned(int32 EntryPoint);
}; // Size: 0x288

#endif
