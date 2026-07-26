#ifndef UE4SS_SDK_WBP_Paldex_Task_HPP
#define UE4SS_SDK_WBP_Paldex_Task_HPP

class UWBP_Paldex_Task_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Ingame_Flash;                                         // 0x0280 (size: 0x8)
    class UWidgetAnimation* AnmOutGame_Complete;                                      // 0x0288 (size: 0x8)
    class UWidgetAnimation* AnmIngame_Complete;                                       // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_Outgame;                                              // 0x0298 (size: 0x8)
    class UWidgetAnimation* Anm_Ingame;                                               // 0x02A0 (size: 0x8)
    class UCanvasPanel* CanvasPanelIngame;                                            // 0x02A8 (size: 0x8)
    class UCanvasPanel* CanvasPanelOutgame;                                           // 0x02B0 (size: 0x8)
    class UImage* Flare_01;                                                           // 0x02B8 (size: 0x8)
    class UImage* Flare_B_00;                                                         // 0x02C0 (size: 0x8)
    class UImage* Flare_Cross_0;                                                      // 0x02C8 (size: 0x8)
    class UImage* Flare_Cross_1;                                                      // 0x02D0 (size: 0x8)
    class UImage* Flare_T_00;                                                         // 0x02D8 (size: 0x8)
    class UImage* Image_Complete;                                                     // 0x02E0 (size: 0x8)
    class UImage* Image_GaugeFlare_0;                                                 // 0x02E8 (size: 0x8)
    class UImage* Image_TaskIcon;                                                     // 0x02F0 (size: 0x8)
    class UProgressBar* ProgressBar_CaptureBonus;                                     // 0x02F8 (size: 0x8)
    class UProgressBar* ProgressBar_CaptureBonus_Back;                                // 0x0300 (size: 0x8)
    class UBP_PalTextBlock_C* Text_CaptureNum;                                        // 0x0308 (size: 0x8)
    class UBP_PalTextBlock_C* Text_CaptureNumOutGame;                                 // 0x0310 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ExpBonus;                                          // 0x0318 (size: 0x8)
    FDataTableRowHandle ExpBonusMsgID_Normal;                                         // 0x0320 (size: 0x10)
    FDataTableRowHandle ExpBonusMsgID_First;                                          // 0x0330 (size: 0x10)
    FDataTableRowHandle ExpBonusMsgID_Capture5;                                       // 0x0340 (size: 0x10)
    FDataTableRowHandle ExpBonusMsgID_Complete;                                       // 0x0350 (size: 0x10)
    int32 CachedBonusCount;                                                           // 0x0360 (size: 0x4)

    void SetupBonusCountText(int32 BonusCount);
    void SetupForMenu(int32 BonusCount);
    void GetBonusExpMsg(int32 CaptureCount, FText& Text);
    void PreSetup(FName CharacterID, int32 BonusCount, int32 DisplayExp);
    void OnInitialized();
    void AnmEvent_Flash();
    void AnmEvent_Activate(bool AlreadyCompletedBonus);
    void ExecuteUbergraph_WBP_Paldex_Task(int32 EntryPoint);
}; // Size: 0x364

#endif
