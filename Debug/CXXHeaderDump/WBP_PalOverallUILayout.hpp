#ifndef UE4SS_SDK_WBP_PalOverallUILayout_HPP
#define UE4SS_SDK_WBP_PalOverallUILayout_HPP

class UWBP_PalOverallUILayout_C : public UPalPrimaryGameLayoutBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0308 (size: 0x8)
    class UCanvasPanel* CanvasPanel_3;                                                // 0x0310 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Fade;                                             // 0x0318 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Root;                                             // 0x0320 (size: 0x8)
    class UPalActivatableWidgetContainer* Layer_0;                                    // 0x0328 (size: 0x8)
    class UPalActivatableWidgetContainer* Layer_1;                                    // 0x0330 (size: 0x8)
    class UPalActivatableWidgetContainer* Layer_2;                                    // 0x0338 (size: 0x8)
    class UPalActivatableWidgetContainer* Layer_3;                                    // 0x0340 (size: 0x8)
    class UPalActivatableWidgetContainer* Layer_4;                                    // 0x0348 (size: 0x8)
    class UPalActivatableWidgetContainer* Layer_5;                                    // 0x0350 (size: 0x8)
    class UPalActivatableWidgetContainer* Layer_6;                                    // 0x0358 (size: 0x8)
    class UPalActivatableWidgetContainer* Layer_7;                                    // 0x0360 (size: 0x8)
    class UPalActivatableWidgetContainer* Menu;                                       // 0x0368 (size: 0x8)
    class UPalActivatableWidgetContainer* Modal;                                      // 0x0370 (size: 0x8)
    class UWBP_NetworkIcon_C* NetworkIcon;                                            // 0x0378 (size: 0x8)
    class USizeBox* SizeBox_0;                                                        // 0x0380 (size: 0x8)
    class UVerticalBox* VerticalBox_CommonWarning;                                    // 0x0388 (size: 0x8)
    class UWBP_AutoSave_C* WBP_AutoSave;                                              // 0x0390 (size: 0x8)
    class UWBP_CommonReward_C* WBP_CommonReward;                                      // 0x0398 (size: 0x8)
    class UWBP_InventoryEquipment_ItemInfo_C* WBP_InventoryEquipment_ItemInfo;        // 0x03A0 (size: 0x8)
    class UWBP_MainMenu_Cursor_C* WBP_MainMenu_Cursor;                                // 0x03A8 (size: 0x8)
    class UWBP_MainMenu_Pal_ElementMatchup_C* WBP_MainMenu_Pal_ElementMatchup;        // 0x03B0 (size: 0x8)
    class UWBP_PalActionBar_C* WBP_PalActionBar_C_8;                                  // 0x03B8 (size: 0x8)
    class UWBP_PalLiftItem_C* WBP_PalLiftItem;                                        // 0x03C0 (size: 0x8)
    TMap<class EPalFadeWidgetLayerType, class UCanvasPanel*> FadeWidgetCanvasMap;     // 0x03C8 (size: 0x50)
    TMap<class EPalFadeWidgetType, class TSubclassOf<UWBP_PalFadeWidgetBase_C>> FadeWidgetMap; // 0x0418 (size: 0x50)
    TArray<EPalFadeWidgetLayerType> WaitFadeInLayers;                                 // 0x0468 (size: 0x10)
    class UPalUILiftSlotModel* LiftSlotModel;                                         // 0x0478 (size: 0x8)
    TSoftObjectPtr<UWidget> CursorTargetWidget;                                       // 0x0480 (size: 0x30)
    TMap<class FGuid, class UWBP_CommonWarning_C*> WarningWidgets;                    // 0x04B0 (size: 0x50)
    FTimerHandle DelayDisplayTimer;                                                   // 0x0500 (size: 0x8)
    TMap<EPalUICommonWarningType, int32> SoundIDMap;                                  // 0x0508 (size: 0x50)
    TArray<EPalUICommonWarningType> RegistedWarningSound;                             // 0x0558 (size: 0x10)
    int32 FadeInPendingCount;                                                         // 0x0568 (size: 0x4)

    void CREATEDELEGATE_PROXYFUNCTION_0(EPalUICommonWarningType WarningType);
    bool IsAnyFadeWidgetActive();
    void CheckPause();
    void UpdateCursor();
    void OnInitialized();
    void ShowFocusCursor(class UWidget* TargetWidget);
    void HideFocusCursor();
    void FadeIn(EPalFadeWidgetLayerType LayerType);
    void ShowCommonItemInfo(const FPalUICommonItemInfoDisplayData& DisplayData);
    void HideCommonItemInfo();
    void ShowLiftIcon();
    void HideLiftIcon();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetupLiftIcon();
    void ShowCommonReward(const FPalUICommonRewardDisplayData& RewardDisplayData);
    void FadeOut(EPalFadeWidgetLayerType LayerType, class UPalHUDDispatchParameter_FadeWidget* FadeParameter);
    void HideCommonReward();
    void ShowCommonWarning(const FPalUICommonWarningDisplayData& WarningDisplayData);
    void HideCommonWarning(const FGuid PreserveID);
    void DelayDisplay();
    void OnWarningClear(const EPalUICommonWarningType& WarningType);
    void HideOnEmpty();
    void SetVisibilityRootLayout(ESlateVisibility NewVisibility);
    void ShowElementMatchUI(class UWidget* RelativeWidget, const FVector2D& AnchorPosition);
    void HideElementMatchUI();
    void OnEndFadeIn_イベント();
    void ExecuteUbergraph_WBP_PalOverallUILayout(int32 EntryPoint);
}; // Size: 0x56C

#endif
