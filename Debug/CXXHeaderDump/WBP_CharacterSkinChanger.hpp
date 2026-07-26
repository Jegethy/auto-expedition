#ifndef UE4SS_SDK_WBP_CharacterSkinChanger_HPP
#define UE4SS_SDK_WBP_CharacterSkinChanger_HPP

class UWBP_CharacterSkinChanger_C : public UPalUICharacterSkinChanger
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D8 (size: 0x8)
    class UCanvasPanel* Canvas_Inframe;                                               // 0x04E0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_ApplySkinCharacterSelect;                         // 0x04E8 (size: 0x8)
    class UCanvasPanel* CanvasPanel_SelectSkin;                                       // 0x04F0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_SelectSkinCharacter;                              // 0x04F8 (size: 0x8)
    class UImage* Image_71;                                                           // 0x0500 (size: 0x8)
    class UImage* Image_Floor;                                                        // 0x0508 (size: 0x8)
    class UImage* Image_Floor_1;                                                      // 0x0510 (size: 0x8)
    class UImage* Image_PalReflection;                                                // 0x0518 (size: 0x8)
    class UOverlay* Overlay_InframeRender_SelectSkin;                                 // 0x0520 (size: 0x8)
    class UOverlay* Overlay_InframeRender_SelectSkinCharacter;                        // 0x0528 (size: 0x8)
    class UOverlay* Overlay_WaitInitialize;                                           // 0x0530 (size: 0x8)
    class UPalScrollBox* PalScrollBox_SelectCharacter;                                // 0x0538 (size: 0x8)
    class UPalScrollBox* PalScrollBox_SelectSkin;                                     // 0x0540 (size: 0x8)
    class UWBP_Common_LoadingIcon_C* WBP_Common_LoadingIcon;                          // 0x0548 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0550 (size: 0x8)
    class UWBP_PalMonsterInframeRender_C* WBP_PalMonsterInframeRender;                // 0x0558 (size: 0x8)
    class UWBP_PalStorageMenu_ForSkinChanger_C* WBP_PalStorageMenu_ForSkinChanger;    // 0x0560 (size: 0x8)
    class UWBP_NoData_C* WBP_WaitInitialize;                                          // 0x0568 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_109;                                        // 0x0570 (size: 0x8)
    TEnumAsByte<E_PalUISkinChangerSequenceType::Type> SequenceType;                   // 0x0578 (size: 0x1)
    FName SelectedSkinName;                                                           // 0x057C (size: 0x8)
    TSoftObjectPtr<UPalIndividualCharacterSlot> SelectedSoftTargetSlot;               // 0x0588 (size: 0x30)
    FName SelectedCharacterID;                                                        // 0x05B8 (size: 0x8)
    FDataTableRowHandle DIalogMsgID_NoSkin;                                           // 0x05C0 (size: 0x10)
    FDataTableRowHandle DIalogMsgID_OverwriteSkin;                                    // 0x05D0 (size: 0x10)
    FDataTableRowHandle WaitInitializeMsgID;                                          // 0x05E0 (size: 0x10)
    FDataTableRowHandle RemoveSkinMsgID;                                              // 0x05F0 (size: 0x10)
    FDataTableRowHandle DialogMsgID_Remove;                                           // 0x0600 (size: 0x10)
    TSoftObjectPtr<UWBP_Paldex_List_C> SelectedCharacterPanel;                        // 0x0610 (size: 0x30)
    bool isButton1Clicked;                                                            // 0x0640 (size: 0x1)
    class UPalIndividualCharacterParameter* SkinUpdateBindedCharacterParam;           // 0x0648 (size: 0x8)

    void CREATEDELEGATE_PROXYFUNCTION_1(const FName& NewSkinName);
    void CREATEDELEGATE_PROXYFUNCTION_0(const FName& NewSkinName);
    void OnSkinUpdated(FName SkinName);
    void OnChangedInputMehotd(ECommonInputType bNewInputType);
    void OnHoveredRemoveSkinButton(FName CharacterID, class UWBP_Paldex_List_C* SelfWidget);
    void On Closed Remove Skin Dialog(bool bResult);
    void OnClickedRemoveSkinButton(FName CharacterID, class UWBP_Paldex_List_C* Widget);
    void OnHoveredSkinPanel(FName CharacterID, class UWBP_Paldex_List_C* SelfWidget);
    void OnHoveredCharacterPanel(FName CharacterID, class UWBP_Paldex_List_C* SelfWidget);
    void Get Localized Skin Name(FName SkinName, FText& SkinNameText);
    void Open Remove Skin Dialog(class UPalIndividualCharacterParameter* TargetCharacterParameter);
    void OpenChangeSkinDIalog(class UPalIndividualCharacterParameter* TargetCharacterParameter);
    void GetNowInsideBaseCampId(FGuid& ID);
    void OnClosedCheckDialog(bool bResult);
    void OnClickedSkinPanel(FName CharacterID, class UWBP_Paldex_List_C* Widget);
    void SetupSkinList(FName CharacterID);
    void OnClickedCharacterPanel(FName CharacterID, class UWBP_Paldex_List_C* Widget);
    void SetupExistSkinCharacterList();
    void OnCancelAction();
    void OnUpdateSkillInfo();
    class UWidget* BP_GetDesiredFocusTarget();
    void GetNowSequenceFocusTarget(class UWidget*& Widget);
    void ChangeSequence(TEnumAsByte<E_PalUISkinChangerSequenceType::Type> NewSequence);
    void OnSetup();
    void Destruct();
    void OnInitialized();
    void BndEvt__WBP_CharacterSkinChanger_WBP_PalStorageMenu_ForSkinChanger_K2Node_ComponentBoundEvent_3_OnClickedAnySlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void BndEvt__WBP_CharacterSkinChanger_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_CharacterSkinChanger_WBP_PalStorageMenu_ForSkinChanger_K2Node_ComponentBoundEvent_2_OnClickedCloseButton__DelegateSignature();
    void カスタムイベント();
    void EmptyEvent(bool Confirmed);
    void Construct();
    void ExecuteUbergraph_WBP_CharacterSkinChanger(int32 EntryPoint);
}; // Size: 0x650

#endif
