#ifndef UE4SS_SDK_WBP_Ingame_Chat_Wrapper_HPP
#define UE4SS_SDK_WBP_Ingame_Chat_Wrapper_HPP

class UWBP_Ingame_Chat_Wrapper_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UImage* Image_91;                                                           // 0x0458 (size: 0x8)
    class UImage* Image_ForceClose;                                                   // 0x0460 (size: 0x8)
    class UWBP_Ingame_Chat_C* WBP_Ingame_Chat;                                        // 0x0468 (size: 0x8)

    FEventReply On_Image_ForceClose_MouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void CanOpenAnyUI(bool& bCanOpenAnyUI);
    void ShowChat();
    void BndEvt__WBP_Ingame_Chat_Wrapper_WBP_Ingame_Chat_K2Node_ComponentBoundEvent_0_OnCompleteInput__DelegateSignature();
    void ExecuteUbergraph_WBP_Ingame_Chat_Wrapper(int32 EntryPoint);
}; // Size: 0x470

#endif
