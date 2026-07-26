#ifndef UE4SS_SDK_WBP_IngameMenu_PalBox_Preset_HPP
#define UE4SS_SDK_WBP_IngameMenu_PalBox_Preset_HPP

class UWBP_IngameMenu_PalBox_Preset_C : public UPalUIOtomoLoadoutBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    class UCanvasPanel* Canvas_MenuGuide;                                             // 0x0490 (size: 0x8)
    class UScrollBox* ScrollBox_0;                                                    // 0x0498 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MenuGuide;                                         // 0x04A0 (size: 0x8)
    class UWBP_CommonSelectList_C* WBP_CommonSelectList;                              // 0x04A8 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;        // 0x04B0 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_1;                              // 0x04B8 (size: 0x8)
    int32 LastHoveredIndex;                                                           // 0x04C0 (size: 0x4)
    int32 LastPinedIndex;                                                             // 0x04C4 (size: 0x4)
    FPalUIActionBindData RightClickDisplayAction;                                     // 0x04C8 (size: 0x4)
    class UWBP_IngameMenu_PalBox_PresetList_C* LastViewDetailLoadoutGroup;            // 0x04D0 (size: 0x8)
    TArray<FPalInstanceID> ReplicatedInstanceIds;                                     // 0x04D8 (size: 0x10)
    TMap<class FPalInstanceID, class UPalIndividualCharacterHandle*> ReplicateCharacterParameterMap; // 0x04E8 (size: 0x50)
    FPalInstanceID CurrentWaitSyncInstanceId;                                         // 0x0538 (size: 0x30)

    void HideCharacterDetail();
    void Show Character Detail(int32 LoadoutIndex, int32 CharaIndex);
    void OnSyncIndividualParameter(class UPalIndividualCharacterHandle* Handle, class UPalIndividualCharacterParameter* Parameter);
    void ToggleIndividualParamReplicate(bool Replicate);
    void ClearExtraUIDisplay();
    void OnCloseNameEditWindow(class UPalHUDDispatchParameterBase* Param);
    void EmptyFunction();
    void CancelAction();
    void RightClick_Pad();
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ChangePresetName();
    void OverwritePreset(bool IsConfirm);
    void DeletePreset();
    void SetupListWidget(class UWBP_IngameMenu_PalBox_PresetList_C* ListUI, bool AsPreset, int32 Index);
    void OnPrestOptionSelect(FName SelectId);
    void OnButtonUnhovered(int32 Index);
    void OnButtonHovered(int32 Index);
    void OnPresetRightClicked(int32 Index);
    class UWidget* BP_GetDesiredFocusTarget();
    void OnPresetClicked(int32 Index);
    void OnAddButtonClicked(int32 Index);
    void Setup();
    void Construct();
    void OnSetup();
    void BndEvt__WBP_IngameMenu_PalBox_Preset_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
    void Destruct();
    void ExecuteUbergraph_WBP_IngameMenu_PalBox_Preset(int32 EntryPoint);
}; // Size: 0x568

#endif
