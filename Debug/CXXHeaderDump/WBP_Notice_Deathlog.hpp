#ifndef UE4SS_SDK_WBP_Notice_Deathlog_HPP
#define UE4SS_SDK_WBP_Notice_Deathlog_HPP

class UWBP_Notice_Deathlog_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_In_Kill;                                              // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Out;                                                  // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0290 (size: 0x8)
    class UImage* Image_Arrow;                                                        // 0x0298 (size: 0x8)
    class UImage* Image_AttackerIcon;                                                 // 0x02A0 (size: 0x8)
    class UImage* Image_DefenderIcon;                                                 // 0x02A8 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichTextBlock_Attacker;                             // 0x02B0 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichTextBlock_Defender;                             // 0x02B8 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichTextBlock_Reason;                               // 0x02C0 (size: 0x8)
    class USizeBox* SizeBox_AttackerIcon;                                             // 0x02C8 (size: 0x8)
    class USizeBox* SizeBox_DefenderIcon;                                             // 0x02D0 (size: 0x8)
    bool Is Short;                                                                    // 0x02D8 (size: 0x1)
    bool NowDisplayed;                                                                // 0x02D9 (size: 0x1)
    bool ShortDisplayEnd;                                                             // 0x02DA (size: 0x1)
    bool LongDisplayEnd;                                                              // 0x02DB (size: 0x1)
    FWBP_Notice_Deathlog_COnDeathLogEnd OnDeathLogEnd;                                // 0x02E0 (size: 0x10)
    void OnDeathLogEnd(class UWBP_Notice_Deathlog_C* EndedLog);
    bool IsKillLog;                                                                   // 0x02F0 (size: 0x1)

    void SetupIcon(FPalKillLogDisplayData DisplayData);
    void GetDeathResonText(EPalKillLogDisplayType KillLogType, FText& ReasonText);
    void MakeKillLogText(FPalKillLogDisplayData DisplayData, FText& AttackerName, FText& DefenderName, FText& Reason);
    void SetupAsDeathLog(FPalKillLogDisplayData DeathLogDisplayData);
    void MakeDeathLogText(FPalKillLogDisplayData DisplayData, FText& AttackerName, FText& DefenderName, FText& Reason);
    void SetupAsKillLog(FPalKillLogDisplayData KillLogDIsplayData);
    void Finished_594550FE491318B188D5B8A2D194C1DB();
    void SetDisplayTime(double ShortDisplayTime, double LongDisplayTime);
    void SetDisplayTimeType(bool IsShort);
    void CheckDisplay_Short();
    void CheckDisplay_Long();
    void ExecuteUbergraph_WBP_Notice_Deathlog(int32 EntryPoint);
    void OnDeathLogEnd__DelegateSignature(class UWBP_Notice_Deathlog_C* EndedLog);
}; // Size: 0x2F1

#endif
