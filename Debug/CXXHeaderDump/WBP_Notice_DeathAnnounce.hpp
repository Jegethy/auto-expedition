#ifndef UE4SS_SDK_WBP_Notice_DeathAnnounce_HPP
#define UE4SS_SDK_WBP_Notice_DeathAnnounce_HPP

class UWBP_Notice_DeathAnnounce_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Loop;                                                 // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Out;                                                  // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0290 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock;                                // 0x0298 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x02A0 (size: 0x8)
    class UImage* Image_Base_Flash;                                                   // 0x02A8 (size: 0x8)
    class UImage* Image_Base_Grd;                                                     // 0x02B0 (size: 0x8)
    class UImage* Image_BaseLine;                                                     // 0x02B8 (size: 0x8)
    TArray<FPalKillLogDisplayData> DisplayDataList;                                   // 0x02C0 (size: 0x10)
    bool bIsDisplaying;                                                               // 0x02D0 (size: 0x1)
    FDataTableRowHandle PlayerDeathLogMsgID;                                          // 0x02D8 (size: 0x10)
    FDataTableRowHandle PalDeathLogMsgID;                                             // 0x02E8 (size: 0x10)
    double DisplayTime;                                                               // 0x02F8 (size: 0x8)
    FTimerHandle NowDisplayingWidgetEndTimer;                                         // 0x0300 (size: 0x8)
    FTimerHandle NowDisplayingWidgetCloseTimer;                                       // 0x0308 (size: 0x8)
    bool NewVar;                                                                      // 0x0310 (size: 0x1)

    void Display(bool& bSuccess);
    void OnAddedDeathLog(const FPalKillLogDisplayData& DeathLogDisplayData);
    void AnmEvent_In_WithEndTimer();
    void AnmEvent_End_ByTimer();
    void OnEndCloseAnim();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void カスタムイベント(const FPalKillLogDisplayData& DeathLogDisplayData);
    void カスタムイベント_0(const FPalKillLogDisplayData& DeathLogDisplayData);
    void ExecuteUbergraph_WBP_Notice_DeathAnnounce(int32 EntryPoint);
}; // Size: 0x311

#endif
