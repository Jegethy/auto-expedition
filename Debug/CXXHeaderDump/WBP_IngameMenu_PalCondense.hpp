#ifndef UE4SS_SDK_WBP_IngameMenu_PalCondense_HPP
#define UE4SS_SDK_WBP_IngameMenu_PalCondense_HPP

class UWBP_IngameMenu_PalCondense_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWidgetAnimation* Anm_SelectFull;                                           // 0x0480 (size: 0x8)
    class UWidgetAnimation* Anm_SelectMaterialPal;                                    // 0x0488 (size: 0x8)
    class UWidgetAnimation* Anm_SelectMainPal;                                        // 0x0490 (size: 0x8)
    class UCanvasPanel* CanvasPanelGet;                                               // 0x0498 (size: 0x8)
    class UHorizontalBox* HorizontalBox_PalWorkIcon;                                  // 0x04A0 (size: 0x8)
    class UProgressBar* ProgressBar_Extract;                                          // 0x04A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LevelValue;                                        // 0x04B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalExtractNum;                                     // 0x04B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalName;                                           // 0x04C0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RegisterPalNumValue;                               // 0x04C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StatusNum_AftAtk;                                  // 0x04D0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StatusNum_AftDef;                                  // 0x04D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StatusNum_AftHp;                                   // 0x04E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StatusNum_PreDef;                                  // 0x04E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StatusNum_PrevAtk;                                 // 0x04F0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StatusNum_PrevHP;                                  // 0x04F8 (size: 0x8)
    class UWBP_BoxPalList_Party_C* WBP_BoxPalList_Party;                              // 0x0500 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton_Invoke;                               // 0x0508 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;        // 0x0510 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Unique_C* WBP_MainMenu_Pal_Skill_Unique;            // 0x0518 (size: 0x8)
    class UWBP_MainMenu_PalRarityStar_C* WBP_MainMenu_PalRarityStar_0;                // 0x0520 (size: 0x8)
    class UWBP_MainMenu_PalRarityStar_C* WBP_MainMenu_PalRarityStar_1;                // 0x0528 (size: 0x8)
    class UWBP_MainMenu_PalRarityStar_C* WBP_MainMenu_PalRarityStar_2;                // 0x0530 (size: 0x8)
    class UWBP_MainMenu_PalRarityStar_C* WBP_MainMenu_PalRarityStar_3;                // 0x0538 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0540 (size: 0x8)
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;                  // 0x0548 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_211;                            // 0x0550 (size: 0x8)
    FDataTableRowHandle BoxNameMsgID;                                                 // 0x0558 (size: 0x10)
    FDataTableRowHandle ConfirmMsgID;                                                 // 0x0568 (size: 0x10)
    FDataTableRowHandle SuccessMsgID;                                                 // 0x0578 (size: 0x10)
    class UPalUIPalCharacterRankUpModel* Model;                                       // 0x0588 (size: 0x8)
    FName InputActionControllerInvokeName;                                            // 0x0590 (size: 0x8)
    TArray<class UWBP_PalCommonCharacterSlotButton_C*> PartyPalSlots;                 // 0x0598 (size: 0x10)
    TArray<class UWBP_MainMenu_PalRarityStar_C*> RarityStars;                         // 0x05A8 (size: 0x10)
    class UPalIndividualCharacterHandle* BasePalHandle;                               // 0x05B8 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* BasePalSlot;                           // 0x05C0 (size: 0x8)
    TArray<class UWBP_PalCommonCharacterSlotButton_C*> CurrentConsumePalSlots;        // 0x05C8 (size: 0x10)
    bool CanInvoke;                                                                   // 0x05D8 (size: 0x1)
    TArray<class UPalIndividualCharacterSlot*> TempSlots;                             // 0x05E0 (size: 0x10)
    FDataTableRowHandle HighRankMsgID;                                                // 0x05F0 (size: 0x10)
    FDataTableRowHandle MaxRankMsgID;                                                 // 0x0600 (size: 0x10)
    int32 WarningLevel;                                                               // 0x0610 (size: 0x4)
    FDataTableRowHandle OverflowRankUpExpMsgID;                                       // 0x0618 (size: 0x10)
    int32 CurrentTribeCount;                                                          // 0x0628 (size: 0x4)
    FText DialogText;                                                                 // 0x0630 (size: 0x18)
    FPalUIActionBindData OnePageSelectAction;                                         // 0x0648 (size: 0x4)
    FPalUIActionBindData OnePageUnselectAction;                                       // 0x064C (size: 0x4)
    FPalUIActionBindData FavoriteInputHandle;                                         // 0x0650 (size: 0x4)
    FPalDataTableRowName_UIInputAction FavoriteShortcutInput;                         // 0x0654 (size: 0x8)
    class UWBP_PalCharacterSlotButtonBase_C* CachedSlot;                              // 0x0660 (size: 0x8)

    void CheckResourceSlotEnable(class UPalIndividualCharacterParameter* individualParam, bool& IsEnable);
    void On Favorite Shortcut();
    void UnregistSlotInputAction();
    void RegistSlotInputAction();
    void OnePageUnselect();
    void OnePageSelect();
    class UWidget* DoCustomNavi_ToBoxRightBottom(EUINavigation Navigation);
    class UWidget* DoCustomNavi_ToInvokeButton(EUINavigation Navigation);
    void RequestInvoke();
    void SetupBoxSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void GetWarningLevel();
    void UpdateBaseCharacterSimulateStatus();
    void UpdateGauge();
    void Update Simulation();
    void On Click Slot(class UWBP_PalCharacterSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void Cancel Condense();
    void Get Consumeable Pal();
    void SetWorkSuitability(class UPalIndividualCharacterParameter* individualParam);
    void SetRank(int32 Rank, int32 ToRank);
    void SetBasePal(class UPalIndividualCharacterHandle* IndividualHandle);
    class UWidget* BP_GetDesiredFocusTarget();
    void OnUnhoverPalSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void OnHoverPalSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void Setup();
    void OnCancelAction();
    void OnSetup();
    void Destruct();
    void BndEvt__WBP_IngameMenu_PalCondense_WBP_CommonButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void ReceiveConfirmInvokeRankup(bool IsConfirmed);
    void OnRankupResultNotified(EPalMapObjectRankUpCharacterResult Result);
    void ConfirmSuccess(bool bResult);
    void BndEvt__WBP_IngameMenu_PalCondense_WBP_Menu_btn_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature();
    void MaxRankConfirm(bool bResult);
    void ReceiveConfirmOverflowRankUpExp(bool bResult);
    void ActionInvokeRankUp();
    void ConfirmInvokeRankUp();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_Party_K2Node_ComponentBoundEvent_2_OnHoverSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_Party_K2Node_ComponentBoundEvent_5_OnUnhoverSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_Party_K2Node_ComponentBoundEvent_7_OnCreatedNewSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalList_Party_K2Node_ComponentBoundEvent_14_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void Construct();
    void ExecuteUbergraph_WBP_IngameMenu_PalCondense(int32 EntryPoint);
}; // Size: 0x668

#endif
