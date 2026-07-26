#ifndef UE4SS_SDK_WBP_IngameCompass_DeathMark_HPP
#define UE4SS_SDK_WBP_IngameCompass_DeathMark_HPP

class UWBP_IngameCompass_DeathMark_C : public UWBP_CompassIconBase_C
{
    class UBP_PalTextBlock_C* Text_Length;                                            // 0x0498 (size: 0x8)

    void SetDistanceText(double Length);
}; // Size: 0x4A0

#endif
