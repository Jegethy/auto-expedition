#ifndef UE4SS_SDK_WBP_MainMenu_Technology_SortCheckBox_HPP
#define UE4SS_SDK_WBP_MainMenu_Technology_SortCheckBox_HPP

class UWBP_MainMenu_Technology_SortCheckBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UPalCheckBox* PalCheckBox_43;                                               // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Title;                                             // 0x0288 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0290 (size: 0x8)
    FWBP_MainMenu_Technology_SortCheckBox_COnItemFilterChanged OnItemFilterChanged;   // 0x0298 (size: 0x10)
    void OnItemFilterChanged(EPalItemTypeA ItemType, bool Enabled);
    EPalItemTypeA Item Type;                                                          // 0x02A8 (size: 0x1)
    EPalBuildObjectTypeA Build Type;                                                  // 0x02A9 (size: 0x1)
    FWBP_MainMenu_Technology_SortCheckBox_COnBuildFilterChanged OnBuildFilterChanged; // 0x02B0 (size: 0x10)
    void OnBuildFilterChanged(EPalBuildObjectTypeA BuildType, bool Enabled);

    void BndEvt__WBP_MainMenu_Technology_SortCheckBox_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void SetupAsItem(EPalItemTypeA ItemType, bool CheckState);
    void SetCheckState(bool Check);
    void SetupAsBuild(EPalBuildObjectTypeA BuildType, bool CheckState);
    void ExecuteUbergraph_WBP_MainMenu_Technology_SortCheckBox(int32 EntryPoint);
    void OnBuildFilterChanged__DelegateSignature(EPalBuildObjectTypeA BuildType, bool Enabled);
    void OnItemFilterChanged__DelegateSignature(EPalItemTypeA ItemType, bool Enabled);
}; // Size: 0x2C0

#endif
