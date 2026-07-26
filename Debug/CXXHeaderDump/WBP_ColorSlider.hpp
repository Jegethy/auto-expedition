#ifndef UE4SS_SDK_WBP_ColorSlider_HPP
#define UE4SS_SDK_WBP_ColorSlider_HPP

class UWBP_ColorSlider_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UAnalogSlider* AnalogSlider_H;                                              // 0x0458 (size: 0x8)
    class UAnalogSlider* AnalogSlider_S;                                              // 0x0460 (size: 0x8)
    class UAnalogSlider* AnalogSlider_V;                                              // 0x0468 (size: 0x8)
    class UCanvasPanel* Canvas_H;                                                     // 0x0470 (size: 0x8)
    class UCanvasPanel* Canvas_S;                                                     // 0x0478 (size: 0x8)
    class UCanvasPanel* Canvas_V;                                                     // 0x0480 (size: 0x8)
    class UImage* Image;                                                              // 0x0488 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0490 (size: 0x8)
    class UImage* Image_293;                                                          // 0x0498 (size: 0x8)
    class UWBP_CharaCre_SliderBase_C* WBP_CharaCre_SliderBase_H;                      // 0x04A0 (size: 0x8)
    class UWBP_CharaCre_SliderBase_C* WBP_CharaCre_SliderBase_S;                      // 0x04A8 (size: 0x8)
    class UWBP_CharaCre_SliderBase_C* WBP_CharaCre_SliderBase_V;                      // 0x04B0 (size: 0x8)
    FWBP_ColorSlider_COnColorChanged OnColorChanged;                                  // 0x04B8 (size: 0x10)
    void OnColorChanged(FLinearColor HSV);
    class UMaterialInstanceDynamic* SGradientMaterial;                                // 0x04C8 (size: 0x8)
    class UMaterialInstanceDynamic* VGradientMaterial;                                // 0x04D0 (size: 0x8)
    FLinearColor CurrentHSVColor;                                                     // 0x04D8 (size: 0x10)
    FLinearColor CurrentLinearColor;                                                  // 0x04E8 (size: 0x10)

    void GetLinearColor(FLinearColor& LinearColor);
    void GetHSVColor(FLinearColor& HSV);
    void SetColor(FLinearColor NewColor);
    void SetColorForce(FLinearColor NewColor);
    void Set Enable Slider(bool IsEnable);
    void ApplyColorSetting(bool IsTriggerEvent);
    void Construct();
    void BndEvt__WBP_ColorSlider_AnalogSlider_H_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__WBP_ColorSlider_AnalogSlider_S_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__WBP_ColorSlider_AnalogSlider_V_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void ExecuteUbergraph_WBP_ColorSlider(int32 EntryPoint);
    void OnColorChanged__DelegateSignature(FLinearColor HSV);
}; // Size: 0x4F8

#endif
