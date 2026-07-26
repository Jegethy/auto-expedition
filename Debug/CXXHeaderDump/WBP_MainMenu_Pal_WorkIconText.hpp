#ifndef UE4SS_SDK_WBP_MainMenu_Pal_WorkIconText_HPP
#define UE4SS_SDK_WBP_MainMenu_Pal_WorkIconText_HPP

class UWBP_MainMenu_Pal_WorkIconText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C;                                      // 0x0280 (size: 0x8)
    class UCanvasPanel* CanvasPanel_2;                                                // 0x0288 (size: 0x8)
    class UHorizontalBox* Horizontal_Gauge;                                           // 0x0290 (size: 0x8)
    class UHorizontalBox* HorizontalBox_0;                                            // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Title;                                             // 0x02A0 (size: 0x8)
    class UWBP_MainMenu_Pal_WorkGauge_C* WBP_MainMenu_Pal_WorkGauge;                  // 0x02A8 (size: 0x8)
    class UWBP_MainMenu_Pal_WorkGauge_C* WBP_MainMenu_Pal_WorkGauge_1;                // 0x02B0 (size: 0x8)
    class UWBP_MainMenu_Pal_WorkGauge_C* WBP_MainMenu_Pal_WorkGauge_2;                // 0x02B8 (size: 0x8)
    class UWBP_MainMenu_Pal_WorkGauge_C* WBP_MainMenu_Pal_WorkGauge_3;                // 0x02C0 (size: 0x8)
    class UWBP_MainMenu_Pal_WorkGauge_C* WBP_MainMenu_Pal_WorkGauge_4;                // 0x02C8 (size: 0x8)
    class UWBP_MainMenu_Pal_WorkGauge_C* WBP_MainMenu_Pal_WorkGauge_5;                // 0x02D0 (size: 0x8)
    class UWBP_MainMenu_Pal_WorkGauge_C* WBP_MainMenu_Pal_WorkGauge_6;                // 0x02D8 (size: 0x8)
    class UWBP_MainMenu_Pal_WorkGauge_C* WBP_MainMenu_Pal_WorkGauge_7;                // 0x02E0 (size: 0x8)
    class UWBP_MainMenu_Pal_WorkGauge_C* WBP_MainMenu_Pal_WorkGauge_8;                // 0x02E8 (size: 0x8)
    class UWBP_MainMenu_Pal_WorkGauge_C* WBP_MainMenu_Pal_WorkGauge_9;                // 0x02F0 (size: 0x8)
    class UWBP_MainMenu_Pal_WorkIcon_C* WBP_MainMenu_Pal_WorkIcon;                    // 0x02F8 (size: 0x8)
    TArray<class UWBP_MainMenu_Pal_WorkGauge_C*> Gauge_Array;                         // 0x0300 (size: 0x10)
    class UWBP_MainMenu_Pal_FoodAmountIcon_C* NewVar;                                 // 0x0310 (size: 0x8)
    EPalWorkSuitability Suitability;                                                  // 0x0318 (size: 0x1)

    void Set Suitability(EPalWorkSuitability Suitability, int32 Rank, int32 RankBonus, int32 PassiveRankBonus);
    void AnmEvent_OffToOn();
    void AnmEvent_ForceOff();
    void OnInitialized();
    void ExecuteUbergraph_WBP_MainMenu_Pal_WorkIconText(int32 EntryPoint);
}; // Size: 0x319

#endif
