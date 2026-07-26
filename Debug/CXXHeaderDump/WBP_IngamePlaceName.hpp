#ifndef UE4SS_SDK_WBP_IngamePlaceName_HPP
#define UE4SS_SDK_WBP_IngamePlaceName_HPP

class UWBP_IngamePlaceName_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Exp_Close;                                            // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Exp_Open;                                             // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0298 (size: 0x8)
    class UImage* Base;                                                               // 0x02A0 (size: 0x8)
    class UImage* BaseLineC;                                                          // 0x02A8 (size: 0x8)
    class UImage* BaseLineC_1;                                                        // 0x02B0 (size: 0x8)
    class UImage* BaseLineL;                                                          // 0x02B8 (size: 0x8)
    class UImage* BaseLineL_1;                                                        // 0x02C0 (size: 0x8)
    class UImage* BaseLineR;                                                          // 0x02C8 (size: 0x8)
    class UImage* BaseLineR_1;                                                        // 0x02D0 (size: 0x8)
    class UCanvasPanel* Canvas_Exp;                                                   // 0x02D8 (size: 0x8)
    class UImage* Flare;                                                              // 0x02E0 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x02E8 (size: 0x8)
    class UImage* Image_Base_1;                                                       // 0x02F0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_AddExp;                                            // 0x02F8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RegionName;                                        // 0x0300 (size: 0x8)
    FTimerHandle RegionNameCloseTimer;                                                // 0x0308 (size: 0x8)
    FName CachedRegionNameID;                                                         // 0x0310 (size: 0x8)
    FTimerHandle DelayCloseExpTimer;                                                  // 0x0318 (size: 0x8)

    void OnCloseTimerEnd();
    void Display Region(FName RegionNameID);
    void AnmEvent_Start();
    void AnmEvent_End();
    void DelayClose_Exp();
    void Construct();
    void ExecuteUbergraph_WBP_IngamePlaceName(int32 EntryPoint);
}; // Size: 0x320

#endif
