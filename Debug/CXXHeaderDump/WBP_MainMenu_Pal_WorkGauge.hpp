#ifndef UE4SS_SDK_WBP_MainMenu_Pal_WorkGauge_HPP
#define UE4SS_SDK_WBP_MainMenu_Pal_WorkGauge_HPP

class UWBP_MainMenu_Pal_WorkGauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Image_Off;                                                          // 0x0280 (size: 0x8)
    class UImage* Image_On;                                                           // 0x0288 (size: 0x8)

    void ChangeColor(TEnumAsByte<E_PalUIWorkSuitabilityGaugeColorType::Type> ColorType);
    void Set On(bool Is On);
    void Set Off();
    void ExecuteUbergraph_WBP_MainMenu_Pal_WorkGauge(int32 EntryPoint);
}; // Size: 0x290

#endif
