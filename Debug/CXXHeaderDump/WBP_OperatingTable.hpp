#ifndef UE4SS_SDK_WBP_OperatingTable_HPP
#define UE4SS_SDK_WBP_OperatingTable_HPP

class UWBP_OperatingTable_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UCanvasPanel* Canvas_ItemList;                                              // 0x0480 (size: 0x8)
    class UCanvasPanel* CanvasPanel_1;                                                // 0x0488 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Tab;                                          // 0x0490 (size: 0x8)
    class UImage* Select;                                                             // 0x0498 (size: 0x8)
    class UBP_PalTextBlock_C* Text_GuildMenberHead;                                   // 0x04A0 (size: 0x8)
    class UWBP_Buildup_TabButton_C* WBP_Buildup_TabButton_Gender;                     // 0x04A8 (size: 0x8)
    class UWBP_Buildup_TabButton_C* WBP_Buildup_TabButton_Passive;                    // 0x04B0 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;        // 0x04B8 (size: 0x8)
    class UWBP_MainMenu_PalSkillInfo_C* WBP_MainMenu_PalSkillInfo;                    // 0x04C0 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn_Close;                                        // 0x04C8 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn_ListClose;                                    // 0x04D0 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList;                                      // 0x04D8 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_1;                                    // 0x04E0 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_2;                                    // 0x04E8 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_3;                                    // 0x04F0 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_4;                                    // 0x04F8 (size: 0x8)
    class UWBP_OperatingTable_TabPage_C* WBP_OperatingTable_TabPage;                  // 0x0500 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList_Item;                   // 0x0508 (size: 0x8)
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;                                // 0x0510 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_1;                              // 0x0518 (size: 0x8)
    TArray<class UWBP_Menu_PalList_C*> PalList;                                       // 0x0520 (size: 0x10)
    class UPalMapObjectOperatingTableModel* OperatingTableModel;                      // 0x0530 (size: 0x8)
    bool Hovering;                                                                    // 0x0538 (size: 0x1)
    class UPalIndividualCharacterHandle* CurrentHandle;                               // 0x0540 (size: 0x8)
    bool PinDetail;                                                                   // 0x0548 (size: 0x1)
    bool Requested;                                                                   // 0x0549 (size: 0x1)
    int32 CurrentTab;                                                                 // 0x054C (size: 0x4)
    bool ParamUpdated;                                                                // 0x0550 (size: 0x1)
    bool Notified;                                                                    // 0x0551 (size: 0x1)
    class UPalIndividualCharacterParameter* BindedCharacterParam;                     // 0x0558 (size: 0x8)
    bool Updated;                                                                     // 0x0560 (size: 0x1)
    FName CachedConsumeItemId;                                                        // 0x0564 (size: 0x8)
    FTimerHandle RefreshTimer;                                                        // 0x0570 (size: 0x8)

    void RefreshItemDisplay();
    void OnHoveredPalPassiveSlot(class UWBP_MainMenu_Pal_Skill_Passive_C* Widget);
    void OnUnhoveredPasssiveItem();
    void OnHoveredPassiveItem(class UWBP_OperatingTable_ItemList_C* Widget);
    void On Select Passive Change(FName PassiveId, FName ConsumeItemId);
    class UWidget* BP_GetDesiredFocusTarget();
    void SetupPassiveChangeItem();
    void CloseAction();
    void On Click Pal List(class UPalIndividualCharacterHandle* Handle);
    void OnUnhoverPalList();
    void OnHoverPalList(class UPalIndividualCharacterHandle* Handle);
    void Setup();
    void OnSetup();
    void OnInitialized();
    void OnOperatingPassiveNotifyied(bool Success);
    void Destruct();
    void BndEvt__WBP_OperatingTable_WBP_Menu_btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void SwitchPassive();
    void SwitchGender();
    void SwitchTab(int32 Tab);
    void BndEvt__WBP_OperatingTable_WBP_OperatingTable_TabPage_K2Node_ComponentBoundEvent_1_OnRequireChangeSelectItem__DelegateSignature();
    void BndEvt__WBP_OperatingTable_WBP_Menu_btn_ListClose_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_OperatingTable_WBP_OperatingTable_TabPage_K2Node_ComponentBoundEvent_3_OnHoveredOtomoPassiveSlot__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Passive_C* Widget);
    void BndEvt__WBP_OperatingTable_WBP_OperatingTable_TabPage_K2Node_ComponentBoundEvent_4_OnUnhoveredOtomoPassiveSlot__DelegateSignature();
    void BndEvt__WBP_OperatingTable_WBP_OperatingTable_TabPage_K2Node_ComponentBoundEvent_6_RequestChangePassiveSkill__DelegateSignature(FName PassiveId, int32 SlotIndex);
    void OnOperatingGenderNotifyied(bool Success);
    void BndEvt__WBP_OperatingTable_WBP_OperatingTable_TabPage_K2Node_ComponentBoundEvent_5_RequestChangeGender__DelegateSignature(class UPalIndividualCharacterParameter* CharacterParam);
    void OnPassiveUpdate(const TArray<FName>& PassiveIds);
    void OnGenderUpdate(EPalGenderType NewGender);
    void ExecuteUbergraph_WBP_OperatingTable(int32 EntryPoint);
}; // Size: 0x578

#endif
