#ifndef UE4SS_SDK_WBP_Expedition_PalPowerPopup_HPP
#define UE4SS_SDK_WBP_Expedition_PalPowerPopup_HPP

class UWBP_Expedition_PalPowerPopup_C : public UUserWidget
{
    class UImage* Icon_PalPower;                                                      // 0x0278 (size: 0x8)
    class UImage* Image_34;                                                           // 0x0280 (size: 0x8)
    class UImage* Image_Line;                                                         // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PowerValue;                                        // 0x0290 (size: 0x8)

    void SetPower(int32 Power);
}; // Size: 0x298

#endif
