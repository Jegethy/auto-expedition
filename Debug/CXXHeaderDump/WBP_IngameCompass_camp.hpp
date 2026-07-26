#ifndef UE4SS_SDK_WBP_IngameCompass_camp_HPP
#define UE4SS_SDK_WBP_IngameCompass_camp_HPP

class UWBP_IngameCompass_camp_C : public UWBP_CompassIconBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0498 (size: 0x8)
    class UCanvasPanel* Canvas_Innner;                                                // 0x04A0 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x04A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Length;                                            // 0x04B0 (size: 0x8)

    void SetupTexture(TSoftObjectPtr<UTexture2D> SoftTexture);
    void SetDistanceText(double Length);
    void Destruct();
    void ExecuteUbergraph_WBP_IngameCompass_camp(int32 EntryPoint);
}; // Size: 0x4B8

#endif
