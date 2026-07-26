#ifndef UE4SS_SDK_WBP_PalStorageSortTypeButton_HPP
#define UE4SS_SDK_WBP_PalStorageSortTypeButton_HPP

class UWBP_PalStorageSortTypeButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Select;                                               // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Unselect;                                             // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_UnfocusToFocus;                                       // 0x0290 (size: 0x8)
    class UImage* Base;                                                               // 0x0298 (size: 0x8)
    class UImage* Base_Select;                                                        // 0x02A0 (size: 0x8)
    class UImage* Frame;                                                              // 0x02A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SortType;                                          // 0x02B0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02B8 (size: 0x8)
    EPalCharacterContainerSortType BindSortType;                                      // 0x02C0 (size: 0x1)
    FWBP_PalStorageSortTypeButton_COnClicked OnClicked;                               // 0x02C8 (size: 0x10)
    void OnClicked(class UWBP_PalStorageSortTypeButton_C* Widget);
    TMap<class EPalCharacterContainerSortType, class FDataTableRowHandle> BoxSortTypeMsgIDMap; // 0x02D8 (size: 0x50)

    void GetBindedSortType(EPalCharacterContainerSortType& SortType);
    void AnmEvent_Focus();
    void AnmEvent_Unfocus();
    void AnmEvent_ResetFocus();
    void AnmEvent_ResetSelect();
    void AnmEvent_Select();
    void AnmEvent_Unselect();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__WBP_PalStorageSortTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_PalStorageSortTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_PalStorageSortTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_PalStorageSortTypeButton(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_PalStorageSortTypeButton_C* Widget);
}; // Size: 0x328

#endif
