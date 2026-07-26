#ifndef UE4SS_SDK_WBP_InGame_Quest_StartClear_Main_HPP
#define UE4SS_SDK_WBP_InGame_Quest_StartClear_Main_HPP

class UWBP_InGame_Quest_StartClear_Main_C : public UWBP_InGame_Quest_StartClearBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    class UWidgetAnimation* Anm_Out;                                                  // 0x0468 (size: 0x8)
    class UWidgetAnimation* Anm_Complete;                                             // 0x0470 (size: 0x8)
    class UWidgetAnimation* Anm_Start;                                                // 0x0478 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Complete;                                         // 0x0480 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Start;                                            // 0x0488 (size: 0x8)
    class UImage* Image_BG_Dark;                                                      // 0x0490 (size: 0x8)
    class UOverlay* Overlay_KeyGuide;                                                 // 0x0498 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_Title;                                     // 0x04A0 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_Title_1;                                   // 0x04A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Quest_Complete_1;                                  // 0x04B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Quest_New;                                         // 0x04B8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x04C0 (size: 0x8)
    double WaitTime_StartToOut;                                                       // 0x04C8 (size: 0x8)
    double WaitTime_ClearToOut;                                                       // 0x04D0 (size: 0x8)
    double WaitTIme_NextNotify;                                                       // 0x04D8 (size: 0x8)
    FTimerHandle TimerHandle_StartToOut;                                              // 0x04E0 (size: 0x8)
    FTimerHandle TimerHandle_WaitNextNotify;                                          // 0x04E8 (size: 0x8)
    FWBP_InGame_Quest_StartClear_Main_COnStartQuestNotify OnStartQuestNotify;         // 0x04F0 (size: 0x10)
    void OnStartQuestNotify(FName QuestId);

    void SetBindData(FPalUIActionBindData BindData);
    void OnTimerEvent_EndCompleteAnimation();
    void GetQuestNotifyTime(double& NotifyTime);
    void PlayClear();
    void PlayOrder();
    void SetQuestName(FText InQuestName);
    void OnTImerEvent_EndOutAnimation();
    void OnTimerEvent_EndStartAnimation();
    void AnmEvent_StartQuest();
    void AnmEvent_Out_Order();
    void AnmEvent_CompleteQuest();
    void AnmEvent_Out_Complete();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_InGame_Quest_StartClear_Main(int32 EntryPoint);
    void OnStartQuestNotify__DelegateSignature(FName QuestId);
}; // Size: 0x500

#endif
