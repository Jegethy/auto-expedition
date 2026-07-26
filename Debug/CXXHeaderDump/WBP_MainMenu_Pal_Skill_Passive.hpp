#ifndef UE4SS_SDK_WBP_MainMenu_Pal_Skill_Passive_HPP
#define UE4SS_SDK_WBP_MainMenu_Pal_Skill_Passive_HPP

class UWBP_MainMenu_Pal_Skill_Passive_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_EmptySlot_HideToShow;                                 // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_SkillUpdate;                                          // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Default;                                              // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_Selected;                                             // 0x0298 (size: 0x8)
    class UWidgetAnimation* Anm_CommonFocus;                                          // 0x02A0 (size: 0x8)
    class UWidgetAnimation* Anm_ChangeFrame;                                          // 0x02A8 (size: 0x8)
    class UWidgetAnimation* Anm_Rare3_Normal;                                         // 0x02B0 (size: 0x8)
    class UWidgetAnimation* Anm_Rare2_Normal;                                         // 0x02B8 (size: 0x8)
    class UWidgetAnimation* Anm_Rare_Normal;                                          // 0x02C0 (size: 0x8)
    class UWidgetAnimation* Anm_Debuff_Normal;                                        // 0x02C8 (size: 0x8)
    class UWidgetAnimation* Anm_Buff_Normal;                                          // 0x02D0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Info;                                             // 0x02D8 (size: 0x8)
    class UImage* IconRankArrow;                                                      // 0x02E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SkillName;                                         // 0x02E8 (size: 0x8)
    class UWBP_MainMenu_Cursor_C* WBP_MainMenu_Cursor;                                // 0x02F0 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x02F8 (size: 0x8)
    FWBP_MainMenu_Pal_Skill_Passive_COnHovered OnHovered;                             // 0x0300 (size: 0x10)
    void OnHovered(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget);
    FWBP_MainMenu_Pal_Skill_Passive_COnUnhovered OnUnhovered;                         // 0x0310 (size: 0x10)
    void OnUnhovered(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget);
    FName BindedPassiveSkillName;                                                     // 0x0320 (size: 0x8)
    FWBP_MainMenu_Pal_Skill_Passive_COnClicked OnClicked;                             // 0x0328 (size: 0x10)
    void OnClicked(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget);

    void GetBindedPassiveSkillName(FName& PassiveSkillName);
    void Clear();
    void SetPassiveSkill(FName SkillName);
    void AnmEvent_Rare();
    void AnmEvent_Bad();
    void AnmEvent_Common();
    void AnmEvent_Rare2();
    void AnmEvent_Selected();
    void AnmEvent_Unselect();
    void AnmEvent_Update();
    void AnmEvent_ShowEmptySlot();
    void AnmEvent_HideEmptySlot();
    void AnmEvent_Rare3();
    void AnmEvent_TreePassive();
    void Construct();
    void BndEvt__WBP_MainMenu_Pal_Skill_Passive_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_Skill_Passive_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_Skill_Passive_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_MainMenu_Pal_Skill_Passive(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget);
    void OnUnhovered__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget);
    void OnHovered__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget);
}; // Size: 0x338

#endif
