#ifndef UE4SS_SDK_WBP_Ingame_Message_HPP
#define UE4SS_SDK_WBP_Ingame_Message_HPP

class UWBP_Ingame_Message_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Green;                                                // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Blue;                                                 // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Red;                                                  // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_Out;                                                  // 0x0298 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x02A0 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_C_89;                           // 0x02A8 (size: 0x8)
    class UCanvasPanel* Canvas_Base;                                                  // 0x02B0 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x02B8 (size: 0x8)
    class UImage* Image_Base_Flash;                                                   // 0x02C0 (size: 0x8)
    bool IsShow;                                                                      // 0x02C8 (size: 0x1)
    TArray<FF_PalIngameMessageQueData> QueMessageDataArray;                           // 0x02D0 (size: 0x10)
    FTimerHandle TimerHandle_PlayEnd;                                                 // 0x02E0 (size: 0x8)
    FTimerHandle TimerHandle_HideMessage;                                             // 0x02E8 (size: 0x8)

    void OnTimerEvent_HideMessage();
    void IsProcessingMessage(bool& bProcessing);
    void OnTimerEvent_PlayEnd();
    void ShowMessage(FF_PalIngameMessageQueData DisplayQueData);
    void PopMessage();
    void QueMessage(FF_PalIngameMessageQueData QueData);
    void SetMessageText(FName TextId);
    void AnmEvent_In();
    void AnmEvent_Out();
    void AnmEvent_Red();
    void AnmEvent_Blue();
    void AnmEvent_Green();
    void ExecuteUbergraph_WBP_Ingame_Message(int32 EntryPoint);
}; // Size: 0x2F0

#endif
