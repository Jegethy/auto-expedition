#ifndef UE4SS_SDK_WBP_PalStorageSortWorkSuitabilityFilterCheckBox_HPP
#define UE4SS_SDK_WBP_PalStorageSortWorkSuitabilityFilterCheckBox_HPP

class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UPalCheckBox* PalCheckBox_43;                                               // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Title;                                             // 0x0288 (size: 0x8)
    class UWBP_IconPalWork_C* WBP_IconPalWork;                                        // 0x0290 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0298 (size: 0x8)
    EPalWorkSuitability BindSuitability;                                              // 0x02A0 (size: 0x1)
    FWBP_PalStorageSortWorkSuitabilityFilterCheckBox_COnClicked OnClicked;            // 0x02A8 (size: 0x10)
    void OnClicked(bool bChecked, EPalWorkSuitability WorkSuitbility);

    void SetCheckedState(bool bChecked);
    void OnChangedStateInternal(bool IsChecked);
    void SetWorkSuitability(EPalWorkSuitability WorkSuitability);
    void BndEvt__WBP_PalStorageSortElementFilterCheckBox_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_PalStorageSortWorkSuitabilityFilterCheckBox(int32 EntryPoint);
    void OnClicked__DelegateSignature(bool bChecked, EPalWorkSuitability WorkSuitbility);
}; // Size: 0x2B8

#endif
