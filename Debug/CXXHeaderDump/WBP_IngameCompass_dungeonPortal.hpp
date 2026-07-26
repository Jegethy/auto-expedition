#ifndef UE4SS_SDK_WBP_IngameCompass_dungeonPortal_HPP
#define UE4SS_SDK_WBP_IngameCompass_dungeonPortal_HPP

class UWBP_IngameCompass_dungeonPortal_C : public UWBP_CompassIconBase_C
{
    class UImage* Image_Icon;                                                         // 0x0498 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Length;                                            // 0x04A0 (size: 0x8)

    void SetupTexture(TSoftObjectPtr<UTexture2D> SoftTexture);
    void SetDistanceText(double Length);
}; // Size: 0x4A8

#endif
