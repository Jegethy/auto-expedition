#ifndef UE4SS_SDK_WBP_Popup_KeyItem_HPP
#define UE4SS_SDK_WBP_Popup_KeyItem_HPP

class UWBP_Popup_KeyItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Out;                                                  // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0288 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_C_87;                           // 0x0290 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_ItemName;                                  // 0x0298 (size: 0x8)
    class UWBP_PalInGameMenuItemIcon_C* WBP_PalInGameMenuItemIcon;                    // 0x02A0 (size: 0x8)
    FTimerHandle TimerHandle_WaitIn;                                                  // 0x02A8 (size: 0x8)

    void OnTimerEvent_EndIn();
    void Play(FName ItemId);
    void AnmEvent_In();
    void AnmEvent_Out();
    void ExecuteUbergraph_WBP_Popup_KeyItem(int32 EntryPoint);
}; // Size: 0x2B0

#endif
