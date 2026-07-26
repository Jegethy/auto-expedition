#ifndef UE4SS_SDK_WBP_PalCommonCharacterIcon_HPP
#define UE4SS_SDK_WBP_PalCommonCharacterIcon_HPP

class UWBP_PalCommonCharacterIcon_C : public UWBP_PalCharacterIconBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UCircularThrobber* CircularThrobber_96;                                     // 0x04C0 (size: 0x8)
    class UImage* IconImage;                                                          // 0x04C8 (size: 0x8)
    class UMaterialInstanceDynamic* dynamicMaterial;                                  // 0x04D0 (size: 0x8)
    bool IsEmpty;                                                                     // 0x04D8 (size: 0x1)
    double SphereMaskRadius;                                                          // 0x04E0 (size: 0x8)

    void GetCurrentBrush(FSlateBrush& CurrentBrush);
    void SetFraction(double Fraction);
    void OnEmpty();
    void OnLoaded(class UTexture2D* loadedTexture);
    void OnStartLoad();
    void Construct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalCommonCharacterIcon(int32 EntryPoint);
}; // Size: 0x4E8

#endif
