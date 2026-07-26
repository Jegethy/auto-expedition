#ifndef UE4SS_SDK_WBP_Option_ModMenu_HPP
#define UE4SS_SDK_WBP_Option_ModMenu_HPP

class UWBP_Option_ModMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UCanvasPanel* Canvas_SearchName;                                            // 0x0280 (size: 0x8)
    class UCircularThrobber* CircularThrobber_79;                                     // 0x0288 (size: 0x8)
    class UImage* FrameFlare;                                                         // 0x0290 (size: 0x8)
    class UImage* Image;                                                              // 0x0298 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02A0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_151;                                                          // 0x02B0 (size: 0x8)
    class UPalEditableTextBox* PalEditableTextBox_Search;                             // 0x02B8 (size: 0x8)
    class UWBP_CommonButton_2_C* WBP_CommonButton_Apply;                              // 0x02C0 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton_Cancel;                               // 0x02C8 (size: 0x8)
    class UWBP_CommonButton_1_C* WBP_CommonButton_Workshop;                           // 0x02D0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_ListContent;          // 0x02D8 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList_ModList;                // 0x02E0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_SerchName;                // 0x02E8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x02F0 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_98;                             // 0x02F8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_100;                            // 0x0300 (size: 0x8)
    class UWBP_Title_MenuBG_C* WBP_Title_MenuBG;                                      // 0x0308 (size: 0x8)
    FWBP_Option_ModMenu_COnClickedAnyMod OnClickedAnyMod;                             // 0x0310 (size: 0x10)
    void OnClickedAnyMod(class UWBP_Option_ModMenu_ModList_C* Widget);
    TMap<class FPalUIModUniqueId, class FPalUIModDisplayData> CachedDataMap;          // 0x0320 (size: 0x50)
    FWBP_Option_ModMenu_COnChangedModSupportIngame OnChangedModSupportIngame;         // 0x0370 (size: 0x10)
    void OnChangedModSupportIngame(bool bNewFlag);
    FDataTableRowHandle SearchTextBoxHintMsgID;                                       // 0x0380 (size: 0x10)
    FWBP_Option_ModMenu_COnConfirm OnConfirm;                                         // 0x0390 (size: 0x10)
    void OnConfirm();
    FWBP_Option_ModMenu_COnRequestOpenSteamWorkshop OnRequestOpenSteamWorkshop;       // 0x03A0 (size: 0x10)
    void OnRequestOpenSteamWorkshop();
    TSoftObjectPtr<UWidget> RestoreFocusTarget;                                       // 0x03B0 (size: 0x30)
    FWBP_Option_ModMenu_COnCancel OnCancel;                                           // 0x03E0 (size: 0x10)
    void OnCancel();

    void FocusToCancelButton();
    void SetSaveButtonActive(bool bActive);
    void UpdateModListActive();
    class UWidget* DoCustomNavigation_ToTextBox(EUINavigation Navigation);
    void OnHoveredModPanel_Internal(class UWBP_Option_ModMenu_ModList_C* Widget);
    void GetRestoreFocusTarget(class UWidget*& Widget);
    void IsEditingText(bool& bEditing);
    void HideLoading();
    void DisplayLoading();
    void GetTopFocusTarget(class UWidget*& Widget);
    void OnChangedModSupportIngame_Binded(bool IsOn);
    void SetModSupportIngameFlag(bool bSupportIngame);
    void Filtering(FString FilteringString);
    void OnClickedModPanel_Internal(class UWBP_Option_ModMenu_ModList_C* Widget);
    void SetModDisplayDataMap(TMap<class FPalUIModUniqueId, class FPalUIModDisplayData> DataMap, TArray<FPalUIModUniqueId>& Keys);
    void Construct();
    void BndEvt__WBP_Option_ModMenu_WBP_PalInvisibleButton_SerchName_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Option_ModMenu_WBP_CommonButton_Apply_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__WBP_Option_ModMenu_WBP_CommonButton_Workshop_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void Destruct();
    void BndEvt__WBP_Option_ModMenu_PalEditableTextBox_Search_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_Option_ModMenu_WBP_CommonButton_Cancel_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_Option_ModMenu(int32 EntryPoint);
    void OnCancel__DelegateSignature();
    void OnRequestOpenSteamWorkshop__DelegateSignature();
    void OnConfirm__DelegateSignature();
    void OnChangedModSupportIngame__DelegateSignature(bool bNewFlag);
    void OnClickedAnyMod__DelegateSignature(class UWBP_Option_ModMenu_ModList_C* Widget);
}; // Size: 0x3F0

#endif
