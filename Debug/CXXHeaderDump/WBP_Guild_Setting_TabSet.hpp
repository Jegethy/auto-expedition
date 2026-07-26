#ifndef UE4SS_SDK_WBP_Guild_Setting_TabSet_HPP
#define UE4SS_SDK_WBP_Guild_Setting_TabSet_HPP

class UWBP_Guild_Setting_TabSet_C : public UWBP_PanelWidgetChildrenSelectorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Tab;                                          // 0x04B0 (size: 0x8)
    class UWBP_OptionSettings_TabButton_C* WBP_OptionSettings_TabButton_Notice;       // 0x04B8 (size: 0x8)
    class UWBP_OptionSettings_TabButton_C* WBP_OptionSettings_TabButton_Role;         // 0x04C0 (size: 0x8)
    FDataTableRowHandle RoleTabMsgID;                                                 // 0x04C8 (size: 0x10)
    FDataTableRowHandle NoticeTabMsgID;                                               // 0x04D8 (size: 0x10)

    void GetTabWidgetByIndex(int32 Index, class UWBP_OptionSettings_TabButton_C*& TabWidget);
    void RegisterPanelWidget(class UPanelWidget*& PanelWidget);
    void OnChangedFocusIndex_Binded(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
    void OnInitialized();
    void Construct();
    void BndEvt__WBP_Guild_Setting_TabSet_WBP_OptionSettings_TabButton_Role_K2Node_ComponentBoundEvent_0_SwitchTabTo__DelegateSignature(int32 Index);
    void BndEvt__WBP_Guild_Setting_TabSet_WBP_OptionSettings_TabButton_Notice_K2Node_ComponentBoundEvent_1_SwitchTabTo__DelegateSignature(int32 Index);
    void Destruct();
    void ExecuteUbergraph_WBP_Guild_Setting_TabSet(int32 EntryPoint);
}; // Size: 0x4E8

#endif
