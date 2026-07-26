#ifndef UE4SS_SDK_WBP_IngameMenu_Construction_TabSet_HPP
#define UE4SS_SDK_WBP_IngameMenu_Construction_TabSet_HPP

class UWBP_IngameMenu_Construction_TabSet_C : public UWBP_PanelWidgetChildrenSelectorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A8 (size: 0x8)
    class UHorizontalBox* Horizontal_Guide_L;                                         // 0x04B0 (size: 0x8)
    class UHorizontalBox* Horizontal_Guide_R;                                         // 0x04B8 (size: 0x8)
    class UHorizontalBox* Horizontal_Tab;                                             // 0x04C0 (size: 0x8)
    class UWBP_IngameMenu_Construction_Tab_C* WBP_IngameMenu_Construction_Tab;        // 0x04C8 (size: 0x8)
    class UWBP_IngameMenu_Construction_Tab_C* WBP_IngameMenu_Construction_Tab_00;     // 0x04D0 (size: 0x8)
    class UWBP_IngameMenu_Construction_Tab_C* WBP_IngameMenu_Construction_Tab_01;     // 0x04D8 (size: 0x8)
    class UWBP_IngameMenu_Construction_Tab_C* WBP_IngameMenu_Construction_Tab_02;     // 0x04E0 (size: 0x8)
    class UWBP_IngameMenu_Construction_Tab_C* WBP_IngameMenu_Construction_Tab_03;     // 0x04E8 (size: 0x8)
    class UWBP_IngameMenu_Construction_Tab_C* WBP_IngameMenu_Construction_Tab_04;     // 0x04F0 (size: 0x8)
    class UWBP_IngameMenu_Construction_Tab_C* WBP_IngameMenu_Construction_Tab_05;     // 0x04F8 (size: 0x8)
    class UWBP_IngameMenu_Construction_Tab_C* WBP_IngameMenu_Construction_Tab_06;     // 0x0500 (size: 0x8)
    class UWBP_IngameMenu_Construction_Tab_C* WBP_IngameMenu_Construction_Tab_07;     // 0x0508 (size: 0x8)
    class UWBP_IngameMenu_Construction_Tab_C* WBP_IngameMenu_Construction_Tab_08;     // 0x0510 (size: 0x8)
    class UWBP_IngameMenu_Construction_Tab_C* WBP_IngameMenu_Construction_Tab_09;     // 0x0518 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x0520 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_1;                              // 0x0528 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_2;                              // 0x0530 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_3;                              // 0x0538 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_L;                              // 0x0540 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_R;                              // 0x0548 (size: 0x8)
    FWBP_IngameMenu_Construction_TabSet_COnHoveredTab OnHoveredTab;                   // 0x0550 (size: 0x10)
    void OnHoveredTab(class UWBP_IngameMenu_Construction_Tab_C* TabWidget);
    FWBP_IngameMenu_Construction_TabSet_COnUnhoveredTab OnUnhoveredTab;               // 0x0560 (size: 0x10)
    void OnUnhoveredTab();
    FPalUICommonItemInfoDisplayData Cached Display Info;                              // 0x0570 (size: 0xC8)

    void OnChangedEnableChild(int32 Index, class UWidget* ChildWidget, bool IsEnable);
    void SetActiveTabByTypeA(EPalBuildObjectTypeA TypeA, bool bTabActive);
    void OnUnhoveredInternal();
    void OnHoveredTabInternal(class UWBP_IngameMenu_Construction_Tab_C* Widget);
    void GetCurrentCategory(EPalBuildObjectTypeA& TypeA);
    void SetNewMark(EPalBuildObjectTypeA TypeA, bool bDisplayMark);
    void OnClickedTabInternal(class UWBP_IngameMenu_Construction_Tab_C* Widget);
    void SelectByTypeA(EPalBuildObjectTypeA TypeA);
    void GetTabWidgetByIndex(int32 Index, class UWBP_IngameMenu_Construction_Tab_C*& TabWidget);
    void OnChangedIndex_Binded(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
    void RegisterPanelWidget(class UPanelWidget*& PanelWidget);
    void Construct();
    void OnChangedInｐutMethod(ECommonInputType bNewInputType);
    void Destruct();
    void ExecuteUbergraph_WBP_IngameMenu_Construction_TabSet(int32 EntryPoint);
    void OnUnhoveredTab__DelegateSignature();
    void OnHoveredTab__DelegateSignature(class UWBP_IngameMenu_Construction_Tab_C* TabWidget);
}; // Size: 0x638

#endif
