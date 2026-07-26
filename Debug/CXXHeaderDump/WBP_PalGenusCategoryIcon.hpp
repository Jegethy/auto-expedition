#ifndef UE4SS_SDK_WBP_PalGenusCategoryIcon_HPP
#define UE4SS_SDK_WBP_PalGenusCategoryIcon_HPP

class UWBP_PalGenusCategoryIcon_C : public UPalUserWidget
{
    class UImage* Image_15;                                                           // 0x0450 (size: 0x8)
    TMap<class EPalGenusCategoryType, class TSoftObjectPtr<UTexture2D>> IconMap;      // 0x0458 (size: 0x50)

    void Setup(EPalGenusCategoryType Category);
}; // Size: 0x4A8

#endif
