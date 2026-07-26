#ifndef UE4SS_SDK_WBP_PalKeyGuideIcon_HPP
#define UE4SS_SDK_WBP_PalKeyGuideIcon_HPP

class UWBP_PalKeyGuideIcon_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UPalUIActionWidgetBase* PalUIActionWidgetBase_24;                           // 0x0458 (size: 0x8)
    class USizeBox* SizeBox_0;                                                        // 0x0460 (size: 0x8)
    FPalDataTableRowName_UIInputAction bindActionName;                                // 0x0468 (size: 0x8)
    TMap<class ECommonInputType, class FSlateBrush> OverrideImageMap;                 // 0x0470 (size: 0x50)
    bool EnableOverrideImage;                                                         // 0x04C0 (size: 0x1)

    void OnUISettingChanged(const FPalOptionUISettings& PrevSettings, const FPalOptionUISettings& NewSettings);
    void OverrideInputType(ECommonInputType InputType);
    void SetOverrideSize(FVector2D Size);
    void OverrideImage();
    void SetInputAction(FName ActionName);
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_PalKeyGuideIcon_PalUIActionWidgetBase_24_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
    void UpdateOverrideImage(const FPalKeyConfigSettings& PrevSettings, const FPalKeyConfigSettings& NewSettings);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_PalKeyGuideIcon(int32 EntryPoint);
}; // Size: 0x4C1

#endif
