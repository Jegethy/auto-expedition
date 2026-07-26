#ifndef UE4SS_SDK_WBP_PalInGameMenuItemIcon_HPP
#define UE4SS_SDK_WBP_PalInGameMenuItemIcon_HPP

class UWBP_PalInGameMenuItemIcon_C : public UWBP_PalItemIconBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B0 (size: 0x8)
    class UCircularThrobber* CircularThrobber_363;                                    // 0x04B8 (size: 0x8)
    class UImage* Image_Main;                                                         // 0x04C0 (size: 0x8)
    class UImage* Image_Main_BP;                                                      // 0x04C8 (size: 0x8)
    bool EmptySet;                                                                    // 0x04D0 (size: 0x1)

    void OnInitialized();
    void StartLoadEvent();
    void LoadedTextureEvent(class UTexture2D* loadedTexture);
    void EmptyEvent();
    void SetBPIcon(TSoftObjectPtr<UTexture2D> Icon);
    void HideBPIcon();
    void ExecuteUbergraph_WBP_PalInGameMenuItemIcon(int32 EntryPoint);
}; // Size: 0x4D1

#endif
