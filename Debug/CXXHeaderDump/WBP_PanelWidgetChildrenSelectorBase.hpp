#ifndef UE4SS_SDK_WBP_PanelWidgetChildrenSelectorBase_HPP
#define UE4SS_SDK_WBP_PanelWidgetChildrenSelectorBase_HPP

class UWBP_PanelWidgetChildrenSelectorBase_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    int32 NowFocusChildIndex;                                                         // 0x0458 (size: 0x4)
    FWBP_PanelWidgetChildrenSelectorBase_COnChangedFocusIndex OnChangedFocusIndex;    // 0x0460 (size: 0x10)
    void OnChangedFocusIndex(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
    FWBP_PanelWidgetChildrenSelectorBase_COnNext OnNext;                              // 0x0470 (size: 0x10)
    void OnNext(int32 OldIndex, int32 NewIndex);
    FWBP_PanelWidgetChildrenSelectorBase_COnPrev OnPrev;                              // 0x0480 (size: 0x10)
    void OnPrev(int32 OldIndex, int32 NewIndex);
    class UPanelWidget* MyPanelWidget;                                                // 0x0490 (size: 0x8)
    FWBP_PanelWidgetChildrenSelectorBase_COnChangeEnableChild OnChangeEnableChild;    // 0x0498 (size: 0x10)
    void OnChangeEnableChild(int32 Index, class UWidget* ChildWidget, bool IsEnable);

    void GetChildrenNum(int32& ChildrenNum);
    void GetPanelChildren(bool& IsValidPanel, TArray<class UWidget*>& Children);
    void GetIndexByWidget(class UWidget* Widget, int32& findedIndex);
    void IsValidIndex(int32 Index, bool& IsValid);
    void SetEnableAllChildren(bool IsEnable);
    void SetEnableChild(bool IsEnable, int32 TargetIndex);
    void IsEnabeChild(int32 Index, bool& IsEnable);
    void SelectByIndex(int32 FocusIndex);
    void SelectPrev();
    void SelectNext();
    void RegisterPanelWidget(class UPanelWidget*& PanelWidget);
    void Construct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PanelWidgetChildrenSelectorBase(int32 EntryPoint);
    void OnChangeEnableChild__DelegateSignature(int32 Index, class UWidget* ChildWidget, bool IsEnable);
    void OnPrev__DelegateSignature(int32 OldIndex, int32 NewIndex);
    void OnNext__DelegateSignature(int32 OldIndex, int32 NewIndex);
    void OnChangedFocusIndex__DelegateSignature(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
}; // Size: 0x4A8

#endif
