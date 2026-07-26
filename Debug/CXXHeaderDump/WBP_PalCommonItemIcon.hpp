#ifndef UE4SS_SDK_WBP_PalCommonItemIcon_HPP
#define UE4SS_SDK_WBP_PalCommonItemIcon_HPP

class UWBP_PalCommonItemIcon_C : public UWBP_PalItemIconBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B0 (size: 0x8)
    class UCircularThrobber* CircularThrobber_96;                                     // 0x04B8 (size: 0x8)
    class UImage* IconImage;                                                          // 0x04C0 (size: 0x8)
    class UMaterialInstanceDynamic* dynamicMaterial;                                  // 0x04C8 (size: 0x8)

    void OnEmpty();
    void OnLoaded(class UTexture2D* loadedTexture);
    void OnStartLoad();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalCommonItemIcon(int32 EntryPoint);
}; // Size: 0x4D0

#endif
