#ifndef UE4SS_SDK_DupeButton_HPP
#define UE4SS_SDK_DupeButton_HPP

class UDupeButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UTextBlock* ActiveText;                                                     // 0x0280 (size: 0x8)
    class UButton* Button;                                                            // 0x0288 (size: 0x8)
    class UBorder* InactiveBackground;                                                // 0x0290 (size: 0x8)
    class UTextBlock* InactiveText;                                                   // 0x0298 (size: 0x8)
    FDupeButton_CCustomOnClick CustomOnClick;                                         // 0x02A0 (size: 0x10)
    void CustomOnClick();

    void SetText(FText Text);
    void Set Fonts(FSlateFontInfo Font);
    void BndEvt__DupeButton_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__DupeButton_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__DupeButton_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_DupeButton(int32 EntryPoint);
    void CustomOnClick__DelegateSignature();
}; // Size: 0x2B0

#endif
