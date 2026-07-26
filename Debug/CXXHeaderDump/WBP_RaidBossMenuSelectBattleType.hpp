#ifndef UE4SS_SDK_WBP_RaidBossMenuSelectBattleType_HPP
#define UE4SS_SDK_WBP_RaidBossMenuSelectBattleType_HPP

class UWBP_RaidBossMenuSelectBattleType_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWBP_Altar_SelectStage_C* WBP_Altar_SelectStage;                            // 0x0480 (size: 0x8)
    class UWBP_Altar_SelectStage_Button_C* LastSelectedSlot;                          // 0x0488 (size: 0x8)

    void UnselectCurrentSlot();
    void GetSelectedSlot(class UWBP_Altar_SelectStage_Button_C*& Return Value);
    class UWidget* BP_GetDesiredFocusTarget();
    void OnClickedSubmitButton();
    void OnUnhoveredSlot(class UWBP_Altar_SelectStage_Button_C* SelfSlot);
    void OnHoveredSlot(class UWBP_Altar_SelectStage_Button_C* SelfSlot);
    void OnClickSlot(class UWBP_Altar_SelectStage_Button_C* SelfSlot);
    void OnUpdateSelectedInfo(class UPalUIMapObjectRaidBossSummonSelectionModel* UIModel);
    void BindUIEvents();
    void GetUIModel(class UPalUIMapObjectRaidBossSummonSelectionModel*& UIModel);
    void Setup();
    void OnSetup();
    void BndEvt__WBP_RaidBossMenuSelectBattleType_WBP_Altar_SelectStage_K2Node_ComponentBoundEvent_0_OnClickedCloseButton__DelegateSignature();
    void BndEvt__WBP_RaidBossMenuSelectBattleType_WBP_Altar_SelectStage_K2Node_ComponentBoundEvent_2_OnClickedBattleTypeButton__DelegateSignature(EPalRaidBossBattleType BattleType);
    void OnClose();
    void ExecuteUbergraph_WBP_RaidBossMenuSelectBattleType(int32 EntryPoint);
}; // Size: 0x490

#endif
