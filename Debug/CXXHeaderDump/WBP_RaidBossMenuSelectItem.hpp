#ifndef UE4SS_SDK_WBP_RaidBossMenuSelectItem_HPP
#define UE4SS_SDK_WBP_RaidBossMenuSelectItem_HPP

class UWBP_RaidBossMenuSelectItem_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWBP_Altar_SelectItem_C* WBP_Altar_SelectItem;                              // 0x0480 (size: 0x8)
    class UWBP_Altar_SelectItem_Button_C* LastSelectedSlot;                           // 0x0488 (size: 0x8)
    TArray<FPalDataTableRowName_ItemData> WarningUltraRaidItemId;                     // 0x0490 (size: 0x10)
    FDataTableRowHandle WarningUltraRaidMsgId;                                        // 0x04A0 (size: 0x10)

    class UWidget* BP_GetDesiredFocusTarget();
    void OnClosedDialog_WarningUltraRaid(bool bResult);
    void OnClickSlot_Internal(class UWBP_Altar_SelectItem_Button_C* SelfSlot);
    void OpenUltraRaidWarningDialog();
    void OnUnhoveredSlot(class UWBP_Altar_SelectItem_Button_C* SelfSlot);
    void OnHoveredSlot(class UWBP_Altar_SelectItem_Button_C* SelfSlot);
    void OnClickSlot(class UWBP_Altar_SelectItem_Button_C* SelfSlot);
    void OnUpdateSelectedInfo(class UPalUIMapObjectRaidBossSummonSelectionModel* UIModel);
    void ConstructTargetList();
    void BindUIEvents();
    void GetUIModel(class UPalUIMapObjectRaidBossSummonSelectionModel*& UIModel);
    void Setup();
    void OnSetup();
    void BndEvt__WBP_RaidBossMenuSelectItem_WBP_Altar_SelectItem_K2Node_ComponentBoundEvent_1_OnClickedCloseButton__DelegateSignature();
    void Destruct();
    void ExecuteUbergraph_WBP_RaidBossMenuSelectItem(int32 EntryPoint);
}; // Size: 0x4B0

#endif
