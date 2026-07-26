#ifndef UE4SS_SDK_WBP_Fishing_SalvageGame_HPP
#define UE4SS_SDK_WBP_Fishing_SalvageGame_HPP

class UWBP_Fishing_SalvageGame_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Miss;                                                 // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Success;                                              // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Loop;                                                 // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0298 (size: 0x8)
    class UCanvasPanel* Canvas_Needle_Rotate;                                         // 0x02A0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_577;                                                          // 0x02C0 (size: 0x8)
    class UImage* Image_648;                                                          // 0x02C8 (size: 0x8)
    class UImage* Image_702;                                                          // 0x02D0 (size: 0x8)
    class UImage* Image_Add;                                                          // 0x02D8 (size: 0x8)
    class UImage* Image_Dot;                                                          // 0x02E0 (size: 0x8)
    class UImage* Image_Dot_1;                                                        // 0x02E8 (size: 0x8)
    class UImage* Image_Dot_2;                                                        // 0x02F0 (size: 0x8)
    class UImage* Image_Dot_3;                                                        // 0x02F8 (size: 0x8)
    class UImage* Image_Dot_4;                                                        // 0x0300 (size: 0x8)
    class UImage* Image_Dot_5;                                                        // 0x0308 (size: 0x8)
    class UImage* Image_Dot_6;                                                        // 0x0310 (size: 0x8)
    class UImage* Image_Dot_7;                                                        // 0x0318 (size: 0x8)
    class UImage* Image_Flash;                                                        // 0x0320 (size: 0x8)
    class UImage* Image_Flash_1;                                                      // 0x0328 (size: 0x8)
    class UImage* Image_Gauge_Area;                                                   // 0x0330 (size: 0x8)
    class UImage* Image_GaugeBase;                                                    // 0x0338 (size: 0x8)
    class UImage* Image_Glow;                                                         // 0x0340 (size: 0x8)
    class UImage* Image_Glow_Miss;                                                    // 0x0348 (size: 0x8)
    class UImage* Image_Glow_Success;                                                 // 0x0350 (size: 0x8)
    class UImage* Image_Grd;                                                          // 0x0358 (size: 0x8)
    class UImage* Image_Grd_1;                                                        // 0x0360 (size: 0x8)
    class UImage* Image_Grd_2;                                                        // 0x0368 (size: 0x8)
    class UImage* Image_Grd_3;                                                        // 0x0370 (size: 0x8)
    class UImage* Image_L;                                                            // 0x0378 (size: 0x8)
    class UImage* Image_L_1;                                                          // 0x0380 (size: 0x8)
    class UImage* Image_Needle;                                                       // 0x0388 (size: 0x8)
    class UImage* Image_R;                                                            // 0x0390 (size: 0x8)
    class UImage* Image_R_1;                                                          // 0x0398 (size: 0x8)
    class UImage* Image_Ripple_0;                                                     // 0x03A0 (size: 0x8)
    class UImage* Image_Ripple_1;                                                     // 0x03A8 (size: 0x8)
    class UImage* Image_Ripple_2;                                                     // 0x03B0 (size: 0x8)
    class UImage* Image_Shadow;                                                       // 0x03B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Cancel;                                            // 0x03C0 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_Cancel;                         // 0x03C8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_Interact;                       // 0x03D0 (size: 0x8)

    void PlaySuccessAnimation();
    void PlayFailedAnimation();
    void PlayInAnimation();
    void HideAnimation();
    void ExecuteUbergraph_WBP_Fishing_SalvageGame(int32 EntryPoint);
}; // Size: 0x3D8

#endif
