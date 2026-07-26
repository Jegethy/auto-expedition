#ifndef UE4SS_SDK_WBP_PaldexFilteringSettings_SortTypeButton_HPP
#define UE4SS_SDK_WBP_PaldexFilteringSettings_SortTypeButton_HPP

class UWBP_PaldexFilteringSettings_SortTypeButton_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Anm_Select;                                               // 0x0458 (size: 0x8)
    class UWidgetAnimation* Anm_Unselect;                                             // 0x0460 (size: 0x8)
    class UWidgetAnimation* Anm_Focus;                                                // 0x0468 (size: 0x8)
    class UImage* Base;                                                               // 0x0470 (size: 0x8)
    class UImage* Base_Select;                                                        // 0x0478 (size: 0x8)
    class UImage* Frame;                                                              // 0x0480 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SortType;                                          // 0x0488 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0490 (size: 0x8)
    EPalUIPaldexSortType BindSortType;                                                // 0x0498 (size: 0x1)
    TMap<class EPalUIPaldexSortType, class FDataTableRowHandle> SortTypeMsgIDMap;     // 0x04A0 (size: 0x50)
    FWBP_PaldexFilteringSettings_SortTypeButton_COnClicked OnClicked;                 // 0x04F0 (size: 0x10)
    void OnClicked(class UWBP_PaldexFilteringSettings_SortTypeButton_C* Widget);

    void AnmEvent_Focus();
    void AnmEvent_Unfocus();
    void AnmEvent_Select();
    void AnmEvent_Unselect();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_PaldexFilteringSettings_SortTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_PaldexFilteringSettings_SortTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_PaldexFilteringSettings_SortTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_PaldexFilteringSettings_SortTypeButton(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_PaldexFilteringSettings_SortTypeButton_C* Widget);
}; // Size: 0x500

#endif
