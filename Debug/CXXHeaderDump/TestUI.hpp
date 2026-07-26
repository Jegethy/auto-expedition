#ifndef UE4SS_SDK_TestUI_HPP
#define UE4SS_SDK_TestUI_HPP

class UTestUI_C : public UUserWidget
{
    class UScrollBox* ScrollBox_1;                                                    // 0x0278 (size: 0x8)
    class UTextBlock* TestText;                                                       // 0x0280 (size: 0x8)

    ESlateVisibility GetTestTextVisibility();
    void SetTestText(FString Message);
}; // Size: 0x288

#endif
