#ifndef UE4SS_SDK_WBP_Common_ToggleSwitch_HPP
#define UE4SS_SDK_WBP_Common_ToggleSwitch_HPP

class UWBP_Common_ToggleSwitch_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Off_ON;                                               // 0x0280 (size: 0x8)
    class UImage* Image_260;                                                          // 0x0288 (size: 0x8)
    class UImage* Image_Base_Off;                                                     // 0x0290 (size: 0x8)
    class UImage* Image_Base_On;                                                      // 0x0298 (size: 0x8)
    class UImage* Image_Shadow;                                                       // 0x02A0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02A8 (size: 0x8)
    FWBP_Common_ToggleSwitch_COnToggleClicked OnToggleClicked;                        // 0x02B0 (size: 0x10)
    void OnToggleClicked();

    void SetToggleState(bool bIsOn, bool bImmediate);
    void OnButtonBaseClicked_イベント(class UCommonButtonBase* Button);
    void Construct();
    void ExecuteUbergraph_WBP_Common_ToggleSwitch(int32 EntryPoint);
    void OnToggleClicked__DelegateSignature();
}; // Size: 0x2C0

#endif
