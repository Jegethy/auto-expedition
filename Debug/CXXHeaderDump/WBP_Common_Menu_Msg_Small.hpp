#ifndef UE4SS_SDK_WBP_Common_Menu_Msg_Small_HPP
#define UE4SS_SDK_WBP_Common_Menu_Msg_Small_HPP

class UWBP_Common_Menu_Msg_Small_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_InToOut;                                              // 0x0280 (size: 0x8)

    void PlayPopupAnimation();
    void Construct();
    void ExecuteUbergraph_WBP_Common_Menu_Msg_Small(int32 EntryPoint);
}; // Size: 0x288

#endif
