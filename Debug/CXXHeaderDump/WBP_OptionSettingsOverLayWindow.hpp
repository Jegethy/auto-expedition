#ifndef UE4SS_SDK_WBP_OptionSettingsOverLayWindow_HPP
#define UE4SS_SDK_WBP_OptionSettingsOverLayWindow_HPP

class UWBP_OptionSettingsOverLayWindow_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0480 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Command;                                // 0x0488 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Title;                                  // 0x0490 (size: 0x8)
    FDataTableRowHandle titleMsgId;                                                   // 0x0498 (size: 0x10)
    FDataTableRowHandle TitleMsgIdPS5;                                                // 0x04A8 (size: 0x10)
    FDataTableRowHandle CommandMsgId;                                                 // 0x04B8 (size: 0x10)
    FDataTableRowHandle CommandMsgIdPS5;                                              // 0x04C8 (size: 0x10)
    FDataTableRowHandle ErrorMsgId;                                                   // 0x04D8 (size: 0x10)
    FDataTableRowHandle ErrorMsgIdPS5;                                                // 0x04E8 (size: 0x10)
    FTimerHandle ResetTextTimer;                                                      // 0x04F8 (size: 0x8)
    class UBP_HUDDispatchParameter_KeyConfig_C* KeyConfigParam;                       // 0x0500 (size: 0x8)
    TArray<FName> FilterActionKeys;                                                   // 0x0508 (size: 0x10)
    TMap<class FPalKeyAction, class FName> ReverseAxisMap;                            // 0x0518 (size: 0x50)
    FName BackActionName;                                                             // 0x0568 (size: 0x8)

    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnKeySetting(FKey NewKey);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    class UWidget* BP_GetDesiredFocusTarget();
    void OnSetup();
    void ResetCommandText();
    void SetPadKeyA();
    void ExecuteUbergraph_WBP_OptionSettingsOverLayWindow(int32 EntryPoint);
}; // Size: 0x570

#endif
