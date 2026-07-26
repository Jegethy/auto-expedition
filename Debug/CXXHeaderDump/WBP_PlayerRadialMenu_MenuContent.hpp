#ifndef UE4SS_SDK_WBP_PlayerRadialMenu_MenuContent_HPP
#define UE4SS_SDK_WBP_PlayerRadialMenu_MenuContent_HPP

class UWBP_PlayerRadialMenu_MenuContent_C : public UPalUserWidget
{
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_46;                                   // 0x0450 (size: 0x8)
    class UImage* Image_39;                                                           // 0x0458 (size: 0x8)
    class UImage* Image_Highlight;                                                    // 0x0460 (size: 0x8)
    class UPalRetainerBox* PalRetainerBox_51;                                         // 0x0468 (size: 0x8)

    void SetHightlight();
    void SetTextColor(FSlateColor NewColor);
    void SetText(FText InText);
}; // Size: 0x470

#endif
