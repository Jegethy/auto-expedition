#ifndef UE4SS_SDK_WBP_Trading_Pal_Buy_HPP
#define UE4SS_SDK_WBP_Trading_Pal_Buy_HPP

class UWBP_Trading_Pal_Buy_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UCanvasPanel* CanvasPanel_BuyPanel;                                         // 0x0480 (size: 0x8)
    class UImage* Image_365;                                                          // 0x0488 (size: 0x8)
    class UPalRetainerBox* PalRetainerBox_150;                                        // 0x0490 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LevelValue;                                        // 0x0498 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalName;                                           // 0x04A0 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton;                                      // 0x04A8 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;        // 0x04B0 (size: 0x8)
    class UWBP_IngameMenu_WorkSpace_Item_C* WBP_IngameMenu_WorkSpace_Item;            // 0x04B8 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x04C0 (size: 0x8)
    class UWBP_NoData_C* WBP_NoData;                                                  // 0x04C8 (size: 0x8)
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;                  // 0x04D0 (size: 0x8)
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List;                            // 0x04D8 (size: 0x8)
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_1;                          // 0x04E0 (size: 0x8)
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_2;                          // 0x04E8 (size: 0x8)
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_3;                          // 0x04F0 (size: 0x8)
    class UWBP_Trading_Item_List_C* WBP_Trading_Item_List_4;                          // 0x04F8 (size: 0x8)
    TArray<class UWBP_Trading_Item_List_C*> TradeList;                                // 0x0500 (size: 0x10)
    class UPalMapObjectPalBoothModel* PalBoothModel;                                  // 0x0510 (size: 0x8)
    int32 CurrentSelectIndex;                                                         // 0x0518 (size: 0x4)
    bool Tradeable;                                                                   // 0x051C (size: 0x1)
    class UPalIndividualCharacterHandle* LastHoveredTradePalHandle;                   // 0x0520 (size: 0x8)
    bool IsPined;                                                                     // 0x0528 (size: 0x1)
    FPalUIActionBindData ViewDetailInputHandle;                                       // 0x052C (size: 0x4)
    class UPalIndividualCharacterHandle* PinedPalHandle;                              // 0x0530 (size: 0x8)
    bool HasEmptySlot ;                                                               // 0x0538 (size: 0x1)

    void UpdateSellList();
    void OnTradeComplete(class APalPlayerState* PlayerState);
    void OnStoreSlotUpdate(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* LastHandle);
    void On Character Container Update(class UPalIndividualCharacterContainer* CharacterContainer);
    void OnViewDetailInput();
    void Set Detail Enable(bool IsEnable);
    void OnCancelAction();
    void CheckTradeable();
    class UWidget* BP_GetDesiredFocusTarget();
    void Setup();
    void Switch Trading Panel(bool Visible);
    void OnTradeUnhovered(int32 TradeIndex);
    void OnTradeHovered(int32 TradeIndex);
    void OnTradeSelected(int32 Index);
    void OnInitialized();
    void OnSetup();
    void BndEvt__WBP_Trading_Pal_Buy_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_Trading_Pal_Buy_WBP_CommonButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void Destruct();
    void ExecuteUbergraph_WBP_Trading_Pal_Buy(int32 EntryPoint);
}; // Size: 0x539

#endif
