#ifndef UE4SS_SDK_WBP_Expedition_StageList_HPP
#define UE4SS_SDK_WBP_Expedition_StageList_HPP

class UWBP_Expedition_StageList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UCanvasPanel* Canvas_Recruit;                                               // 0x0288 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x0290 (size: 0x8)
    class UOverlay* Overlay_Lock;                                                     // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Difficulty;                                        // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_DungeonName;                                       // 0x02A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_UnlockCondition_1;                                 // 0x02B0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02B8 (size: 0x8)
    FWBP_Expedition_StageList_COnClicked OnClicked;                                   // 0x02C0 (size: 0x10)
    void OnClicked(class UWBP_Expedition_StageList_C* Widget);
    FPalCharacterTeamMissionInfo MyMissionInfo;                                       // 0x02D0 (size: 0x60)
    TMap<class EPalCharacterTeamMissionDifficulty, class FDataTableRowHandle> DifficultyMsgIDMap; // 0x0330 (size: 0x50)
    TMap<class EPalCharacterTeamMissionDifficulty, class FSlateColor> DifficultyTextColorMap; // 0x0380 (size: 0x50)
    FWBP_Expedition_StageList_COnHovered OnHovered;                                   // 0x03D0 (size: 0x10)
    void OnHovered(class UWBP_Expedition_StageList_C* Widget);
    FWBP_Expedition_StageList_COnUnhovered OnUnhovered;                               // 0x03E0 (size: 0x10)
    void OnUnhovered(class UWBP_Expedition_StageList_C* Widget);

    void SetupDisabledMissionInfo();
    void SetupDungeonTexture();
    void SetVisibilityRecruiting(bool bIsVisible);
    void GetMissionInfo(FPalCharacterTeamMissionInfo& MissionInfo);
    void SetupDifficulty();
    void SetupMissionName();
    void GetMissionID(FName& MissionId);
    void Setup(FPalCharacterTeamMissionInfo MissionInfo);
    void AnmEvent_Focus();
    void AnmEvent_Normal();
    void BndEvt__WBP_Expedition_StageList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Expedition_StageList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Expedition_StageList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Expedition_StageList(int32 EntryPoint);
    void OnUnhovered__DelegateSignature(class UWBP_Expedition_StageList_C* Widget);
    void OnHovered__DelegateSignature(class UWBP_Expedition_StageList_C* Widget);
    void OnClicked__DelegateSignature(class UWBP_Expedition_StageList_C* Widget);
}; // Size: 0x3F0

#endif
