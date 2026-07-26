#ifndef UE4SS_SDK_WBP_PalExpedition_HPP
#define UE4SS_SDK_WBP_PalExpedition_HPP

class UWBP_PalExpedition_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UCircularThrobber* CircularThrobber_69;                                     // 0x0480 (size: 0x8)
    class UOverlay* Overlay_WaitRep;                                                  // 0x0488 (size: 0x8)
    class UWBP_Expedition_C* WBP_Expedition;                                          // 0x0490 (size: 0x8)
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;                                // 0x0498 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelActionHandle_Default;                    // 0x04A0 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelActionHandle_Escape;                     // 0x04A8 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelActionHandle_Tab;                        // 0x04B0 (size: 0x8)
    TArray<FPalUIMapObjectCharacterTeamMissionIndividual> CachedAssignInfo;           // 0x04B8 (size: 0x10)
    bool AlreadyInternalSetup;                                                        // 0x04C8 (size: 0x1)
    double RightStickAxisY;                                                           // 0x04D0 (size: 0x8)
    double ScrollPerSecond;                                                           // 0x04D8 (size: 0x8)
    FPalUIActionBindData FavoriteInputHandle;                                         // 0x04E0 (size: 0x4)
    FPalDataTableRowName_UIInputAction FavoriteShortcutInput;                         // 0x04E4 (size: 0x8)
    class UPalIndividualCharacterSlot* CachedLastHoveredSlot;                         // 0x04F0 (size: 0x8)

    void OnClickedSlot_ExcludeChaarcter(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void OnClickedSlot_AssignCharacter(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void On Favorite Shortcut();
    void UnregistSlotInputAction();
    void RegistSlotInputAction();
    void IsMaxAssigned(bool& BMax);
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void Setup_Internal();
    void UpdateSelectedPalListForClientByInstanceId_Add(FPalInstanceID InstanceId);
    void UpdateSelectedPalListForClient_Add(FPalUIMapObjectCharacterTeamMissionIndividual AssignInfo);
    void UpdateSelectedPalListForClientByInstanceId_Remove(FPalInstanceID InstanceId);
    void UpdateSelectedPalListForClient_Remove(FPalUIMapObjectCharacterTeamMissionIndividual AssignInfo);
    void OnTab();
    void OnCancelAction();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnChangedAssignInfo(class UPalUIMapObjectCharacterTeamMissionModel* Model);
    void OnChangedState(const EPalMapObjectCharacterTeamMissionState LastState, const EPalMapObjectCharacterTeamMissionState CurrentState);
    void Finalize();
    void OnChangedMission(class UPalUIMapObjectCharacterTeamMissionModel* Model);
    void Setup();
    void GetModel(class UPalUIMapObjectCharacterTeamMissionModel*& Model);
    void OnSetup();
    void BndEvt__WBP_PalExpedition_WBP_Expedition_K2Node_ComponentBoundEvent_2_OnClickedMissionPanel__DelegateSignature(class UWBP_Expedition_StageList_C* Widget);
    void BndEvt__WBP_PalExpedition_WBP_Expedition_K2Node_ComponentBoundEvent_6_OnClickedCloseButton__DelegateSignature();
    void BndEvt__WBP_PalExpedition_WBP_Expedition_K2Node_ComponentBoundEvent_7_OnClickedCharacterSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void BndEvt__WBP_PalExpedition_WBP_Expedition_K2Node_ComponentBoundEvent_8_OnClickedReturnMissionSelectButton__DelegateSignature();
    void Destruct();
    void BndEvt__WBP_PalExpedition_WBP_Expedition_K2Node_ComponentBoundEvent_9_OnClickedAutoSelectButton__DelegateSignature();
    void BndEvt__WBP_PalExpedition_WBP_Expedition_K2Node_ComponentBoundEvent_10_OnClickedAllUnassignButton__DelegateSignature();
    void BndEvt__WBP_PalExpedition_WBP_Expedition_K2Node_ComponentBoundEvent_11_OnClickedAssignedPalPanel__DelegateSignature(class UWBP_Expedition_PalList_C* Widget);
    void BndEvt__WBP_PalExpedition_WBP_Expedition_K2Node_ComponentBoundEvent_12_OnHoveredCharacterSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_PalExpedition_WBP_Expedition_K2Node_ComponentBoundEvent_13_OnUnhoveredCharacterSlot__DelegateSignature();
    void BndEvt__WBP_PalExpedition_WBP_Expedition_K2Node_ComponentBoundEvent_14_OnClickedStartMissionButton__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_PalExpedition_WBP_Expedition_K2Node_ComponentBoundEvent_0_OnClickedStartExcludeSettingsButton__DelegateSignature();
    void BndEvt__WBP_PalExpedition_WBP_Expedition_K2Node_ComponentBoundEvent_1_OnClickedEndExcludeSettingsButton__DelegateSignature();
    void ExecuteUbergraph_WBP_PalExpedition(int32 EntryPoint);
}; // Size: 0x4F8

#endif
