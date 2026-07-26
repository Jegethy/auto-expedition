#ifndef UE4SS_SDK_WBP_IngameMenu_Construction_Tab_HPP
#define UE4SS_SDK_WBP_IngameMenu_Construction_Tab_HPP

class UWBP_IngameMenu_Construction_Tab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Category;                                          // 0x0290 (size: 0x8)
    class UWBP_PalCommonNewMark_0_C* WBP_PalCommonNewMark;                            // 0x0298 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02A0 (size: 0x8)
    TArray<class UWBP_IngameMenuConstruction_TabSub_OLD_C*> Tabs;                     // 0x02A8 (size: 0x10)
    int32 TabNum;                                                                     // 0x02B8 (size: 0x4)
    FWBP_IngameMenu_Construction_Tab_CSwitchTab SwitchTab;                            // 0x02C0 (size: 0x10)
    void SwitchTab(EPalBuildObjectTypeA TypeA);
    EPalBuildObjectTypeA Type A;                                                      // 0x02D0 (size: 0x1)
    bool NowActive;                                                                   // 0x02D1 (size: 0x1)
    int32 LastIndex;                                                                  // 0x02D4 (size: 0x4)
    TMap<class EPalBuildObjectTypeA, class TSoftObjectPtr<UTexture2D>> IconMap;       // 0x02D8 (size: 0x50)
    FWBP_IngameMenu_Construction_Tab_COnClicked OnClicked;                            // 0x0328 (size: 0x10)
    void OnClicked(class UWBP_IngameMenu_Construction_Tab_C* Widget);
    FWBP_IngameMenu_Construction_Tab_COnHovered OnHovered;                            // 0x0338 (size: 0x10)
    void OnHovered(class UWBP_IngameMenu_Construction_Tab_C* Widget);
    FWBP_IngameMenu_Construction_Tab_COnUnhovered OnUnhovered;                        // 0x0348 (size: 0x10)
    void OnUnhovered();

    void SetNewMark(bool bDisplayMark);
    void GetBuildObjectCategoryTypeA(EPalBuildObjectTypeA& TypeA);
    void SwitchToTab();
    void ResetActiveTab();
    void SetActiveTab(int32 Index);
    void GetTabNum(int32& TabNum);
    void SetTab(int32 Num, EPalBuildObjectTypeA TypeA);
    void AnmEvent_Select();
    void AnmEvent_Unselect();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__WBP_IngameMenuConstruction_Tab_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Construction_Tab_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Construction_Tab_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_IngameMenu_Construction_Tab(int32 EntryPoint);
    void OnUnhovered__DelegateSignature();
    void OnHovered__DelegateSignature(class UWBP_IngameMenu_Construction_Tab_C* Widget);
    void OnClicked__DelegateSignature(class UWBP_IngameMenu_Construction_Tab_C* Widget);
    void SwitchTab__DelegateSignature(EPalBuildObjectTypeA TypeA);
}; // Size: 0x358

#endif
