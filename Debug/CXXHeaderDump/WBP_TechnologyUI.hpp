#ifndef UE4SS_SDK_WBP_TechnologyUI_HPP
#define UE4SS_SDK_WBP_TechnologyUI_HPP

class UWBP_TechnologyUI_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWBP_InventoryEquipment_ItemInfo_C* WBP_InventoryEquipment_ItemInfo;        // 0x0480 (size: 0x8)
    class UWBP_MainMenu_Technology_00_C* WBP_MainMenu_Technology_00;                  // 0x0488 (size: 0x8)
    FDataTableRowHandle UnlockCheckMsgId;                                             // 0x0490 (size: 0x10)
    class UWBP_MainMenu_Technology_Content_C* lastSelectedButton;                     // 0x04A0 (size: 0x8)
    FVector2D MouseDragScrollMultiply;                                                // 0x04A8 (size: 0x10)
    class UWBP_MainMenu_Technology_Content_C* LastHoveredTechnologyPanel;             // 0x04B8 (size: 0x8)
    FWBP_TechnologyUI_COnAllClearedNewFlag OnAllClearedNewFlag;                       // 0x04C0 (size: 0x10)
    void OnAllClearedNewFlag(TEnumAsByte<EPalUIInGameMainMenuTabType::Type> Tab);
    FText CurrentFilterName;                                                          // 0x04D0 (size: 0x18)
    TSet<EPalItemTypeA> CurrentItemTypeFilter;                                        // 0x04E8 (size: 0x50)
    TSet<EPalBuildObjectTypeA> CurrentBuildTypeFilter;                                // 0x0538 (size: 0x50)
    bool CurrentShowUnlocked;                                                         // 0x0588 (size: 0x1)
    FTimerHandle DelayDisplayTimer;                                                   // 0x0590 (size: 0x8)
    FPalDataTableRowName_UIInputAction OpenTechnologyMenuActionName;                  // 0x0598 (size: 0x8)
    FPalUIActionBindData ShortcutCloseActionHandle;                                   // 0x05A0 (size: 0x4)

    void OnInputAction_ShortcutClose();
    void RegisterShortcutCloseInputAction();
    void CanClose(bool& CanCloseFlag);
    void On Category Filter Applied(TSet<EPalItemTypeA> ItemTypes, TSet<EPalBuildObjectTypeA> BuildTypes, bool ShowUnlocked);
    void SetTechnologyFilter();
    void On Unlocked Any Technology();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnUnhoveredTechnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnHoveredTechnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void On Close Dialog(bool bResult);
    void OnClickedTechnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    void Setup();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_3_OnClickedTchnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
    void BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_4_OnHoveredTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
    void BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_5_OnUnhoveredTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
    void Destruct();
    void BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_1_OnNameFilterApplied__DelegateSignature(FText newText);
    void BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_2_OnFilterButtonClicked__DelegateSignature();
    void DelayDisplay();
    void ExecuteUbergraph_WBP_TechnologyUI(int32 EntryPoint);
    void OnAllClearedNewFlag__DelegateSignature(TEnumAsByte<EPalUIInGameMainMenuTabType::Type> Tab);
}; // Size: 0x5A4

#endif
