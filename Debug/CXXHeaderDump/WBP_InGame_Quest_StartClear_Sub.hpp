#ifndef UE4SS_SDK_WBP_InGame_Quest_StartClear_Sub_HPP
#define UE4SS_SDK_WBP_InGame_Quest_StartClear_Sub_HPP

class UWBP_InGame_Quest_StartClear_Sub_C : public UWBP_InGame_Quest_StartClearBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    class UWidgetAnimation* Anm_Out;                                                  // 0x0468 (size: 0x8)
    class UWidgetAnimation* Anm_Complete;                                             // 0x0470 (size: 0x8)
    class UWidgetAnimation* Anm_Start;                                                // 0x0478 (size: 0x8)
    class UImage* BaseLineC;                                                          // 0x0480 (size: 0x8)
    class UImage* BaseLineC_Bloom;                                                    // 0x0488 (size: 0x8)
    class UImage* BaseLineL;                                                          // 0x0490 (size: 0x8)
    class UImage* BaseLineL_Bloom;                                                    // 0x0498 (size: 0x8)
    class UImage* BaseLineR;                                                          // 0x04A0 (size: 0x8)
    class UImage* BaseLineR_Bloom;                                                    // 0x04A8 (size: 0x8)
    class UImage* Image_190;                                                          // 0x04B0 (size: 0x8)
    class UImage* Image_Flash_Add;                                                    // 0x04B8 (size: 0x8)
    class UImage* Image_Prism;                                                        // 0x04C0 (size: 0x8)
    class UImage* Image_Prism_1;                                                      // 0x04C8 (size: 0x8)
    class UImage* Image_Prism_2;                                                      // 0x04D0 (size: 0x8)
    class UImage* Image_Prism_Add_Complete;                                           // 0x04D8 (size: 0x8)
    class UImage* Image_Prism_Add_Start;                                              // 0x04E0 (size: 0x8)
    class UOverlay* Overlay_KeyGuide;                                                 // 0x04E8 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_Title;                                     // 0x04F0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Quest_Complete;                                    // 0x04F8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Quest_New;                                         // 0x0500 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x0508 (size: 0x8)
    TArray<FF_PalQuestStartClearNotifyQueData> NotifyQue;                             // 0x0510 (size: 0x10)
    double WaitTime_StartToOut;                                                       // 0x0520 (size: 0x8)
    double WaitTime_ClearToOut;                                                       // 0x0528 (size: 0x8)
    double WaitTIme_NextNotify;                                                       // 0x0530 (size: 0x8)
    FTimerHandle TimerHandle_StartToOut;                                              // 0x0538 (size: 0x8)
    FTimerHandle TimerHandle_WaitNextNotify;                                          // 0x0540 (size: 0x8)
    FWBP_InGame_Quest_StartClear_Sub_COnStartQuestNotify OnStartQuestNotify;          // 0x0548 (size: 0x10)
    void OnStartQuestNotify(FName QuestId);
    bool CompleteSound;                                                               // 0x0558 (size: 0x1)

    void SetQuestName(FText InQuestName);
    void SetBindData(FPalUIActionBindData BindData);
    void GetQuestNotifyTime(double& NotifyTime);
    void PlayOrder();
    void PlayClear();
    void GetStartQuestNotifyTime(double& NewParam);
    void OnTImerEvent_EndOutAnimation();
    void OnTimerEvent_EndStartAnimation();
    void AnmEvent_StartQuest();
    void AnmEvent_Out_Order();
    void AnmEvent_CompleteQuest();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_InGame_Quest_StartClear_Sub(int32 EntryPoint);
    void OnStartQuestNotify__DelegateSignature(FName QuestId);
}; // Size: 0x559

#endif
