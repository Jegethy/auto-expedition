#ifndef UE4SS_SDK_WBP_IngameMenu_WorkSpace_TabSet_HPP
#define UE4SS_SDK_WBP_IngameMenu_WorkSpace_TabSet_HPP

class UWBP_IngameMenu_WorkSpace_TabSet_C : public UWBP_PanelWidgetChildrenSelectorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Inner;                                        // 0x04B0 (size: 0x8)
    class UWBP_IngameMenu_WorkSpace_Category_C* WBP_IngameMenu_WorkSpace_Category;    // 0x04B8 (size: 0x8)
    class UWBP_IngameMenu_WorkSpace_Category_C* WBP_IngameMenu_WorkSpace_Category_1;  // 0x04C0 (size: 0x8)
    class UWBP_IngameMenu_WorkSpace_Category_C* WBP_IngameMenu_WorkSpace_Category_2;  // 0x04C8 (size: 0x8)
    class UWBP_IngameMenu_WorkSpace_Category_C* WBP_IngameMenu_WorkSpace_Category_3;  // 0x04D0 (size: 0x8)
    class UWBP_IngameMenu_WorkSpace_Category_C* WBP_IngameMenu_WorkSpace_Category_4;  // 0x04D8 (size: 0x8)
    class UWBP_IngameMenu_WorkSpace_Category_C* WBP_IngameMenu_WorkSpace_Category_5;  // 0x04E0 (size: 0x8)
    class UWBP_IngameMenu_WorkSpace_Category_C* WBP_IngameMenu_WorkSpace_Category_6;  // 0x04E8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x04F0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_86;                       // 0x04F8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x0500 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_78;                             // 0x0508 (size: 0x8)

    void OnClickedCategoryButton(class UWBP_IngameMenu_WorkSpace_Category_C* Widget);
    void GetTabWidgetByIndex(int32 Index, class UWBP_IngameMenu_WorkSpace_Category_C*& TabWidget);
    void OnChandeFocusIndex(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
    void RegisterPanelWidget(class UPanelWidget*& PanelWidget);
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_IngameMenu_WorkSpace_TabSet_WBP_PalInvisibleButton_86_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_WorkSpace_TabSet_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_IngameMenu_WorkSpace_TabSet(int32 EntryPoint);
}; // Size: 0x510

#endif
