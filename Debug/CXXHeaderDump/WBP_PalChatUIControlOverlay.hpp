#ifndef UE4SS_SDK_WBP_PalChatUIControlOverlay_HPP
#define UE4SS_SDK_WBP_PalChatUIControlOverlay_HPP

class UWBP_PalChatUIControlOverlay_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWBP_Ingame_Chat_C* ControllChatUI;                                         // 0x0480 (size: 0x8)
    FPalDataTableRowName_UIInputAction ChageCategoryChatActionName;                   // 0x0488 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelActionHandle_Default;                    // 0x0490 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelActionHandle_Escape;                     // 0x0498 (size: 0x8)
    FPalDataTableRowName_UIInputAction SendChatActionhandle;                          // 0x04A0 (size: 0x8)
    FPalDataTableRowName_UIInputAction ResetFocusActionName;                          // 0x04A8 (size: 0x8)

    void SendChat();
    void On Cancel Force Close();
    void OnCancel_ForPad();
    void OnCompletedChatInput();
    void ChangeChatCategory();
    class UWidget* BP_GetDesiredFocusTarget();
    void Destruct();
    void OnSetup();
    void OnClose();
    void OnResetFocus();
    void ExecuteUbergraph_WBP_PalChatUIControlOverlay(int32 EntryPoint);
}; // Size: 0x4B0

#endif
