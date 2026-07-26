#ifndef UE4SS_SDK_WBP_Altar_SelectItem_Button_HPP
#define UE4SS_SDK_WBP_Altar_SelectItem_Button_HPP

class UWBP_Altar_SelectItem_Button_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UImage* Frame_Focus_Flare;                                                  // 0x0288 (size: 0x8)
    class UImage* Image_Button_Base;                                                  // 0x0290 (size: 0x8)
    class UImage* Image_Button_Dot;                                                   // 0x0298 (size: 0x8)
    class UImage* Image_Button_Dot_1;                                                 // 0x02A0 (size: 0x8)
    class UImage* Image_Button_Dot_2;                                                 // 0x02A8 (size: 0x8)
    class UImage* Image_Button_Dot_3;                                                 // 0x02B0 (size: 0x8)
    class UImage* Image_Button_Frame;                                                 // 0x02B8 (size: 0x8)
    class UImage* Image_Button_Frame_1;                                               // 0x02C0 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_ItemInfo;                                  // 0x02C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemNum;                                           // 0x02D0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StageName;                                         // 0x02D8 (size: 0x8)
    class UWBP_PalInGameMenuItemIcon_C* WBP_PalInGameMenuItemIcon;                    // 0x02E0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02E8 (size: 0x8)
    FWBP_Altar_SelectItem_Button_COnClickSlot OnClickSlot;                            // 0x02F0 (size: 0x10)
    void OnClickSlot(class UWBP_Altar_SelectItem_Button_C* SelfSlot);
    FWBP_Altar_SelectItem_Button_COnHoveredSlot OnHoveredSlot;                        // 0x0300 (size: 0x10)
    void OnHoveredSlot(class UWBP_Altar_SelectItem_Button_C* SelfSlot);
    FWBP_Altar_SelectItem_Button_COnUnhoveredSlot OnUnhoveredSlot;                    // 0x0310 (size: 0x10)
    void OnUnhoveredSlot(class UWBP_Altar_SelectItem_Button_C* SelfSlot);
    bool Selected;                                                                    // 0x0320 (size: 0x1)
    FPalUIRaidBossStoneInfo TargetInfo;                                               // 0x0324 (size: 0xC)

    void Setup(FPalUIRaidBossStoneInfo Info);
    void BndEvt__WBP_Altar_SelectItem_Button_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Altar_SelectItem_Button_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Altar_SelectItem_Button_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Altar_SelectItem_Button(int32 EntryPoint);
    void OnUnhoveredSlot__DelegateSignature(class UWBP_Altar_SelectItem_Button_C* SelfSlot);
    void OnHoveredSlot__DelegateSignature(class UWBP_Altar_SelectItem_Button_C* SelfSlot);
    void OnClickSlot__DelegateSignature(class UWBP_Altar_SelectItem_Button_C* SelfSlot);
}; // Size: 0x330

#endif
