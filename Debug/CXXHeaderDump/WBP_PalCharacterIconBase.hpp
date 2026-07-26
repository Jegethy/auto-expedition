#ifndef UE4SS_SDK_WBP_PalCharacterIconBase_HPP
#define UE4SS_SDK_WBP_PalCharacterIconBase_HPP

class UWBP_PalCharacterIconBase_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    FWBP_PalCharacterIconBase_COnLoadedTexture OnLoadedTexture;                       // 0x0458 (size: 0x10)
    void OnLoadedTexture(class UTexture2D* loadedTexture);
    FWBP_PalCharacterIconBase_COnStartLoadTexture OnStartLoadTexture;                 // 0x0468 (size: 0x10)
    void OnStartLoadTexture();
    FWBP_PalCharacterIconBase_COnSetEmpty OnSetEmpty;                                 // 0x0478 (size: 0x10)
    void OnSetEmpty();
    TSoftObjectPtr<UPalIndividualCharacterParameter> BindParameter;                   // 0x0488 (size: 0x30)

    void SetupBySaveParameter(FPalIndividualCharacterSaveParameter SaveParam);
    void SetupBySoftTexture(TSoftObjectPtr<UTexture2D> Texture);
    void OnUpdateSkinName(const FName& NewSkinName);
    void UnbindEvent();
    void SetupByParameter(class UPalIndividualCharacterParameter* Parameter);
    void SetupByHandle(class UPalIndividualCharacterHandle* IndividualHandle);
    void SetEmpty();
    void Setup(FName CharacterID);
    void OnLoaded_2131D8E64037785EDD84EFACA46D7EBC(class UObject* Loaded);
    void LoadIconEvent_Internal(TSoftObjectPtr<UTexture2D> SoftTexture);
    void Destruct();
    void ExecuteUbergraph_WBP_PalCharacterIconBase(int32 EntryPoint);
    void OnSetEmpty__DelegateSignature();
    void OnStartLoadTexture__DelegateSignature();
    void OnLoadedTexture__DelegateSignature(class UTexture2D* loadedTexture);
}; // Size: 0x4B8

#endif
