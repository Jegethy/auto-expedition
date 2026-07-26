#ifndef UE4SS_SDK_WBP_IngameMenu_Construction_Menu_HPP
#define UE4SS_SDK_WBP_IngameMenu_Construction_Menu_HPP

class UWBP_IngameMenu_Construction_Menu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0280 (size: 0x8)
    class UCanvasPanel* Canvas_Dismantle;                                             // 0x0288 (size: 0x8)
    class UCanvasPanel* Canvas_Paint;                                                 // 0x0290 (size: 0x8)
    class UImage* Image;                                                              // 0x0298 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02A0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_4;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_5;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_9;                                                            // 0x02C8 (size: 0x8)
    class UImage* Image_102;                                                          // 0x02D0 (size: 0x8)
    class UImage* Image_344;                                                          // 0x02D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_CategoryName;                                      // 0x02E0 (size: 0x8)
    class UWBP_IngameMenu_Construction_Info_C* WBP_IngameMenu_Construction_Info_86;   // 0x02E8 (size: 0x8)
    class UWBP_IngameMenu_Construction_TabSet_C* WBP_IngameMenu_Construction_TabSet;  // 0x02F0 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x02F8 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList;                        // 0x0300 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Dismantle;                // 0x0308 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Paint;                    // 0x0310 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_Dismantle;                      // 0x0318 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_Paint;                          // 0x0320 (size: 0x8)
    FWBP_IngameMenu_Construction_Menu_COnClickedCloseButton OnClickedCloseButton;     // 0x0328 (size: 0x10)
    void OnClickedCloseButton();
    FWBP_IngameMenu_Construction_Menu_COnChangeCategory OnChangeCategory;             // 0x0338 (size: 0x10)
    void OnChangeCategory(EPalBuildObjectTypeA TypeA);
    FWBP_IngameMenu_Construction_Menu_COnSelectedBuildObject OnSelectedBuildObject;   // 0x0348 (size: 0x10)
    void OnSelectedBuildObject(FPalBuildObjectData SelectedBuildObjectData);
    FWBP_IngameMenu_Construction_Menu_COnClickedDIsmantleButton OnClickedDIsmantleButton; // 0x0358 (size: 0x10)
    void OnClickedDIsmantleButton();
    class UBP_IngameMenu_Construction_ListFocusCalculator_C* ListNavigationCalculator; // 0x0368 (size: 0x8)
    FWBP_IngameMenu_Construction_Menu_COnHoveredBuildObject OnHoveredBuildObject;     // 0x0370 (size: 0x10)
    void OnHoveredBuildObject(class UWBP_IngameMenu_Construction_Icon_C* Widget);
    FWBP_IngameMenu_Construction_Menu_COnUnhoveredBuildObject OnUnhoveredBuildObject; // 0x0380 (size: 0x10)
    void OnUnhoveredBuildObject();
    TArray<FPalStaticItemIdAndNum> CachedControllableItemInfo;                        // 0x0390 (size: 0x10)
    TMap<FName, int32> CachedControllableItemNumMap;                                  // 0x03A0 (size: 0x50)
    FWBP_IngameMenu_Construction_Menu_COnClickPaintingModeButton OnClickPaintingModeButton; // 0x03F0 (size: 0x10)
    void OnClickPaintingModeButton();
    TMap<class EPalBuildObjectTypeForUIDisplay, class FPalBuildObjectDataSetTypeUIDisplay> CachedDataMap; // 0x0400 (size: 0x50)
    FWBP_IngameMenu_Construction_Menu_COnHoveredCategoryTab OnHoveredCategoryTab;     // 0x0450 (size: 0x10)
    void OnHoveredCategoryTab(class UWBP_IngameMenu_Construction_Tab_C* TabWidget);
    FWBP_IngameMenu_Construction_Menu_COnUnhoveredCategoryTab OnUnhoveredCategoryTab; // 0x0460 (size: 0x10)
    void OnUnhoveredCategoryTab();
    bool bOpenAnimFinished;                                                           // 0x0470 (size: 0x1)
    TSoftObjectPtr<UWBP_IngameMenu_Construction_Icon_C> LastHoveredIcon;              // 0x0478 (size: 0x30)
    FTimerHandle DelaySnapOverlayInfoTimerHandle;                                     // 0x04A8 (size: 0x8)
    TMap<EPalBuildObjectTypeForUIDisplay, int32> DisplayTypePriorityMap;              // 0x04B0 (size: 0x50)

    void SetEnableMouseWheelScroll(bool bEnableScroll);
    void GetSortedUIDisplayTypeArray(TArray<EPalBuildObjectTypeForUIDisplay>& OriginalArray, TArray<EPalBuildObjectTypeForUIDisplay>& OutArray);
    void SetTabActive(EPalBuildObjectTypeA TypeA, bool bTabActive);
    void ScrollToBuildObject(FName BuildObjectId);
    void OnTimerEvent_DIsplayBuildObjectOverlayInfo();
    void SetTabNewMark(EPalBuildObjectTypeA TypeA, bool bDisplayMark);
    void UpdateCurrentTabNewMark();
    void UpdateOverlayInfo();
    void HaveBlueprint(FPalBuildObjectData BuildObjectData, bool& bHaveBlueprint);
    void IsBlueprintBuildObject(FPalBuildObjectData BuildObjectData, bool& bBlueprintBuildObject);
    void IsEnoughMaterials(FPalBuildObjectData BuildObjectData, bool& bEnoughMaterials);
    void UpdateBuildObjectIconDetail();
    void CacheControllableItemInfo();
    void GetTopWidget(class UWBP_IngameMenu_Construction_Icon_C*& Widget);
    void GetWidgetByBuildObjectId(FName BuildObjectId, class UWBP_IngameMenu_Construction_Icon_C*& Widget);
    void GetFocusTargetByBuildObjectId(FName BuildObjectId, class UWidget*& Widget);
    void OnUnhoveredAnyBuildObject_Binded();
    void ToPrevTab();
    void ToNextTab();
    void OnSelectedBuildObject_Binded(class UWBP_IngameMenu_Construction_Icon_C* Widget);
    void GetTopFocusTarget(class UWidget*& Widget);
    void SetBuildObjectDataMap(TMap<class EPalBuildObjectTypeForUIDisplay, class FPalBuildObjectDataSetTypeUIDisplay> DataMap);
    void SelectCategoryByTypeA(EPalBuildObjectTypeA TypeA);
    void OnHoveredAnyBuildObject_Binded(class UWBP_IngameMenu_Construction_Icon_C* Widget);
    void Finished_42D60B3E48EEA59101ED07B1E3AA6CAC();
    void AnmEvent_Open();
    void Construct();
    void BndEvt__WBP_IngameMenu_Construction_Menu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Construction_Menu_WBP_IngameMenu_Construction_TabSet_K2Node_ComponentBoundEvent_2_OnChangedFocusIndex__DelegateSignature(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
    void Destruct();
    void BndEvt__WBP_IngameMenu_Construction_Menu_WBP_PalInvisibleButton_Dismantle_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Construction_Menu_WBP_PalInvisibleButton_Paint_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Construction_Menu_WBP_IngameMenu_Construction_TabSet_K2Node_ComponentBoundEvent_3_OnHoveredTab__DelegateSignature(class UWBP_IngameMenu_Construction_Tab_C* TabWidget);
    void BndEvt__WBP_IngameMenu_Construction_Menu_WBP_IngameMenu_Construction_TabSet_K2Node_ComponentBoundEvent_5_OnUnhoveredTab__DelegateSignature();
    void ExecuteUbergraph_WBP_IngameMenu_Construction_Menu(int32 EntryPoint);
    void OnUnhoveredCategoryTab__DelegateSignature();
    void OnHoveredCategoryTab__DelegateSignature(class UWBP_IngameMenu_Construction_Tab_C* TabWidget);
    void OnClickPaintingModeButton__DelegateSignature();
    void OnUnhoveredBuildObject__DelegateSignature();
    void OnHoveredBuildObject__DelegateSignature(class UWBP_IngameMenu_Construction_Icon_C* Widget);
    void OnClickedDIsmantleButton__DelegateSignature();
    void OnSelectedBuildObject__DelegateSignature(FPalBuildObjectData SelectedBuildObjectData);
    void OnChangeCategory__DelegateSignature(EPalBuildObjectTypeA TypeA);
    void OnClickedCloseButton__DelegateSignature();
}; // Size: 0x500

#endif
