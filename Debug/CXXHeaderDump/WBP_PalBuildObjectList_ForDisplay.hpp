#ifndef UE4SS_SDK_WBP_PalBuildObjectList_ForDisplay_HPP
#define UE4SS_SDK_WBP_PalBuildObjectList_ForDisplay_HPP

class UWBP_PalBuildObjectList_ForDisplay_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UImage* Image_ForCollision;                                                 // 0x0480 (size: 0x8)
    class UWBP_IngameMenu_Construction_Menu_C* WBP_IngameMenu_Construction_Menu;      // 0x0488 (size: 0x8)
    class UBP_InGameMenuBuildModel_C* UIBuildModel;                                   // 0x0490 (size: 0x8)
    FPalDataTableRowName_UIInputAction FavoriteInputAction;                           // 0x0498 (size: 0x8)
    FPalDataTableRowName_UIInputAction DismantleInputAction;                          // 0x04A0 (size: 0x8)
    FPalDataTableRowName_UIInputAction NextTabInputAction;                            // 0x04A8 (size: 0x8)
    FPalDataTableRowName_UIInputAction PrevTabInputAction;                            // 0x04B0 (size: 0x8)
    FPalUIActionBindData FavoriteInoutActionHandle;                                   // 0x04B8 (size: 0x4)
    TSoftObjectPtr<UWBP_IngameMenu_Construction_Icon_C> LastHoveredBuildObjectWidget; // 0x04C0 (size: 0x30)
    FPalDataTableRowName_UIInputAction PaintModeInputAction;                          // 0x04F0 (size: 0x8)
    bool bLaunchBuilderMode;                                                          // 0x04F8 (size: 0x1)
    bool bEnableMouseWheelCategoryChange;                                             // 0x04F9 (size: 0x1)
    FPalDataTableRowName_UIInputAction CloseUIForMouseInputAction;                    // 0x04FC (size: 0x8)
    FPalDataTableRowName_UIInputAction CloseUIGeneralInputAction;                     // 0x0504 (size: 0x8)
    bool bFirstCategoryChange;                                                        // 0x050C (size: 0x1)
    FPalDataTableRowName_UIInputAction TabInputAction;                                // 0x0510 (size: 0x8)
    FPalUIActionBindData TabActionHandle;                                             // 0x0518 (size: 0x4)

    void OnDummyAction();
    void OnInputMethodChanged(ECommonInputType bNewInputType);
    void OnCancelAction_Tab();
    void Setup Tab Active();
    void ScrollToBuildObject(FName BuildObjectId);
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnInputAction_Close();
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void UnregisterBuilderModeCameraOffset();
    void AddCameraOffset();
    void SetupTabNewMark();
    void TryRemoveNewMark(class UWBP_IngameMenu_Construction_Icon_C* IconWidget);
    void OnInputAction_PaintMode();
    void GetNewPageFocusTargetWidget(class UWBP_IngameMenu_Construction_Icon_C*& Widget);
    void GetNewPageFocusTarget(class UWidget*& Widget);
    void ToggleFavorite();
    void UnregisterFavoriteAction();
    void RegisterFavoriteAction();
    void OnInputAction_Dismantle();
    void OnInputAction_PrevTab();
    void OnInputAction_NextTab();
    void OnSelectedBuildObject(FPalBuildObjectData BuildObject);
    class UWidget* BP_GetDesiredFocusTarget();
    void SetupInputAction();
    void OnChangedCategory(EPalBuildObjectTypeA TypeA);
    void Setup();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_PalBuildObjectList_ForDisplay_WBP_IngameMenu_Construction_Menu_K2Node_ComponentBoundEvent_0_OnClickedCloseButton__DelegateSignature();
    void BndEvt__WBP_PalBuildObjectList_ForDisplay_WBP_IngameMenu_Construction_Menu_K2Node_ComponentBoundEvent_1_OnChangeCategory__DelegateSignature(EPalBuildObjectTypeA TypeA);
    void OnSetup();
    void Destruct();
    void BndEvt__WBP_PalBuildObjectList_ForDisplay_WBP_IngameMenu_Construction_Menu_K2Node_ComponentBoundEvent_2_OnSelectedBuildObject__DelegateSignature(FPalBuildObjectData SelectedBuildObjectData);
    void BndEvt__WBP_PalBuildObjectList_ForDisplay_WBP_IngameMenu_Construction_Menu_K2Node_ComponentBoundEvent_3_OnHoveredBuildObject__DelegateSignature(class UWBP_IngameMenu_Construction_Icon_C* Widget);
    void BndEvt__WBP_PalBuildObjectList_ForDisplay_WBP_IngameMenu_Construction_Menu_K2Node_ComponentBoundEvent_4_OnUnhoveredBuildObject__DelegateSignature();
    void BndEvt__WBP_PalBuildObjectList_ForDisplay_WBP_IngameMenu_Construction_Menu_K2Node_ComponentBoundEvent_5_OnClickedDIsmantleButton__DelegateSignature();
    void BndEvt__WBP_PalBuildObjectList_ForDisplay_WBP_IngameMenu_Construction_Menu_K2Node_ComponentBoundEvent_6_OnClickPaintingModeButton__DelegateSignature();
    void BndEvt__WBP_PalBuildObjectList_ForDisplay_WBP_IngameMenu_Construction_Menu_K2Node_ComponentBoundEvent_7_OnHoveredCategoryTab__DelegateSignature(class UWBP_IngameMenu_Construction_Tab_C* TabWidget);
    void BndEvt__WBP_PalBuildObjectList_ForDisplay_WBP_IngameMenu_Construction_Menu_K2Node_ComponentBoundEvent_8_OnUnhoveredCategoryTab__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_WBP_PalBuildObjectList_ForDisplay(int32 EntryPoint);
}; // Size: 0x51C

#endif
