#ifndef UE4SS_SDK_WBP_PalItemIconBase_HPP
#define UE4SS_SDK_WBP_PalItemIconBase_HPP

class UWBP_PalItemIconBase_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    FWBP_PalItemIconBase_COnLoadedTexture OnLoadedTexture;                            // 0x0458 (size: 0x10)
    void OnLoadedTexture(class UTexture2D* loadedTexture);
    FWBP_PalItemIconBase_COnStartLoadTexture OnStartLoadTexture;                      // 0x0468 (size: 0x10)
    void OnStartLoadTexture();
    FWBP_PalItemIconBase_COnSetEmpty OnSetEmpty;                                      // 0x0478 (size: 0x10)
    void OnSetEmpty();
    FWBP_PalItemIconBase_COnEnableBPIcon OnEnableBPIcon;                              // 0x0488 (size: 0x10)
    void OnEnableBPIcon(TSoftObjectPtr<UTexture2D> Icon);
    FWBP_PalItemIconBase_COnDisableBPIcon OnDisableBPIcon;                            // 0x0498 (size: 0x10)
    void OnDisableBPIcon();
    FName CurrentItemId;                                                              // 0x04A8 (size: 0x8)

    void Set BPIcon(FName StaticItemId);
    void SetEmpty();
    void Setup(FName StaticItemId);
    void OnLoaded_4877576D403287D740E132872987B748(class UObject* Loaded);
    void LoadIconEvent_Internal(TSoftObjectPtr<UTexture2D> SoftTexture);
    void ExecuteUbergraph_WBP_PalItemIconBase(int32 EntryPoint);
    void OnDisableBPIcon__DelegateSignature();
    void OnEnableBPIcon__DelegateSignature(TSoftObjectPtr<UTexture2D> Icon);
    void OnSetEmpty__DelegateSignature();
    void OnStartLoadTexture__DelegateSignature();
    void OnLoadedTexture__DelegateSignature(class UTexture2D* loadedTexture);
}; // Size: 0x4B0

#endif
