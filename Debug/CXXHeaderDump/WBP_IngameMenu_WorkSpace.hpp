#ifndef UE4SS_SDK_WBP_IngameMenu_WorkSpace_HPP
#define UE4SS_SDK_WBP_IngameMenu_WorkSpace_HPP

class UWBP_IngameMenu_WorkSpace_C : public UPalUIPaldex
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E8 (size: 0x8)
    class UWidgetAnimation* Anm_Rarity;                                               // 0x04F0 (size: 0x8)
    class UWidgetAnimation* Anm_Tips_InOut;                                           // 0x04F8 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_77;                                   // 0x0500 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Name;                                   // 0x0508 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_NoRecipe;                               // 0x0510 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Num;                                    // 0x0518 (size: 0x8)
    class UCanvasPanel* Canvas_ItemIcon;                                              // 0x0520 (size: 0x8)
    class UCanvasPanel* Canvas_ProductPlan;                                           // 0x0528 (size: 0x8)
    class UCanvasPanel* Canvas_Select;                                                // 0x0530 (size: 0x8)
    class UCanvasPanel* CanvasPanel_ItemNum;                                          // 0x0538 (size: 0x8)
    class UCanvasPanel* CanvasPanelIcon;                                              // 0x0540 (size: 0x8)
    class UCheckBox* CheckBox;                                                        // 0x0548 (size: 0x8)
    class UCommonTileView* CommonTileView_146;                                        // 0x0550 (size: 0x8)
    class UImage* FrameFlare;                                                         // 0x0558 (size: 0x8)
    class UHorizontalBox* Holizontal_ManMonth_Text;                                   // 0x0560 (size: 0x8)
    class UHorizontalBox* HorizontalBox_ProductNum;                                   // 0x0568 (size: 0x8)
    class UCanvasPanel* HorizontalBox_SearchName;                                     // 0x0570 (size: 0x8)
    class UHorizontalBox* HorizontalBox_TransportCheckBox;                            // 0x0578 (size: 0x8)
    class UImage* Image_10;                                                           // 0x0580 (size: 0x8)
    class UImage* Image_99;                                                           // 0x0588 (size: 0x8)
    class UImage* Image_365;                                                          // 0x0590 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0598 (size: 0x8)
    class UImage* Image_Icon_Shadow;                                                  // 0x05A0 (size: 0x8)
    class UImage* Image_ItemNum_Base;                                                 // 0x05A8 (size: 0x8)
    class UImage* Image_Line;                                                         // 0x05B0 (size: 0x8)
    class UImage* Image_Rarity;                                                       // 0x05B8 (size: 0x8)
    class UImage* Image_Rarity_1;                                                     // 0x05C0 (size: 0x8)
    class UPalEditableTextBox* PalEditableTextBox_Search;                             // 0x05C8 (size: 0x8)
    class UPalRetainerBox* PalRetainerBox_150;                                        // 0x05D0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_FilterContent;                                     // 0x05D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemNumValue;                                      // 0x05E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ManMonth_Value;                                    // 0x05E8 (size: 0x8)
    class UWBP_Ingame_WorkSpace_ProductTab_C* WBP_Ingame_WorkSpace_ProductTab;        // 0x05F0 (size: 0x8)
    class UWBP_IngameCommonSelectNum_C* WBP_IngameCommonSelectNum;                    // 0x05F8 (size: 0x8)
    class UWBP_IngameMenu_WorkSpace_StartButton_C* WBP_IngameMenu_StartButton;        // 0x0600 (size: 0x8)
    class UWBP_IngameMenu_WorkSpace_TabSet_C* WBP_IngameMenu_WorkSpace_TabSet;        // 0x0608 (size: 0x8)
    class UWBP_InventoryEquipment_ItemInfo_Tecnology_C* WBP_InventoryEquipment_ItemInfo_Tecnology; // 0x0610 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0618 (size: 0x8)
    class UWBP_PalInGameMenuItemIcon_C* WBP_PalInGameMenuItemIcon;                    // 0x0620 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_SerchName;                // 0x0628 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_TransportCheck;           // 0x0630 (size: 0x8)
    class UBP_PalUIConvertItemModel_C* Convert Item Model;                            // 0x0638 (size: 0x8)
    int32 CurrentProductAmount;                                                       // 0x0640 (size: 0x4)
    FName InputActionName_Max;                                                        // 0x0644 (size: 0x8)
    bool IsSelectingProductNumFlag;                                                   // 0x064C (size: 0x1)
    class UWBP_PalConvertItemMenu_RecipeSlotButton_C* LastSelectedSlot;               // 0x0650 (size: 0x8)
    FName InputActionName_Start;                                                      // 0x0658 (size: 0x8)
    FName InputActionName_Cancel;                                                     // 0x0660 (size: 0x8)
    TArray<FPalStaticItemIdAndNum> TmpComtrollableBlueprintInfo;                      // 0x0668 (size: 0x10)
    FTimerHandle UpdateRecipeTimer;                                                   // 0x0678 (size: 0x8)
    FName InputActionName_CanTransportOut;                                            // 0x0680 (size: 0x8)
    FDataTableRowHandle InputAction_NextCategory;                                     // 0x0688 (size: 0x10)
    FDataTableRowHandle InputAction_PrevCategory;                                     // 0x0698 (size: 0x10)
    FPalUIActionBindData ActionHandle_NextCategory;                                   // 0x06A8 (size: 0x4)
    FPalUIActionBindData ActionHandle_PrevCategory;                                   // 0x06AC (size: 0x4)
    FDataTableRowHandle HintTextMsgID;                                                // 0x06B0 (size: 0x10)
    TArray<EPalItemTypeA> CurrentFilteringItemTypeA;                                  // 0x06C0 (size: 0x10)
    TArray<EPalItemTypeA> CurrentExcludeItemTypeB;                                    // 0x06D0 (size: 0x10)
    bool bIsFiltered;                                                                 // 0x06E0 (size: 0x1)
    TArray<FName> CachedRecipeIds;                                                    // 0x06E8 (size: 0x10)
    TMap<class FName, class UWBP_PalConvertItemMenu_RecipeSlotButton_C*> RecipeSlorButtonMap; // 0x06F8 (size: 0x50)
    TMap<class FName, class UBP_RecipeSlotButtonEntryData_C*> EntryDataMap;           // 0x0748 (size: 0x50)
    class UBP_RecipeSlotButtonEntryData_C* LastHoveredEntryItem;                      // 0x0798 (size: 0x8)
    FName FirstRecipeID;                                                              // 0x07A0 (size: 0x8)

    void GetLastHoveredFocusTarget(class UWidget*& Widget);
    void IsMatchItemName(FName ItemId, bool& bIsMatch);
    void RefleshFIltering();
    void EntryToWidget(class UObject* EntryObject, class UWBP_PalConvertItemMenu_RecipeSlotButton_C*& Widget);
    void ToggleCanTransportOut();
    void StartProduce();
    void SetMaxProductCount();
    void Initialize Entry Data(TArray<FName>& RecipeIds);
    void WBP_IngameMenu_WorkSpace_AutoGenFunc();
    void OnInputAction_PrevCategory();
    void OnInputAction_NextCategory();
    void RegisterChangeCategoryInputAction();
    void OnChangedCategory(class UWBP_IngameMenu_WorkSpace_Category_C* TabWidget);
    void InputMethodChanged(ECommonInputType InputType);
    void OnUpdateCanTransportOut(bool bOn);
    void FilteringRecipe(TArray<FName>& RecipeIDArray, TArray<FName>& FilteredArray);
    void OnCancelInput();
    void IsSelectingProductNum(bool& IsSelecting);
    void FilterSkillUnlocker(TArray<FName>& Recipes, FName WorkBenchId, TArray<FName>& FilteredRecipes);
    class UWidget* BP_GetDesiredFocusTarget();
    void Update Recipe Detail();
    void OnUnhoveredRecipeSlot(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Slot);
    void OnHoveredRecipeSlot(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Slot);
    void OnClickedRecipeSlot(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Slot);
    void Setup();
    void OnSetup();
    void BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_StartButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__WBP_InGameMainMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void Destruct();
    void BndEvt__WBP_IngameMenu_WorkSpace_WBP_PalInvisibleButton_TransportCheck_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Construct();
    void BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameCommonSelectNum_K2Node_ComponentBoundEvent_5_OnUpdateNum__DelegateSignature(int64 Num);
    void BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_WorkSpace_TabSet_K2Node_ComponentBoundEvent_1_OnChangedFocusIndex__DelegateSignature(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
    void BndEvt__WBP_IngameMenu_WorkSpace_WBP_PalInvisibleButton_SerchName_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_WorkSpace_PalEditableTextBox_Search_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_IngameMenu_WorkSpace_CommonTileView_146_K2Node_ComponentBoundEvent_6_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
    void BndEvt__WBP_IngameMenu_WorkSpace_CommonTileView_146_K2Node_ComponentBoundEvent_9_OnListEntryReleasedDynamic__DelegateSignature(class UUserWidget* Widget);
    void ExecuteUbergraph_WBP_IngameMenu_WorkSpace(int32 EntryPoint);
}; // Size: 0x7A8

#endif
