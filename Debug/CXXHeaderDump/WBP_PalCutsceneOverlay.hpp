#ifndef UE4SS_SDK_WBP_PalCutsceneOverlay_HPP
#define UE4SS_SDK_WBP_PalCutsceneOverlay_HPP

class UWBP_PalCutsceneOverlay_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UHorizontalBox* Horizontal_SkipCount;                                       // 0x0480 (size: 0x8)
    class UImage* Image_46;                                                           // 0x0488 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x0490 (size: 0x8)
    class UBP_PalTextBlock_C* TextBlock_SkipCount;                                    // 0x0498 (size: 0x8)
    FPalDataTableRowName_UIInputAction SkipInput;                                     // 0x04A0 (size: 0x8)
    FTimerHandle HideTimerHandle;                                                     // 0x04A8 (size: 0x8)
    FPalUIActionBindData InputActionHandle;                                           // 0x04B0 (size: 0x4)
    bool isDisplaying;                                                                // 0x04B4 (size: 0x1)

    class UWidget* BP_GetDesiredFocusTarget();
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Hide();
    void Display();
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Skip();
    void Destruct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnSkipCountUpdatedDelegate_イベント(int32 SkipCount, int32 TotalCount);
    void OnSetup();
    void OnClose();
    void ExecuteUbergraph_WBP_PalCutsceneOverlay(int32 EntryPoint);
}; // Size: 0x4B5

#endif
