#ifndef UE4SS_SDK_WBP_InventoryEquipment_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_HPP

class UWBP_InventoryEquipment_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0658 (size: 0x8)
    class UWidgetAnimation* SameAccessoryNoticeAnim;                                  // 0x0660 (size: 0x8)
    class UCanvasPanel* Canvas_EquipmentSlots;                                        // 0x0668 (size: 0x8)
    class UCanvasPanel* Canvas_Inventory;                                             // 0x0670 (size: 0x8)
    class UCanvasPanel* Canvas_QuickStack;                                            // 0x0678 (size: 0x8)
    class UCanvasPanel* Canvas_StatusPoint;                                           // 0x0680 (size: 0x8)
    class UCanvasPanel* CanvasPanelChara;                                             // 0x0688 (size: 0x8)
    class UPalCheckBox* CheckBox_QuickStackPop;                                       // 0x0690 (size: 0x8)
    class UCommonTileView* CommonTileView;                                            // 0x0698 (size: 0x8)
    class UImage* DropActionBlocker;                                                  // 0x06A0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_CheckBox;                                     // 0x06A8 (size: 0x8)
    class UImage* Image_EditStatusPointInputBlocker;                                  // 0x06B0 (size: 0x8)
    class UImage* Image_Fabric_Layered;                                               // 0x06B8 (size: 0x8)
    class UImage* Image_Glider_Layered;                                               // 0x06C0 (size: 0x8)
    class UImage* Image_Head_Layered;                                                 // 0x06C8 (size: 0x8)
    class UOverlay* Overlay_CancelStatusPoint;                                        // 0x06D0 (size: 0x8)
    class UOverlay* Overlay_ConfirmStatusPoint;                                       // 0x06D8 (size: 0x8)
    class UOverlay* Overlay_Fabric_Layered;                                           // 0x06E0 (size: 0x8)
    class UOverlay* Overlay_Glider_Layered;                                           // 0x06E8 (size: 0x8)
    class UOverlay* Overlay_Head_Layered;                                             // 0x06F0 (size: 0x8)
    class USizeBox* SizeBox_NameEdit;                                                 // 0x06F8 (size: 0x8)
    class USizeBox* SizeBox_Outside;                                                  // 0x0700 (size: 0x8)
    class UBP_PalTextBlock_C* Text_CharacterName;                                     // 0x0708 (size: 0x8)
    class UVerticalBox* VerticalBox_CaptureItemModifier;                              // 0x0710 (size: 0x8)
    class UVerticalBox* VerticalBox_Glider;                                           // 0x0718 (size: 0x8)
    class UVerticalBox* VerticalBox_StatusPointButton;                                // 0x0720 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton_NameEdit;                             // 0x0728 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton_QuickStack;                           // 0x0730 (size: 0x8)
    class UWBP_InventoryEquipment_TrashButton_C* WBP_InventoryEquipment_DropButton;   // 0x0738 (size: 0x8)
    class UWBP_InventoryEquipment_GrowsPointButton_C* WBP_InventoryEquipment_GrowsPoint; // 0x0740 (size: 0x8)
    class UWBP_InventoryEquipment_InvisibleActionButton_C* WBP_InventoryEquipment_InvisibleDropButton; // 0x0748 (size: 0x8)
    class UWBP_InventoryEquipment_InvisibleActionButton_C* WBP_InventoryEquipment_InvisibleEatButton; // 0x0750 (size: 0x8)
    class UWBP_InventoryEquipment_InvisibleActionButton_C* WBP_InventoryEquipment_InvisibleExeptButton; // 0x0758 (size: 0x8)
    class UWBP_InventoryEquipment_SkillList_C* WBP_InventoryEquipment_SkillList;      // 0x0760 (size: 0x8)
    class UWBP_InventoryEquipment_StatusPointButton_C* WBP_InventoryEquipment_StatusPointButton; // 0x0768 (size: 0x8)
    class UWBP_InventoryEquipment_StatusPointButton_C* WBP_InventoryEquipment_StatusPointButton_1; // 0x0770 (size: 0x8)
    class UWBP_InventoryEquipment_StatusPointButton_C* WBP_InventoryEquipment_StatusPointButton_2; // 0x0778 (size: 0x8)
    class UWBP_InventoryEquipment_StatusPointButton_C* WBP_InventoryEquipment_StatusPointButton_3; // 0x0780 (size: 0x8)
    class UWBP_InventoryEquipment_StatusPointButton_C* WBP_InventoryEquipment_StatusPointButton_4; // 0x0788 (size: 0x8)
    class UWBP_InventoryEquipment_StatusPointButton_C* WBP_InventoryEquipment_StatusPointButton_5; // 0x0790 (size: 0x8)
    class UWBP_InventoryEquipment_StatusUpButton_C* WBP_InventoryEquipment_StatusUpButton; // 0x0798 (size: 0x8)
    class UWBP_InventoryEquipment_TabList_C* WBP_InventoryEquipment_TabList;          // 0x07A0 (size: 0x8)
    class UWBP_InventoryEquipment_TrashButton_C* WBP_InventoryEquipment_TrashButton_1; // 0x07A8 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Accessory_01;        // 0x07B0 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Accessory_02;        // 0x07B8 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Accessory_03;        // 0x07C0 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Accessory_04;        // 0x07C8 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Body;                // 0x07D0 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Food_00;             // 0x07D8 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Food_01;             // 0x07E0 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Food_02;             // 0x07E8 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Food_03;             // 0x07F0 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Food_04;             // 0x07F8 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Glider;              // 0x0800 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Head;                // 0x0808 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Modifier;            // 0x0810 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Shield;              // 0x0818 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Weapon_00;           // 0x0820 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Weapon_01;           // 0x0828 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Weapon_02;           // 0x0830 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Weapon_03;           // 0x0838 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Weapon_04;           // 0x0840 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Weapon_05;           // 0x0848 (size: 0x8)
    class UWBP_MainMenu_Money_C* WBP_MainMenu_Money;                                  // 0x0850 (size: 0x8)
    class UWBP_MainMenu_PalSkillInfo_C* WBP_MainMenu_PalSkillInfo;                    // 0x0858 (size: 0x8)
    class UWBP_MainMenu_PalSkillInfo_C* WBP_MainMenu_PalSkillInfo_SameAccessoryNotice; // 0x0860 (size: 0x8)
    class UWBP_Menu_PlayerEXP_C* WBP_Menu_PlayerEXP;                                  // 0x0868 (size: 0x8)
    class UWBP_Menu_PlayerGauge_HP_C* WBP_Menu_PlayerGauge_HP;                        // 0x0870 (size: 0x8)
    class UWBP_Menu_PlayerGauge_Hunger_C* WBP_Menu_PlayerGauge_Hunger;                // 0x0878 (size: 0x8)
    class UWBP_Menu_PlayerGauge_Shield_C* WBP_Menu_PlayerGauge_Shield;                // 0x0880 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_1;                        // 0x0888 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_2;                        // 0x0890 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_3;                        // 0x0898 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_StatusPointCancel;        // 0x08A0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_StatusPointConfirm;       // 0x08A8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_ToggleQSPop;              // 0x08B0 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_77;                             // 0x08B8 (size: 0x8)
    class UWBP_PalPlayerInframeRender_C* WBP_PalPlayerInframeRender;                  // 0x08C0 (size: 0x8)
    class UWBP_PalPlayerInventoryScrollList_C* WBP_PalPlayerInventoryScrollList;      // 0x08C8 (size: 0x8)
    class UWBP_PlayerInventoryWeightInfo_C* WBP_PlayerInventoryWeightInfo;            // 0x08D0 (size: 0x8)
    class UWBP_StatusBuffTimerContainer_C* WBP_StatusBuffTimerContainer;              // 0x08D8 (size: 0x8)
    TArray<class UWBP_PalInGameMenuItemSlotButton_C*> WeaponLoadoutSlotArray;         // 0x08E0 (size: 0x10)
    TArray<class UWBP_PalInGameMenuItemSlotButton_C*> FoodSlotArray;                  // 0x08F0 (size: 0x10)
    class UBP_InGameMenuInventoryModel_C* Model;                                      // 0x0900 (size: 0x8)
    TArray<class UWBP_PalInGameMenuItemSlotButton_C*> PlayerArmorSlotArray;           // 0x0908 (size: 0x10)
    TArray<class UWBP_PalInGameMenuItemSlotButton_C*> DropSlotArray;                  // 0x0918 (size: 0x10)
    FWBP_InventoryEquipment_COnClickedItemDrop OnClickedItemDrop;                     // 0x0928 (size: 0x10)
    void OnClickedItemDrop();
    FWBP_InventoryEquipment_COnClickedItemDestroy OnClickedItemDestroy;               // 0x0938 (size: 0x10)
    void OnClickedItemDestroy();
    int32 CachedUnusedStatusPoint;                                                    // 0x0948 (size: 0x4)
    TMap<FName, int32> SimulateUsePoint;                                              // 0x0950 (size: 0x50)
    int32 AllSimulateUsePoint;                                                        // 0x09A0 (size: 0x4)
    FWBP_InventoryEquipment_COnConfirmStatusPointEdit OnConfirmStatusPointEdit;       // 0x09A8 (size: 0x10)
    void OnConfirmStatusPointEdit(TMap<FName, int32> PointMap);
    bool IsSimulatingStatusPoint;                                                     // 0x09B8 (size: 0x1)
    FWBP_InventoryEquipment_COnRequestSwapEquipment OnRequestSwapEquipment;           // 0x09C0 (size: 0x10)
    void OnRequestSwapEquipment(EPalPlayerEquipItemSlotType EquipType);
    FWBP_InventoryEquipment_COnClickedSortButton OnClickedSortButton;                 // 0x09D0 (size: 0x10)
    void OnClickedSortButton();
    class UWBP_PalItemSlotButtonBase_C* CurrentSlot;                                  // 0x09E0 (size: 0x8)
    FDataTableRowHandle FoodSlotTitleMsgID;                                           // 0x09E8 (size: 0x10)
    FDataTableRowHandle FoodSlotInfoMsgID;                                            // 0x09F8 (size: 0x10)
    FDataTableRowHandle FoodSlotRequireMsgID;                                         // 0x0A08 (size: 0x10)
    TMap<class FName, class UWBP_InventoryEquipment_StatusPointButton_C*> StatusPointButtonMap; // 0x0A18 (size: 0x50)
    TMap<FName, TEnumAsByte<E_PalUIStatusDIsplayParameter::Type>> StatusEnumMap;      // 0x0A68 (size: 0x50)
    TMap<TEnumAsByte<E_PalUIStatusDIsplayParameter::Type>, FDataTableRowHandle> DescMsgIdMap; // 0x0AB8 (size: 0x50)
    FWBP_InventoryEquipment_COnClickedChangePlayerNameButton OnClickedChangePlayerNameButton; // 0x0B08 (size: 0x10)
    void OnClickedChangePlayerNameButton();
    FWBP_InventoryEquipment_COnClickedToggleHeadDressing OnClickedToggleHeadDressing; // 0x0B18 (size: 0x10)
    void OnClickedToggleHeadDressing();
    TArray<class UWBP_PalInGameMenuItemSlotButton_C*> AccessorySlots;                 // 0x0B28 (size: 0x10)
    FDataTableRowHandle SameAccessoryNotice;                                          // 0x0B38 (size: 0x10)
    FTimerHandle SameAccessoryNoticeHideTimer;                                        // 0x0B48 (size: 0x8)
    FWBP_InventoryEquipment_COnClickedItemEat OnClickedItemEat;                       // 0x0B50 (size: 0x10)
    void OnClickedItemEat();
    FWBP_InventoryEquipment_COnClickedToggleBodyDressing OnClickedToggleBodyDressing; // 0x0B60 (size: 0x10)
    void OnClickedToggleBodyDressing();
    FWBP_InventoryEquipment_COnClickedToggleGliderDressing OnClickedToggleGliderDressing; // 0x0B70 (size: 0x10)
    void OnClickedToggleGliderDressing();
    FWBP_InventoryEquipment_COnClickQuickStackButton OnClickQuickStackButton;         // 0x0B80 (size: 0x10)
    void OnClickQuickStackButton(TArray<FPalItemSlotId>& SlotIds);
    TMap<class FPalItemSlotId, class UPalItemSlot*> CurrentStackableSlotIds;          // 0x0B90 (size: 0x50)
    bool CurrentInBaseCamp;                                                           // 0x0BE0 (size: 0x1)
    bool ShouldQuickStackDialogPop;                                                   // 0x0BE1 (size: 0x1)
    TMap<class FName, class UBP_ItemSlotEntryData_C*> CurrentExceptItemIdMap;         // 0x0BE8 (size: 0x50)
    TMap<class UObject*, class UWBP_PalInGameMenuItemSlotButton_C*> ListViewDisplayWidgetMap; // 0x0C38 (size: 0x50)
    bool bReplicateQuickStackItemStackInfo;                                           // 0x0C88 (size: 0x1)
    class UWBP_PalItemSlotButtonBase_C* LastHoveredButton;                            // 0x0C90 (size: 0x8)

    void UpdateStatusParameterButton();
    void OnRequestUseFoodSlot(class UWBP_PalItemSlotButtonBase_C* Button);
    void OnQuickStackItemStackInfoUpdate(class UPalBaseCampModuleItemStackInfo* ItemStackInfoModule);
    void OnQuickStackItemStackInfoReady(class UPalBaseCampModel* Model, class UPalBaseCampFunctionModuleBase* Module);
    void FinishReplicateQuickStackItemStackInfo();
    void PrepareReplicateQuickStackItemStackInfo();
    void UpdateLanternEquipDetail();
    void OnClosedAnyUseItemWindow(class UPalHUDDispatchParameterBase* Param);
    void AddExceptItem(FName ItemId);
    void Update Inventory Greyout(class UPalItemSlot* Slot);
    void UpdateQuickStackableInventorySlot(bool Editing);
    void ToQuickStackButton();
    void OnUnhoveredWeaponSlot(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnHoveredWeaponSlot(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnRightClickInventorySlot_QS(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void OnRightClickQSSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void ToggleQuickStackPanel();
    class UWidget* CustomNavi_ToStatusOrToggleGlider(EUINavigation Navigation);
    class UWidget* CustomNavi_ToStatusOrToggleBody(EUINavigation Navigation);
    class UWidget* CustomNavi_ToStatusOrToggleHead(EUINavigation Navigation);
    void DisplaySameAccessoryNotice(class UWBP_PalItemSlotButtonBase_C* RelativeSlotButton);
    void OnTimer_HideSameAccessoryNotice();
    void OnUnhoveredAccessorySlot(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnHoveredAccessorySlot(class UWBP_PalItemSlotButtonBase_C* Widget);
    void On Dressing Visibility Changed(FPalPlayerDataCharacterMakeInfo MakeInfo);
    void OnClosedDummy(bool bResult);
    class UWidget* CustomNavi_ToBodySlot(EUINavigation Navigation);
    class UWidget* CustomNavi_ToSphereModuleSlot(EUINavigation Navigation);
    void OnUpdateNickName_Binded(FString NewNickName);
    void OnUnhoverStatusButton(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
    void OnHoverStatusButton(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
    void OpenOverlayItemSlotWindow(class UWidget* RelativeWidget, FVector2D AnchorPosition, FVector2D overrideInfoWidgetAlignment, FText Title, FText Info, FText SubInfo);
    void OpenOverlayStatusInfo(class UWidget* RelativeWidget, FVector2D AnchorPosition, FVector2D overrideInfoWidgetAlignment, FText Title, FText Desc, TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> Status);
    void OnUnHoverFoodSlot(class UWBP_PalItemSlotButtonBase_C* Button);
    void OnHoverFoodSlot(class UWBP_PalItemSlotButtonBase_C* Button);
    void On Update Player Status Point();
    class UWidget* CustomNavi_ToStatusUp(EUINavigation Navigation);
    void SetupFoodEquipSlot();
    void SetEnableGliderSlot(bool IsEnable);
    void UnsetCurrentSlot(class UWBP_PalItemSlotButtonBase_C* Button);
    void SetCurrentSlot(class UWBP_PalItemSlotButtonBase_C* Button);
    void GetStatusPointTopFocusTarget(class UWidget*& TargetWidget);
    void Update Player Status();
    void Update Unused Status Point();
    void SetupStatusPointButtons();
    void On Update Player Buff();
    void On Update Player Level(int32 NewLevel);
    void OnClickedStatusPointDecrementButton(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
    void OnClickedStatusPointIncrementButton(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
    class UWidget* CustomNavi_ToGliderSlot(EUINavigation Navigation);
    class UWidget* CustomNavi_ToAccessorySlot4(EUINavigation Navigation);
    class UWidget* CustomNavi_ToAccessorySlot2(EUINavigation Navigation);
    class UWidget* CustomNavi_ToFoodSlotRight(EUINavigation Navigation);
    class UWidget* CustomNavi_ToFoodSlot2(EUINavigation Navigation);
    class UWidget* CustomNavi_ToFoodSlotLeft(EUINavigation Navigation);
    void On Clicked Drop Slot(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void Get Inventory Last Focus Target(class UWidget*& TargetWidget);
    void Open Item Use Window(class UPalItemSlot* CurrentItemSlot);
    void End Edit Status Point Mode(bool IsCancel);
    void Change to Edit Status Point Mode(bool IsEditable);
    void SetupDropSlot();
    void SetInventoryWeight(double NowWeight, double MaxWeight);
    void OnClickedFoodSlot(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void OnClickedArmorSlot(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void OnClickedWeaponLoadout(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void Setup Equipment Slot();
    void SetupCharacterName();
    void Setup(class UBP_InGameMenuInventoryModel_C* Model);
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_InventoryEquipment_WBP_InventoryEquipment_TabList_K2Node_ComponentBoundEvent_1_OnClickedSortButton__DelegateSignature();
    void BndEvt__WBP_InventoryEquipment_WBP_InventoryEquipment_TabList_K2Node_ComponentBoundEvent_2_OnChangedFocusIndex__DelegateSignature(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
    void BndEvt__WBP_InventoryEquipment_WBP_InventoryEquipment_DropButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_InventoryEquipment_WBP_InventoryEquipment_TrashButton_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__WBP_InventoryEquipment_WBP_PalInvisibleButton_StatusPointConfirm_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_InventoryEquipment_WBP_PalInvisibleButton_StatusPointCancel_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_InventoryEquipment_WBP_InventoryEquipment_StatusUpButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
    void OnUddateMaxWeight(float MaxWeight);
    void Destruct();
    void ConfirmStatusPoint();
    void OnArmorSlotUpdate(class UPalItemSlot* Slot, EPalPlayerEquipItemSlotType slotType);
    void BndEvt__WBP_InventoryEquipment_WBP_CommonButton_NameEdit_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void EmptyEvent(bool IsConfirm);
    void BndEvt__WBP_InventoryEquipment_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_10_OnTriedEquipSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void BndEvt__WBP_InventoryEquipment_WBP_InventoryEquipment_InvisibleActionButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
    void BndEvt__WBP_InventoryEquipment_WBP_InventoryEquipment_InvisibleEatButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature();
    void BndEvt__WBP_InventoryEquipment_WBP_PalInvisibleButton_1_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_InventoryEquipment_WBP_PalInvisibleButton_2_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_InventoryEquipment_WBP_PalInvisibleButton_3_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_InventoryEquipment_WBP_PalInvisibleButton_ToggleQSPop_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_InventoryEquipment_CommonTileView_K2Node_ComponentBoundEvent_16_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
    void BndEvt__WBP_InventoryEquipment_CommonTileView_K2Node_ComponentBoundEvent_17_OnListEntryReleasedDynamic__DelegateSignature(class UUserWidget* Widget);
    void BndEvt__WBP_InventoryEquipment_WBP_CommonButton_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature();
    void OnConfirmQuickStack(bool IsConfirm);
    void BndEvt__WBP_InventoryEquipment_WBP_InventoryEquipment_InvisibleExeptButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature();
    void BndEvt__WBP_InventoryEquipment_CommonTileView_K2Node_ComponentBoundEvent_8_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
    void QuickStackButtonAct();
    void BndEvt__WBP_InventoryEquipment_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_20_OnHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void ExecuteUbergraph_WBP_InventoryEquipment(int32 EntryPoint);
    void OnClickQuickStackButton__DelegateSignature(TArray<FPalItemSlotId>& SlotIds);
    void OnClickedToggleGliderDressing__DelegateSignature();
    void OnClickedToggleBodyDressing__DelegateSignature();
    void OnClickedItemEat__DelegateSignature();
    void OnClickedToggleHeadDressing__DelegateSignature();
    void OnClickedChangePlayerNameButton__DelegateSignature();
    void OnClickedSortButton__DelegateSignature();
    void OnRequestSwapEquipment__DelegateSignature(EPalPlayerEquipItemSlotType EquipType);
    void OnConfirmStatusPointEdit__DelegateSignature(TMap<FName, int32> PointMap);
    void OnClickedItemDestroy__DelegateSignature();
    void OnClickedItemDrop__DelegateSignature();
}; // Size: 0xC98

#endif
