#ifndef UE4SS_SDK_WBP_Fishing_PowerGauge_HPP
#define UE4SS_SDK_WBP_Fishing_PowerGauge_HPP

class UWBP_Fishing_PowerGauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Bad_Loop;                                             // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_GoodToBad;                                            // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0290 (size: 0x8)
    class UCanvasPanel* Canvas_KeyGuide;                                              // 0x0298 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x02A0 (size: 0x8)
    class UImage* Image_BaseFrame;                                                    // 0x02A8 (size: 0x8)
    class UImage* Image_Center;                                                       // 0x02B0 (size: 0x8)
    class UImage* Image_Dot_0;                                                        // 0x02B8 (size: 0x8)
    class UImage* Image_Dot_1;                                                        // 0x02C0 (size: 0x8)
    class UImage* Image_Dot_2;                                                        // 0x02C8 (size: 0x8)
    class UImage* Image_Dot_3;                                                        // 0x02D0 (size: 0x8)
    class UImage* Image_Eff_Bad;                                                      // 0x02D8 (size: 0x8)
    class UImage* Image_Eff_Good;                                                     // 0x02E0 (size: 0x8)
    class UImage* Image_Fish;                                                         // 0x02E8 (size: 0x8)
    class UImage* Image_FishBar;                                                      // 0x02F0 (size: 0x8)
    class UImage* Image_Frame;                                                        // 0x02F8 (size: 0x8)
    class UImage* Image_Frame_Bad;                                                    // 0x0300 (size: 0x8)
    class UImage* Image_KeyGuide_Base;                                                // 0x0308 (size: 0x8)
    class UImage* Image_White;                                                        // 0x0310 (size: 0x8)
    class USlider* Slider_SuitableArea;                                               // 0x0318 (size: 0x8)
    class UWBP_Fishing_TutorialGuide_C* WBP_Fishing_TutorialGuide;                    // 0x0320 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon;                // 0x0328 (size: 0x8)
    TArray<class UImage*> FishBarImages;                                              // 0x0330 (size: 0x10)
    double BarSizeRate;                                                               // 0x0340 (size: 0x8)
    double BarSize;                                                                   // 0x0348 (size: 0x8)
    double DefaultGaugeSize;                                                          // 0x0350 (size: 0x8)
    double OriginGaugeSize;                                                           // 0x0358 (size: 0x8)
    bool IsInitialized;                                                               // 0x0360 (size: 0x1)

    void ShowTutorialGuide();
    void ApplyHandleSize();
    void SetBarSize(double BarSize);
    void SetFishPosition(double Position);
    void SetBarPosition(double Position);
    void AnmEvent_In();
    void AnmEvent_GoodToBad(bool IsStart);
    void AnmEvent_Bad_Loop(bool IsStart);
    void AnmEvent_AllStop();
    void AnmEvent_Out();
    void OnInitialized();
    void ShowUI();
    void HideUI();
    void ExecuteUbergraph_WBP_Fishing_PowerGauge(int32 EntryPoint);
}; // Size: 0x361

#endif
