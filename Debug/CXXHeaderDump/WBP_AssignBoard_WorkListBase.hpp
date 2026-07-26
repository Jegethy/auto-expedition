#ifndef UE4SS_SDK_WBP_AssignBoard_WorkListBase_HPP
#define UE4SS_SDK_WBP_AssignBoard_WorkListBase_HPP

class UWBP_AssignBoard_WorkListBase_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    FPalUIBaseCampWorkFixedAssignInfo MyAssignInfo;                                   // 0x0280 (size: 0x10)
    FWBP_AssignBoard_WorkListBase_COnSelected OnSelected;                             // 0x0290 (size: 0x10)
    void OnSelected(class UWBP_AssignBoard_WorkListBase_C* Widget);
    FWBP_AssignBoard_WorkListBase_COnHovered OnHovered;                               // 0x02A0 (size: 0x10)
    void OnHovered(class UWBP_AssignBoard_WorkListBase_C* Widget);
    FWBP_AssignBoard_WorkListBase_COnUnhovered OnUnhovered;                           // 0x02B0 (size: 0x10)
    void OnUnhovered(class UWBP_AssignBoard_WorkListBase_C* Widget);
    bool IsFirstSetup;                                                                // 0x02C0 (size: 0x1)

    void GetFocusTarget(class UWidget*& TargetWidget);
    void Unbind();
    void NotifySelect();
    void GetAssignInfo(FPalUIBaseCampWorkFixedAssignInfo& AssignInfo);
    void Setup();
    void SetAssignInfo(FPalUIBaseCampWorkFixedAssignInfo AssignInfo);
    void AnmEvent_Select();
    void AnmEvent_Unselect();
    void AnmEvent_Enable();
    void AnmEvent_DIsable();
    void ExecuteUbergraph_WBP_AssignBoard_WorkListBase(int32 EntryPoint);
    void OnUnhovered__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget);
    void OnHovered__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget);
    void OnSelected__DelegateSignature(class UWBP_AssignBoard_WorkListBase_C* Widget);
}; // Size: 0x2C1

#endif
