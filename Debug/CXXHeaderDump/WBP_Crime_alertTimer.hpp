#ifndef UE4SS_SDK_WBP_Crime_alertTimer_HPP
#define UE4SS_SDK_WBP_Crime_alertTimer_HPP

class UWBP_Crime_alertTimer_C : public UPalUserWidget
{
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0450 (size: 0x8)
    class UImage* Eye;                                                                // 0x0458 (size: 0x8)
    class UImage* Eye_1;                                                              // 0x0460 (size: 0x8)
    class UPalProgressBar* PalProgressBar_219;                                        // 0x0468 (size: 0x8)

    void SetGaugePercent(double NewParcent);
}; // Size: 0x470

#endif
