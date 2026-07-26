#ifndef UE4SS_SDK_WBP_InGameMainMenu_HPP
#define UE4SS_SDK_WBP_InGameMainMenu_HPP

class UWBP_InGameMainMenu_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UCanvasPanel* CanvasPanel_106;                                              // 0x0480 (size: 0x8)
    class UWBP_MainMenu_C* WBP_MainMenu;                                              // 0x0488 (size: 0x8)
    class UWBP_MainMenu_bg_C* WBP_MainMenu_bg;                                        // 0x0490 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0498 (size: 0x8)
    class UPalUserWidget* CurrentContentWidget;                                       // 0x04A0 (size: 0x8)
    FPalDataTableRowName_UIInputAction NextTabActionName;                             // 0x04A8 (size: 0x8)
    FPalDataTableRowName_UIInputAction PrevTabActionName;                             // 0x04B0 (size: 0x8)
    FPalDataTableRowName_UIInputAction CloseMenuActionName;                           // 0x04B8 (size: 0x8)
    TMap<TEnumAsByte<EPalUIInGameMainMenuTabType::Type>, FDataTableRowHandle> TitleMsgIDMap; // 0x04C0 (size: 0x50)
    bool LockCurrentTab;                                                              // 0x0510 (size: 0x1)
    bool bDisableCancelOnce;                                                          // 0x0511 (size: 0x1)
    FWBP_InGameMainMenu_COnRequestOpenMap_ByQuest OnRequestOpenMap_ByQuest;           // 0x0518 (size: 0x10)
    void OnRequestOpenMap_ByQuest(FName QuestId);
    FPalDataTableRowName_UIInputAction OpenCharacterMenuActionName_Another;           // 0x0528 (size: 0x8)
    TEnumAsByte<EPalUIInGameMainMenuTabType::Type> CurrentTabType;                    // 0x0530 (size: 0x1)
    FPalDataTableRowName_UIInputAction OpenPalStatusActionName;                       // 0x0534 (size: 0x8)

    void OnReturnEsmMenuFromGuideMenu();
    void OnOpenHelpGuideMenu();
    void OnTryClose_Status();
    void OnTryClose_Inventory();
    void OnRequestShowMap(FName QuestId);
    void SelectQuestTab();
    class UWidget* BP_GetDesiredFocusTarget();
    void SelectGuildTab();
    void SelectInventoryEquipmentTab();
    void Select Option Tab();
    void OnAllNewFlagCleared_PalDex();
    void On Update Player Status Point();
    void On Unused Status Points Changed(int32 UnusedPoint);
    void SetupAllAttentionDot();
    void Setup Attention Dot(TEnumAsByte<EPalUIInGameMainMenuTabType::Type> Tab);
    void On Changed Tab Index Event(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
    void SelectPaldexTab();
    void SetupBgText(TEnumAsByte<EPalUIInGameMainMenuTabType::Type> Type);
    void OnCancelAction();
    void AddChildToContentBody(class UPalUserWidget* Widget);
    void OnNextTabAction();
    void OnPrevTabAction();
    void SelectPalTab();
    void SelectTechnologyTab();
    void Select Tab(TEnumAsByte<EPalUIInGameMainMenuTabType::Type> TabType);
    void Setup Input Action();
    void AnmEvent_AllOpen();
    void BndEvt__WBP_InGameMainMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void OnSetup();
    void OnInitialized();
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_InGameMainMenu(int32 EntryPoint);
    void OnRequestOpenMap_ByQuest__DelegateSignature(FName QuestId);
}; // Size: 0x53C

#endif
