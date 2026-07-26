#ifndef UE4SS_SDK_WBP_Option_ModMenu_ModList_HPP
#define UE4SS_SDK_WBP_Option_ModMenu_ModList_HPP

class UWBP_Option_ModMenu_ModList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UImage* Image_buttonBase;                                                   // 0x0288 (size: 0x8)
    class UImage* Image_Check_Off;                                                    // 0x0290 (size: 0x8)
    class UImage* Image_Check_On;                                                     // 0x0298 (size: 0x8)
    class UImage* Image_CompatibleCaution;                                            // 0x02A0 (size: 0x8)
    class UImage* Image_ModPic;                                                       // 0x02A8 (size: 0x8)
    class UOverlay* Overlay_ModInfo;                                                  // 0x02B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ModName;                                           // 0x02B8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Check;                    // 0x02C0 (size: 0x8)
    FPalUIModDisplayData CachedModDisplayData;                                        // 0x02C8 (size: 0x50)
    FPalUIModUniqueId MyUniqueId;                                                     // 0x0318 (size: 0x10)
    FWBP_Option_ModMenu_ModList_COnClicked OnClicked;                                 // 0x0328 (size: 0x10)
    void OnClicked(class UWBP_Option_ModMenu_ModList_C* Widget);
    FWBP_Option_ModMenu_ModList_COnHovered OnHovered;                                 // 0x0338 (size: 0x10)
    void OnHovered(class UWBP_Option_ModMenu_ModList_C* Widget);
    FWBP_Option_ModMenu_ModList_COnUnhovered OnUnhovered;                             // 0x0348 (size: 0x10)
    void OnUnhovered();

    void GetModData(FPalUIModDisplayData& DisplayData);
    void GetUniqueId(FPalUIModUniqueId& ModUniqueId);
    void SetModData(FPalUIModDisplayData ModDisplayData, FPalUIModUniqueId UniqueId);
    void AnmEvent_Hover();
    void AnmEvent_Unhover();
    void BndEvt__WBP_Option_ModMenu_ModList_WBP_PalInvisibleButton_Check_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Option_ModMenu_ModList_WBP_PalInvisibleButton_Check_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Option_ModMenu_ModList_WBP_PalInvisibleButton_Check_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Option_ModMenu_ModList(int32 EntryPoint);
    void OnUnhovered__DelegateSignature();
    void OnHovered__DelegateSignature(class UWBP_Option_ModMenu_ModList_C* Widget);
    void OnClicked__DelegateSignature(class UWBP_Option_ModMenu_ModList_C* Widget);
}; // Size: 0x358

#endif
