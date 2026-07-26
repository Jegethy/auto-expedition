#ifndef UE4SS_SDK_WBP_PalStorageSortElementFilterCheckBox_HPP
#define UE4SS_SDK_WBP_PalStorageSortElementFilterCheckBox_HPP

class UWBP_PalStorageSortElementFilterCheckBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UPalCheckBox* PalCheckBox_43;                                               // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Title;                                             // 0x0288 (size: 0x8)
    class UWBP_PalElementIcon_C* WBP_PalElementIcon;                                  // 0x0290 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0298 (size: 0x8)
    EPalElementType BindElementType;                                                  // 0x02A0 (size: 0x1)
    FWBP_PalStorageSortElementFilterCheckBox_COnClicked OnClicked;                    // 0x02A8 (size: 0x10)
    void OnClicked(bool bChecked, EPalElementType ElementType);
    FColor Color_Text_Off;                                                            // 0x02B8 (size: 0x4)
    FColor Color_Text_On;                                                             // 0x02BC (size: 0x4)
    FLinearColor NewVar;                                                              // 0x02C0 (size: 0x10)

    void SetCheckedState(bool bChecked);
    void OnChangedStateInternal(bool IsChecked);
    void SetElementType(EPalElementType ElenemtType);
    void BndEvt__WBP_PalStorageSortElementFilterCheckBox_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_PalStorageSortElementFilterCheckBox(int32 EntryPoint);
    void OnClicked__DelegateSignature(bool bChecked, EPalElementType ElementType);
}; // Size: 0x2D0

#endif
