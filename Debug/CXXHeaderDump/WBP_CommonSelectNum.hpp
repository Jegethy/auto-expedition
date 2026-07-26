#ifndef UE4SS_SDK_WBP_CommonSelectNum_HPP
#define UE4SS_SDK_WBP_CommonSelectNum_HPP

class UWBP_CommonSelectNum_C : public UPalUISelectNumWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UButton* Button_318;                                                        // 0x0480 (size: 0x8)
    class UCanvasPanel* CanvasPanel_58;                                               // 0x0488 (size: 0x8)
    class UEditableTextBox* EditableTextBox_0;                                        // 0x0490 (size: 0x8)
    class UImage* Image_454;                                                          // 0x0498 (size: 0x8)
    class UButton* LeftButton;                                                        // 0x04A0 (size: 0x8)
    class UButton* rightButton;                                                       // 0x04A8 (size: 0x8)
    int64 NowCount;                                                                   // 0x04B0 (size: 0x8)
    int64 MaxCount;                                                                   // 0x04B8 (size: 0x8)
    FWBP_CommonSelectNum_COnRightButtonClicked OnRightButtonClicked;                  // 0x04C0 (size: 0x10)
    void OnRightButtonClicked();
    FWBP_CommonSelectNum_COnLeftButtonClicked OnLeftButtonClicked;                    // 0x04D0 (size: 0x10)
    void OnLeftButtonClicked();
    FWBP_CommonSelectNum_COnTextCommited OnTextCommited;                              // 0x04E0 (size: 0x10)
    void OnTextCommited(FString NewString);
    int32 MaxDigit;                                                                   // 0x04F0 (size: 0x4)
    class UPalUISelectNumParameter* Parameter;                                        // 0x04F8 (size: 0x8)

    void CheckMaxCount(FString InString, FString& OutString);
    void GetNowCount(int32& Count);
    void Check Numeric(FString checkString, FString& OutString);
    void UpdateText();
    void Increment();
    void Decrement();
    void Setup(int64 inMaxCount, int64 defaultCount);
    void BndEvt__WBP_CommonSelectNum_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__WBP_CommonSelectNum_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_CommonSelectNum_Button_318_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void OnSetup();
    void OnClickedR();
    void OnClickedL();
    void OnEscape();
    void OnTextChanged(FString NewString);
    void ExecuteUbergraph_WBP_CommonSelectNum(int32 EntryPoint);
    void OnTextCommited__DelegateSignature(FString NewString);
    void OnLeftButtonClicked__DelegateSignature();
    void OnRightButtonClicked__DelegateSignature();
}; // Size: 0x500

#endif
