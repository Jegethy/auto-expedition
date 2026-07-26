#ifndef UE4SS_SDK_WBP_IngameMenu_WorkSpace_Slider_HPP
#define UE4SS_SDK_WBP_IngameMenu_WorkSpace_Slider_HPP

class UWBP_IngameMenu_WorkSpace_Slider_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UHorizontalBox* HorizontalBox_0;                                            // 0x0280 (size: 0x8)
    class UProgressBar* ProgressBar_305;                                              // 0x0288 (size: 0x8)
    class USlider* Slider;                                                            // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Num_Max;                                           // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Num_Min;                                           // 0x02A0 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x02A8 (size: 0x8)
    FWBP_IngameMenu_WorkSpace_Slider_COnValueChanged OnValueChanged;                  // 0x02B0 (size: 0x10)
    void OnValueChanged(int64 NewCount);
    int64 Current;                                                                    // 0x02C0 (size: 0x8)

    void On Input Method Changed(ECommonInputType Selection);
    float GetPercent();
    void SetupRange(int64 Min, int64 Max);
    void SetCurrentValue(int64 Current);
    void BndEvt__WBP_IngameMenu_WorkSpace_Slider_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void Construct();
    void ExecuteUbergraph_WBP_IngameMenu_WorkSpace_Slider(int32 EntryPoint);
    void OnValueChanged__DelegateSignature(int64 NewCount);
}; // Size: 0x2C8

#endif
