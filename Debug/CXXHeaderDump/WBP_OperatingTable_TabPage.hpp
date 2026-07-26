#ifndef UE4SS_SDK_WBP_OperatingTable_TabPage_HPP
#define UE4SS_SDK_WBP_OperatingTable_TabPage_HPP

class UWBP_OperatingTable_TabPage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_PassiveSelect;                                        // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_GenderChange;                                         // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_GenderDefault;                                        // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_ON;                                                   // 0x0298 (size: 0x8)
    class UWidgetAnimation* Anm_Empty;                                                // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Num;                                    // 0x02A8 (size: 0x8)
    class UCanvasPanel* Canvas_Gender;                                                // 0x02B0 (size: 0x8)
    class UCanvasPanel* Canvas_HighlightEff_1;                                        // 0x02B8 (size: 0x8)
    class UCanvasPanel* Canvas_Money;                                                 // 0x02C0 (size: 0x8)
    class UCanvasPanel* Canvas_PassiveSkill;                                          // 0x02C8 (size: 0x8)
    class UCanvasPanel* Canvas_RequireMoney;                                          // 0x02D0 (size: 0x8)
    class UCanvasPanel* Canvas_ResetInfo;                                             // 0x02D8 (size: 0x8)
    class UCanvasPanel* Canvas_Skill;                                                 // 0x02E0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Overall;                                          // 0x02E8 (size: 0x8)
    class UImage* Image_Item_Selectframe;                                             // 0x02F0 (size: 0x8)
    class UImage* Image_Money;                                                        // 0x02F8 (size: 0x8)
    class UImage* Image_NoItem;                                                       // 0x0300 (size: 0x8)
    class UImage* Image_Skill_Selectframe;                                            // 0x0308 (size: 0x8)
    class UImage* Image_Symbol_After;                                                 // 0x0310 (size: 0x8)
    class UImage* Image_Symbol_Before;                                                // 0x0318 (size: 0x8)
    class UImage* Image_Symbol_Result;                                                // 0x0320 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Now_Money_Num;                                     // 0x0328 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PassiveName;                                       // 0x0330 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RequireMoney_Num;                                  // 0x0338 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SkillSelectGuide;                                  // 0x0340 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Warning;                                           // 0x0348 (size: 0x8)
    class UVerticalBox* VerticalBox_87;                                               // 0x0350 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton;                                      // 0x0358 (size: 0x8)
    class UWBP_IngameMenu_WorkSpace_Item_C* WBP_IngameMenu_WorkSpace_Item;            // 0x0360 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive;          // 0x0368 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_1;        // 0x0370 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_2;        // 0x0378 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_3;        // 0x0380 (size: 0x8)
    class UWBP_NoData_C* WBP_NoData;                                                  // 0x0388 (size: 0x8)
    class UWBP_PalInGameMenuItemIcon_C* WBP_PalInGameMenuItemIcon;                    // 0x0390 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0398 (size: 0x8)
    FWBP_OperatingTable_TabPage_COnRequireChangeSelectItem OnRequireChangeSelectItem; // 0x03A0 (size: 0x10)
    void OnRequireChangeSelectItem();
    TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*> Passives;                        // 0x03B0 (size: 0x10)
    class UPalIndividualCharacterParameter* CachedCharacter;                          // 0x03C0 (size: 0x8)
    FWBP_OperatingTable_TabPage_COnSelectedPassiveIndex OnSelectedPassiveIndex;       // 0x03C8 (size: 0x10)
    void OnSelectedPassiveIndex(int32 Index);
    FWBP_OperatingTable_TabPage_COnHoveredOtomoPassiveSlot OnHoveredOtomoPassiveSlot; // 0x03D8 (size: 0x10)
    void OnHoveredOtomoPassiveSlot(class UWBP_MainMenu_Pal_Skill_Passive_C* Widget);
    FWBP_OperatingTable_TabPage_COnUnhoveredOtomoPassiveSlot OnUnhoveredOtomoPassiveSlot; // 0x03E8 (size: 0x10)
    void OnUnhoveredOtomoPassiveSlot();
    int32 CachedPassiveSlotIndex;                                                     // 0x03F8 (size: 0x4)
    bool EnabledButton;                                                               // 0x03FC (size: 0x1)
    FWBP_OperatingTable_TabPage_CRequestChangePassiveSkill RequestChangePassiveSkill; // 0x0400 (size: 0x10)
    void RequestChangePassiveSkill(FName PassiveId, int32 SlotIndex);
    TArray<FName> CurrentPassiveList;                                                 // 0x0410 (size: 0x10)
    FWBP_OperatingTable_TabPage_CRequestChangeGender RequestChangeGender;             // 0x0420 (size: 0x10)
    void RequestChangeGender(class UPalIndividualCharacterParameter* CharacterParam);
    FName CurrentPassiveId;                                                           // 0x0430 (size: 0x8)
    int32 CurrentRequireMoney;                                                        // 0x0438 (size: 0x4)
    bool CurrentConsumable;                                                           // 0x043C (size: 0x1)
    bool RequireConsumeItem;                                                          // 0x043D (size: 0x1)
    FName CurrentCurrency;                                                            // 0x0440 (size: 0x8)

    void On Money Changed(int64 NewMoney);
    void On Update Local Player Inventory();
    void On Update Money(int64 NowMoney);
    void RefreshCurrentPassiveItem();
    void UpdateNum(FName UpdateItemNum);
    void ReflectGenderChange();
    void ReflectPassiveChange();
    void Update Button State();
    void OnUnhoveredPassiveSlot(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget);
    void OnHoveredPassiveSlot(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget);
    void GetFocusTarget(class UWidget*& Widget);
    void OnSelectPassiveSlot(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget);
    void Set Gender Reverse();
    void Set Passive Has Item(FName PassiveId);
    void Set Passive Empty Item();
    void SwitchPanel(bool ToPassive);
    void Anm_EmptyLoop();
    void Anm_SetItem();
    void AnmEvent_GenderReverse();
    void AnmEvent_GenderPanelDefault();
    void AnmEvent_PassiveHighlight();
    void BndEvt__WBP_OperatingTable_TabPage_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void Construct();
    void BndEvt__WBP_OperatingTable_TabPage_WBP_CommonButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ConfirmPassiveOperate(bool OK);
    void UpdateCurrentConsumeItem(FName ConsumeItemId);
    void ExecuteUbergraph_WBP_OperatingTable_TabPage(int32 EntryPoint);
    void RequestChangeGender__DelegateSignature(class UPalIndividualCharacterParameter* CharacterParam);
    void RequestChangePassiveSkill__DelegateSignature(FName PassiveId, int32 SlotIndex);
    void OnUnhoveredOtomoPassiveSlot__DelegateSignature();
    void OnHoveredOtomoPassiveSlot__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Passive_C* Widget);
    void OnSelectedPassiveIndex__DelegateSignature(int32 Index);
    void OnRequireChangeSelectItem__DelegateSignature();
}; // Size: 0x448

#endif
