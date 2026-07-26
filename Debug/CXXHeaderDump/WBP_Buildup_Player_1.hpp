#ifndef UE4SS_SDK_WBP_Buildup_Player_1_HPP
#define UE4SS_SDK_WBP_Buildup_Player_1_HPP

class UWBP_Buildup_Player_1_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UCanvasPanel* Canvas_NothingRelic;                                          // 0x0458 (size: 0x8)
    class UCanvasPanel* Canvas_Scroll;                                                // 0x0460 (size: 0x8)
    class USizeBox* SizeBox_ConfirmButton;                                            // 0x0468 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Info_1;                                            // 0x0470 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item;                        // 0x0478 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_1;                      // 0x0480 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_2;                      // 0x0488 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_3;                      // 0x0490 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_4;                      // 0x0498 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_5;                      // 0x04A0 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_6;                      // 0x04A8 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_7;                      // 0x04B0 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_8;                      // 0x04B8 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_9;                      // 0x04C0 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_10;                     // 0x04C8 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_11;                     // 0x04D0 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_12;                     // 0x04D8 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_13;                     // 0x04E0 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_14;                     // 0x04E8 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_15;                     // 0x04F0 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_16;                     // 0x04F8 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_17;                     // 0x0500 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_18;                     // 0x0508 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_19;                     // 0x0510 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_20;                     // 0x0518 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_21;                     // 0x0520 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_22;                     // 0x0528 (size: 0x8)
    class UWBP_Buildup_Player_Item_C* WBP_Buildup_Player_Item_23;                     // 0x0530 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton_Confirm;                              // 0x0538 (size: 0x8)
    class UWBP_MainMenu_PalSkillInfo_C* WBP_MainMenu_PalSkillInfo;                    // 0x0540 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn_Close;                                        // 0x0548 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList;                        // 0x0550 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x0558 (size: 0x8)
    class UWrapBox* WrapBox_HaveItem;                                                 // 0x0560 (size: 0x8)
    class UWrapBox* WrapBox_RequireItem;                                              // 0x0568 (size: 0x8)
    TMap<class EPalRelicType, class UWBP_Buildup_Player_Item_C*> InInventoryRelicCountWidgetMap; // 0x0570 (size: 0x50)
    TMap<class EPalRelicType, class UWBP_Buildup_Player_Item_C*> RequireRelicCountWidgetMap; // 0x05C0 (size: 0x50)
    TMap<class EPalRelicType, class UWBP_Buildup_Player_StatusContent_C*> OperationWidgetMap; // 0x0610 (size: 0x50)
    TSoftObjectPtr<UPalCharacterStatusOperation> SoftStatusOpetation;                 // 0x0660 (size: 0x30)
    FWBP_Buildup_Player_1_COnClickedConfirm OnClickedConfirm;                         // 0x0690 (size: 0x10)
    void OnClickedConfirm();
    FPalDataTableRowName_UIInputAction QuickConfirmAction;                            // 0x06A0 (size: 0x8)
    FPalUIActionBindData QuickConfirmActionHandle;                                    // 0x06A8 (size: 0x4)
    FWBP_Buildup_Player_1_COnClickedCloseButton OnClickedCloseButton;                 // 0x06B0 (size: 0x10)
    void OnClickedCloseButton();
    bool bIsParentRequesting;                                                         // 0x06C0 (size: 0x1)

    void SetIsParentRequesting(bool NewIsParentRequesting);
    void SetAllOperationWidgetAcceptInput(bool NewAcceptInput);
    void OnInputAction_QuckConfirm();
    void SetEnableQuickConfirmAction(bool bEnableAction);
    class UWidget* GetTopFocusTarget();
    class UWidget* DoCustomNavigation_ToConfirmButton(EUINavigation Navigation);
    void UpdateConfirmButton();
    class UWidget* DoCustomNavigation_ToListTop(EUINavigation Navigation);
    class UWidget* DoCustomNavigation_ToCloseButton(EUINavigation Navigation);
    class UWidget* DoCustomNavigation_ToListBottom(EUINavigation Navigation);
    void OnSimulationChanged(EPalRelicType RelicType, int32 OriginalRank, int32 CurrentSimulationRank);
    void ResetSimulationAndUpdateAll();
    void CollectSimulationInfo(TMap<EPalRelicType, int32>& RankupInfo);
    void OnUnhoveredRelicPanel(class UWBP_Buildup_Player_StatusContent_C* Widget);
    void OnHoveredRelicPanel(class UWBP_Buildup_Player_StatusContent_C* Widget);
    void GetRestoreFocusTarget(class UWidget*& Widget);
    void SetNothingRelic(bool bNothingRelic);
    void UpdateRequireRelicCount();
    void UpdateCurrentRelicCount();
    void SetCurrentRelicCountMap(TMap<EPalRelicType, int32> RelicCountMap);
    void AnmEvent_Rankup(const TArray<EPalRelicType>& RelicTypeArray);
    void Destruct();
    void BndEvt__WBP_Buildup_Player_1_WBP_CommonButton_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_Buildup_Player_1_WBP_Menu_btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_WBP_Buildup_Player_1(int32 EntryPoint);
    void OnClickedCloseButton__DelegateSignature();
    void OnClickedConfirm__DelegateSignature();
}; // Size: 0x6C1

#endif
