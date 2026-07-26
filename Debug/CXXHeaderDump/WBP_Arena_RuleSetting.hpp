#ifndef UE4SS_SDK_WBP_Arena_RuleSetting_HPP
#define UE4SS_SDK_WBP_Arena_RuleSetting_HPP

class UWBP_Arena_RuleSetting_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_RestrictOtomo;                          // 0x0480 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Title;                                  // 0x0488 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Matching;                                         // 0x0490 (size: 0x8)
    class UImage* Image_RankIcon;                                                     // 0x0498 (size: 0x8)
    class UScrollBox* ScrollBox;                                                      // 0x04A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PlayerName_Lv;                                     // 0x04A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PlayerName_P1;                                     // 0x04B0 (size: 0x8)
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon;                                    // 0x04B8 (size: 0x8)
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_1;                                  // 0x04C0 (size: 0x8)
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_2;                                  // 0x04C8 (size: 0x8)
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_3;                                  // 0x04D0 (size: 0x8)
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_4;                                  // 0x04D8 (size: 0x8)
    class UWBP_Arena_Rule_ListGroup_C* WBP_Arena_Rule_ListGroup;                      // 0x04E0 (size: 0x8)
    class UWBP_Arena_RuleSetting_Pal_C* WBP_Arena_RuleSetting_Pal;                    // 0x04E8 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton;                                      // 0x04F0 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;        // 0x04F8 (size: 0x8)
    class UWBP_MainMenu_PalSkillInfo_C* WBP_MainMenu_PalSkillInfo;                    // 0x0500 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0508 (size: 0x8)
    class UPalHUDDispatchParameter_ArenaRule* ArenaRuleParamter;                      // 0x0510 (size: 0x8)
    FPalArenaRule CurrentRule;                                                        // 0x0518 (size: 0x38)
    TArray<class UWBP_Arena_PalIcon_C*> OtomoPalIcons;                                // 0x0550 (size: 0x10)
    FPalUIActionBindData SaveRuleAction;                                              // 0x0560 (size: 0x4)
    FPalUIActionBindData DefaultRuleAction;                                           // 0x0564 (size: 0x4)

    void SaveRule();
    void SetDefaultRule();
    class UWidget* BP_GetDesiredFocusTarget();
    void RefreshOtomoRestriction();
    void CancelAction();
    void ShowRestrictPalDetail();
    void OnotomoIconUnhovered();
    void OnOtomoIconHovered(class UWBP_Arena_PalIcon_C* Icon);
    void OnRuleChanged(FPalArenaRule NewRule);
    void Setup();
    void BndEvt__WBP_Arena_RuleSetting_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void OnSetup();
    void BndEvt__WBP_Arena_RuleSetting_WBP_CommonButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void OnInitialized();
    void Construct();
    void BndEvt__WBP_Arena_RuleSetting_WBP_Arena_RuleSetting_Pal_K2Node_ComponentBoundEvent_2_OnCloseButtonClicked__DelegateSignature();
    void BndEvt__WBP_Arena_RuleSetting_WBP_Arena_RuleSetting_Pal_K2Node_ComponentBoundEvent_3_OnToggleCharacterRestrict__DelegateSignature(FName CharacterID, class UWBP_Arena_RuleSetting_PalListButton_C* Widget);
    void BndEvt__WBP_Arena_RuleSetting_WBP_Arena_RuleSetting_Pal_K2Node_ComponentBoundEvent_4_OnChangeAll__DelegateSignature(bool IsBan);
    void BndEvt__WBP_Arena_RuleSetting_WBP_Arena_Rule_ListGroup_K2Node_ComponentBoundEvent_5_ToggleLevelSyncInfo__DelegateSignature(bool Show);
    void ExecuteUbergraph_WBP_Arena_RuleSetting(int32 EntryPoint);
}; // Size: 0x568

#endif
