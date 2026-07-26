#ifndef UE4SS_SDK_WBP_IngameMenu_PalBox_PresetList_HPP
#define UE4SS_SDK_WBP_IngameMenu_PalBox_PresetList_HPP

class UWBP_IngameMenu_PalBox_PresetList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Save;                                                 // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Name;                                   // 0x0290 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Slots;                                            // 0x0298 (size: 0x8)
    class UOverlay* Overlay_NewAdd;                                                   // 0x02A0 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton;      // 0x02A8 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_1;    // 0x02B0 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_2;    // 0x02B8 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_3;    // 0x02C0 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_4;    // 0x02C8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02D0 (size: 0x8)
    TArray<class UWBP_PalCommonCharacterSlotButton_C*> CharacterSlots;                // 0x02D8 (size: 0x10)
    int32 Index;                                                                      // 0x02E8 (size: 0x4)
    bool IsPreset;                                                                    // 0x02EC (size: 0x1)
    FWBP_IngameMenu_PalBox_PresetList_COnAddPresetClicked OnAddPresetClicked;         // 0x02F0 (size: 0x10)
    void OnAddPresetClicked(int32 Index);
    FWBP_IngameMenu_PalBox_PresetList_COnPresetClicked OnPresetClicked;               // 0x0300 (size: 0x10)
    void OnPresetClicked(int32 Index);
    FWBP_IngameMenu_PalBox_PresetList_COnButtonHovered OnButtonHovered;               // 0x0310 (size: 0x10)
    void OnButtonHovered(int32 Index);
    FWBP_IngameMenu_PalBox_PresetList_COnButtonUnhovered OnButtonUnhovered;           // 0x0320 (size: 0x10)
    void OnButtonUnhovered(int32 Index);
    FWBP_IngameMenu_PalBox_PresetList_COnPresetRightClicked OnPresetRightClicked;     // 0x0330 (size: 0x10)
    void OnPresetRightClicked(int32 Index);
    FWBP_IngameMenu_PalBox_PresetList_COnCharaSlotHovered OnCharaSlotHovered;         // 0x0340 (size: 0x10)
    void OnCharaSlotHovered(int32 LoadoutIndex, int32 SlotIndex);
    FWBP_IngameMenu_PalBox_PresetList_COnCharaSlotUnhovered OnCharaSlotUnhovered;     // 0x0350 (size: 0x10)
    void OnCharaSlotUnhovered();

    void TogglePresetButton(bool ToCharacterSlot);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void SetupAdd(int32 Index);
    void SetupPreset(FPalOtomoLoadoutData LoadoutData, int32 Index);
    void AnmEvent_Focus();
    void AnmEvent_Normal();
    void AnmEvent_Save();
    void OnInitialized();
    void BndEvt__WBP_IngameMenu_PalBox_PresetList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_PalBox_PresetList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_PalBox_PresetList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnCharacterSlotHovered(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnCharacterSlotUnhovered(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void ExecuteUbergraph_WBP_IngameMenu_PalBox_PresetList(int32 EntryPoint);
    void OnCharaSlotUnhovered__DelegateSignature();
    void OnCharaSlotHovered__DelegateSignature(int32 LoadoutIndex, int32 SlotIndex);
    void OnPresetRightClicked__DelegateSignature(int32 Index);
    void OnButtonUnhovered__DelegateSignature(int32 Index);
    void OnButtonHovered__DelegateSignature(int32 Index);
    void OnPresetClicked__DelegateSignature(int32 Index);
    void OnAddPresetClicked__DelegateSignature(int32 Index);
}; // Size: 0x360

#endif
