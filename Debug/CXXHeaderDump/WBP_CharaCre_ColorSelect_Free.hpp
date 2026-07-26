#ifndef UE4SS_SDK_WBP_CharaCre_ColorSelect_Free_HPP
#define UE4SS_SDK_WBP_CharaCre_ColorSelect_Free_HPP

class UWBP_CharaCre_ColorSelect_Free_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWBP_CharaCre_ColorSelect_sq_C* WBP_CharaCre_ColorSelect_sq_Custom;         // 0x0280 (size: 0x8)
    class UWBP_ColorSlider_C* WBP_ColorSlider;                                        // 0x0288 (size: 0x8)
    class UMaterialInstanceDynamic* SGradientMaterial;                                // 0x0290 (size: 0x8)
    class UMaterialInstanceDynamic* VGradientMaterial;                                // 0x0298 (size: 0x8)
    FWBP_CharaCre_ColorSelect_Free_COnColorChanged OnColorChanged;                    // 0x02A0 (size: 0x10)
    void OnColorChanged(FLinearColor HSV);
    FWBP_CharaCre_ColorSelect_Free_COnNotifyCustomColorClicked OnNotifyCustomColorClicked; // 0x02B0 (size: 0x10)
    void OnNotifyCustomColorClicked();

    void Set Enable Slider(bool IsEnable);
    void SetColorForce(FLinearColor NewColor);
    void SetColor(FLinearColor NewColor);
    void ApplyColorSetting(bool IsTriggerEvent);
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_CharaCre_ColorSelect_Free_WBP_CharaCre_ColorSelect_sq_Custom_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWBP_CharaCre_ColorSelect_sq_C* Widget);
    void BndEvt__WBP_CharaCre_ColorSelect_Free_WBP_ColorSlider_K2Node_ComponentBoundEvent_4_OnColorChanged__DelegateSignature(FLinearColor HSV);
    void ExecuteUbergraph_WBP_CharaCre_ColorSelect_Free(int32 EntryPoint);
    void OnNotifyCustomColorClicked__DelegateSignature();
    void OnColorChanged__DelegateSignature(FLinearColor HSV);
}; // Size: 0x2C0

#endif
