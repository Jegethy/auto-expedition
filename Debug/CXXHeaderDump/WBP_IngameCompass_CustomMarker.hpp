#ifndef UE4SS_SDK_WBP_IngameCompass_CustomMarker_HPP
#define UE4SS_SDK_WBP_IngameCompass_CustomMarker_HPP

class UWBP_IngameCompass_CustomMarker_C : public UWBP_CompassIconBase_C
{
    class UImage* Image_Icon;                                                         // 0x0498 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Length;                                            // 0x04A0 (size: 0x8)
    TArray<class UTexture2D*> Textures;                                               // 0x04A8 (size: 0x10)

    void SetColorType(bool IsCustomMarker);
    void UpdateDistance();
    void UpdateVisibility(bool& InDistance);
    void SetCustomMarkerTexture(int32 IconType);
    void SetDistanceText(double Length);
}; // Size: 0x4B8

#endif
