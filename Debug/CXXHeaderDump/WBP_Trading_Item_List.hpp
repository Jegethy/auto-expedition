#ifndef UE4SS_SDK_WBP_Trading_Item_List_HPP
#define UE4SS_SDK_WBP_Trading_Item_List_HPP

class UWBP_Trading_Item_List_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToSoldout;                                      // 0x0280 (size: 0x8)
    class UCanvasPanel* Canvas_Empty;                                                 // 0x0288 (size: 0x8)
    class UCanvasPanel* Canvas_Select;                                                // 0x0290 (size: 0x8)
    class UCanvasPanel* CanvasPanel_TradeInfo;                                        // 0x0298 (size: 0x8)
    class UImage* Frame_Focus_Flare;                                                  // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Stock;                                             // 0x02A8 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x02B0 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton;      // 0x02B8 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_Cost;   // 0x02C0 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_Product; // 0x02C8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02D0 (size: 0x8)
    FWBP_Trading_Item_List_COnEmptySlotClicked OnEmptySlotClicked;                    // 0x02D8 (size: 0x10)
    void OnEmptySlotClicked();
    int32 Index;                                                                      // 0x02E8 (size: 0x4)
    FWBP_Trading_Item_List_COnClickedRemoveButton OnClickedRemoveButton;              // 0x02F0 (size: 0x10)
    void OnClickedRemoveButton(int32 TradeIndex);
    bool IsEmpty;                                                                     // 0x0300 (size: 0x1)
    FWBP_Trading_Item_List_COnTradeSelect OnTradeSelect;                              // 0x0308 (size: 0x10)
    void OnTradeSelect(int32 Index);
    FWBP_Trading_Item_List_COnTradeInfoHovered OnTradeInfoHovered;                    // 0x0318 (size: 0x10)
    void OnTradeInfoHovered(int32 Index);
    FWBP_Trading_Item_List_COnTradeInfoUnhovered OnTradeInfoUnhovered;                // 0x0328 (size: 0x10)
    void OnTradeInfoUnhovered(int32 Index);
    bool NowSoldOut;                                                                  // 0x0338 (size: 0x1)

    void UpdateStock(int32 StockCount);
    void SetEmpty();
    void Setup Pal Trade Info(FPalPalBoothTradeInfo TradeInfo, bool RemoveButtonVisible, FName CharacterID);
    void Setup Item Trade Info(FPalItemBoothTradeInfo TradeInfo, bool RemoveButtonVisible);
    void AnmEvent_SoldOut();
    void AnmEvent_Normal();
    void BndEvt__WBP_Trading_Item_List_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_Trading_Item_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Trading_Item_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Trading_Item_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Construct();
    void ToggleSelect(bool Selected);
    void ExecuteUbergraph_WBP_Trading_Item_List(int32 EntryPoint);
    void OnTradeInfoUnhovered__DelegateSignature(int32 Index);
    void OnTradeInfoHovered__DelegateSignature(int32 Index);
    void OnTradeSelect__DelegateSignature(int32 Index);
    void OnClickedRemoveButton__DelegateSignature(int32 TradeIndex);
    void OnEmptySlotClicked__DelegateSignature();
}; // Size: 0x339

#endif
