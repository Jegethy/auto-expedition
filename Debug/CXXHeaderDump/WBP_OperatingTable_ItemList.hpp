#ifndef UE4SS_SDK_WBP_OperatingTable_ItemList_HPP
#define UE4SS_SDK_WBP_OperatingTable_ItemList_HPP

class UWBP_OperatingTable_ItemList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_Info;                           // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Num;                                    // 0x0290 (size: 0x8)
    class UImage* Image_NoItem;                                                       // 0x0298 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive;          // 0x02A0 (size: 0x8)
    class UWBP_PalInGameMenuItemIcon_C* WBP_PalInGameMenuItemIcon;                    // 0x02A8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02B0 (size: 0x8)
    FWBP_OperatingTable_ItemList_COnSelectItem OnSelectItem;                          // 0x02B8 (size: 0x10)
    void OnSelectItem(FName PassiveId, FName ConsumeItemId);
    FName PassiveId;                                                                  // 0x02C8 (size: 0x8)
    FWBP_OperatingTable_ItemList_COnHovered OnHovered;                                // 0x02D0 (size: 0x10)
    void OnHovered(class UWBP_OperatingTable_ItemList_C* SelfWidget);
    FWBP_OperatingTable_ItemList_COnUnhovered OnUnhovered;                            // 0x02E0 (size: 0x10)
    void OnUnhovered();
    FName ConsumeItemId;                                                              // 0x02F0 (size: 0x8)

    void Setup(FName PassiveId, bool& IsValid);
    void BndEvt__WBP_OperatingTable_ItemList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_OperatingTable_ItemList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_OperatingTable_ItemList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_OperatingTable_ItemList(int32 EntryPoint);
    void OnUnhovered__DelegateSignature();
    void OnHovered__DelegateSignature(class UWBP_OperatingTable_ItemList_C* SelfWidget);
    void OnSelectItem__DelegateSignature(FName PassiveId, FName ConsumeItemId);
}; // Size: 0x2F8

#endif
