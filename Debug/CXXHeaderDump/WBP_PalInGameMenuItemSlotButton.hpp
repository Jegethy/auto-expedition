#ifndef UE4SS_SDK_WBP_PalInGameMenuItemSlotButton_HPP
#define UE4SS_SDK_WBP_PalInGameMenuItemSlotButton_HPP

class UWBP_PalInGameMenuItemSlotButton_C : public UWBP_PalItemSlotButtonBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0610 (size: 0x8)
    class UWidgetAnimation* Anm_Bg_Unlock;                                            // 0x0618 (size: 0x8)
    class UWidgetAnimation* Anm_Rarity_0To4;                                          // 0x0620 (size: 0x8)
    class UWidgetAnimation* Anm_UnselectToSelect;                                     // 0x0628 (size: 0x8)
    class UWidgetAnimation* Anm_Bg_Lock;                                              // 0x0630 (size: 0x8)
    class UWidgetAnimation* Anm_Focus;                                                // 0x0638 (size: 0x8)
    class UWidgetAnimation* Anm_Rarity_0To4_old;                                      // 0x0640 (size: 0x8)
    class UImage* Base;                                                               // 0x0648 (size: 0x8)
    class UImage* Base_Empty;                                                         // 0x0650 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_NumRange;                               // 0x0658 (size: 0x8)
    class UCanvasPanel* CanvasPanel_BaseShadow;                                       // 0x0660 (size: 0x8)
    class UCanvasPanel* CanvasPanelCorrution;                                         // 0x0668 (size: 0x8)
    class UCanvasPanel* CanvasPanelLineLock;                                          // 0x0670 (size: 0x8)
    class UPalProgressBar* CorruptionProgressBar;                                     // 0x0678 (size: 0x8)
    class UBP_PalTextBlock_C* CorruptionRemainTime;                                   // 0x0680 (size: 0x8)
    class UImage* FocusBase;                                                          // 0x0688 (size: 0x8)
    class UImage* FocusFrame;                                                         // 0x0690 (size: 0x8)
    class UImage* Frame_Empty;                                                        // 0x0698 (size: 0x8)
    class UImage* Frame_Total;                                                        // 0x06A0 (size: 0x8)
    class UImage* Image_Off;                                                          // 0x06A8 (size: 0x8)
    class UImage* Image_On;                                                           // 0x06B0 (size: 0x8)
    class UOverlay* Overlay_Off;                                                      // 0x06B8 (size: 0x8)
    class UOverlay* Overlay_On;                                                       // 0x06C0 (size: 0x8)
    class UOverlay* Overlay_OnOff;                                                    // 0x06C8 (size: 0x8)
    class UOverlay* OverlayRepair;                                                    // 0x06D0 (size: 0x8)
    class UProgressBar* ProgressBar_Durable;                                          // 0x06D8 (size: 0x8)
    class USizeBox* SizeBox_Auto;                                                     // 0x06E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemWeight;                                        // 0x06E8 (size: 0x8)
    class UWBP_InventoryEquipment_PalIcon_C* WBP_InventoryEquipment_PalIcon;          // 0x06F0 (size: 0x8)
    class UWBP_PalInGameMenuItemSlot_C* WBP_PalInGameMenuItemSlot;                    // 0x06F8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0700 (size: 0x8)
    class UImage* WeightnumBase;                                                      // 0x0708 (size: 0x8)
    bool HasLiftting;                                                                 // 0x0710 (size: 0x1)
    FPalItemAndNum Item Info;                                                         // 0x0714 (size: 0x2C)

    void SetLanternEquipMode(EPalPlayerEquipLantern EquipType);
    void SetupByItemAndNumRange(FName StaticItemId, int32 Min, int32 Max);
    void GetItemAndNum(FPalItemAndNum& ItemAndNum);
    void SetupByItemAndNum(FPalItemAndNum ItemInfo);
    void SetEnableDefaultClickSound(bool Enable);
    void Set Pal Gear Icon(FName ItemId);
    void Toggle Corruption Visibility(bool Visible);
    void OnSetCorruptionImpl();
    void On Notify Durability Impl(double MaxDurability, double NowDurability, class UWBP_PalItemSlotButtonBase_C* SelfWidget);
    void OnSetEmptySlotImpl();
    void On Set Valid Slot Impl();
    void RegisterItemSlotWidget(class UWBP_PalItemSlotBase_C*& itemSlotWidget);
    void RegisterButton(class UCommonButtonBase*& Button);
    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void AnmEvent_Focus();
    void AnmEvent_Unfocus();
    void AnmEvent_RepairMark(bool IsEnable);
    void AnmEvent_Rarity(int32 Rarity);
    void OnInitialized();
    void OnHoveredEvent(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnDraggedEvent(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnDroppedEvent(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnLiftedEvent(int32 LiftNum, class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnUnhoveredEvent(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnSetValidSlotEvent();
    void OnEmptyEvent();
    void SetSlotLock();
    void Destruct();
    void ToggleLock(bool Lock);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void Initialize();
    void SetSlotUnlock();
    void ExecuteUbergraph_WBP_PalInGameMenuItemSlotButton(int32 EntryPoint);
}; // Size: 0x740

#endif
