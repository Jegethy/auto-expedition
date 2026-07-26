#ifndef UE4SS_SDK_WBP_IngameMenu_Construction_Icon_HPP
#define UE4SS_SDK_WBP_IngameMenu_Construction_Icon_HPP

class UWBP_IngameMenu_Construction_Icon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UCanvasPanel* Canvas_NotEnough;                                             // 0x0288 (size: 0x8)
    class UImage* Image_Energy;                                                       // 0x0290 (size: 0x8)
    class UImage* Image_FavoMark;                                                     // 0x0298 (size: 0x8)
    class UImage* Image_Frame_Focus;                                                  // 0x02A0 (size: 0x8)
    class UImage* Image_Frame_Focus_1;                                                // 0x02A8 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x02B0 (size: 0x8)
    class UImage* Image_Icon_Blueprint;                                               // 0x02B8 (size: 0x8)
    class UOverlay* Overlay_Locked;                                                   // 0x02C0 (size: 0x8)
    class UWBP_MainMenu_NewDot_C* WBP_MainMenu_NewDot;                                // 0x02C8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02D0 (size: 0x8)
    FPalBuildObjectData MyBuildObjectData;                                            // 0x02D8 (size: 0x98)
    FWBP_IngameMenu_Construction_Icon_COnClicked OnClicked;                           // 0x0370 (size: 0x10)
    void OnClicked(class UWBP_IngameMenu_Construction_Icon_C* Widget);
    FWBP_IngameMenu_Construction_Icon_COnHovered OnHovered;                           // 0x0380 (size: 0x10)
    void OnHovered(class UWBP_IngameMenu_Construction_Icon_C* Widget);
    FWBP_IngameMenu_Construction_Icon_COnUnhovered OnUnhovered;                       // 0x0390 (size: 0x10)
    void OnUnhovered();
    int32 MyColumnIndex;                                                              // 0x03A0 (size: 0x4)
    bool bCachedUnavailableRecipe;                                                    // 0x03A4 (size: 0x1)

    void UpdateButtonSound();
    void SetVisibleBlueprintMark(ESlateVisibility NewVisibility);
    void IsNewMarkDisplayed(bool& bDisplayed);
    void SetNewMark(bool bDisplayMark);
    void SetUnavailableDetail(bool bUnavailable);
    void SetLockedDetail(bool bLocked);
    void GetBuildObjectId(FName& BuildObjectId);
    void SetVisibleFavoriteIcon(ESlateVisibility NewVisibility);
    void GetColumnIndex(int32& Index);
    void SetGridColumnIndex(int32 Index);
    void GetBuildObjectData(FPalBuildObjectData& BuildObjectData);
    void Setup(FPalBuildObjectData BuildObjectData);
    void AnmEvent_Hover();
    void AnmEvent_Unhover();
    void Construct();
    void BndEvt__WBP_IngameMenu_Construction_Icon_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Construction_Icon_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Construction_Icon_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_IngameMenu_Construction_Icon(int32 EntryPoint);
    void OnUnhovered__DelegateSignature();
    void OnHovered__DelegateSignature(class UWBP_IngameMenu_Construction_Icon_C* Widget);
    void OnClicked__DelegateSignature(class UWBP_IngameMenu_Construction_Icon_C* Widget);
}; // Size: 0x3A5

#endif
