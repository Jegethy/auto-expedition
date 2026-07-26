#ifndef UE4SS_SDK_WBP_ModList_ForDisplay_HPP
#define UE4SS_SDK_WBP_ModList_ForDisplay_HPP

class UWBP_ModList_ForDisplay_C : public UPalUIModSettings
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D0 (size: 0x8)
    class UWBP_Option_ModMenu_C* WBP_Option_ModMenu;                                  // 0x04D8 (size: 0x8)
    FPalUIModUniqueId CurrentProcessingModId;                                         // 0x04E0 (size: 0x10)
    FPalDataTableRowName_UIInputAction OpenSteamworkshopInputAction;                  // 0x04F0 (size: 0x8)
    FDataTableRowHandle CantChangeModSupportIngameMsgId;                              // 0x04F8 (size: 0x10)
    FDataTableRowHandle SaveMsgId;                                                    // 0x0508 (size: 0x10)
    FDataTableRowHandle NotCompatibleMsgId;                                           // 0x0518 (size: 0x10)
    FDataTableRowHandle CancelMSGID;                                                  // 0x0528 (size: 0x10)
    FPalDataTableRowName_UIInputAction CancelInputAction;                             // 0x0538 (size: 0x8)
    FPalDataTableRowName_UIInputAction ConfirmInputAction;                            // 0x0540 (size: 0x8)
    FDataTableRowHandle ModSupportCautionMsgId;                                       // 0x0548 (size: 0x10)

    void OnConfirmAction();
    void OnDialogClosed_Cancel(bool bResult);
    void CloseOrOpenCancelDialog();
    void OnDialogClosed_NoticeModSupport(class UPalHUDDispatchParameterBase* Param);
    void OnClickedModInternal(class UWBP_Option_ModMenu_ModList_C* Widget);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnInputAction_OpenSteamWorkshop();
    void OnDialogClosed_CantChangeModSupport(class UPalHUDDispatchParameterBase* Parameter);
    class UWidget* BP_GetDesiredFocusTarget();
    void OnDialogDialog_CheckSave(bool bResult);
    void CloseOrOpenSaveDialog();
    void OnCancelAction();
    void SetupInputAction();
    void OnDialogClosed_CautionNotCompatibleMod(bool bResult);
    void Setup();
    void BndEvt__WBP_ModList_ForDisplay_WBP_Option_ModMenu_K2Node_ComponentBoundEvent_0_OnClickedAnyMod__DelegateSignature(class UWBP_Option_ModMenu_ModList_C* Widget);
    void BndEvt__WBP_ModList_ForDisplay_WBP_Option_ModMenu_K2Node_ComponentBoundEvent_1_OnChangedModSupportIngame__DelegateSignature(bool bNewFlag);
    void OnSetup();
    void BndEvt__WBP_ModList_ForDisplay_WBP_Option_ModMenu_K2Node_ComponentBoundEvent_2_OnConfirm__DelegateSignature();
    void BndEvt__WBP_ModList_ForDisplay_WBP_Option_ModMenu_K2Node_ComponentBoundEvent_3_OnRequestOpenSteamWorkshop__DelegateSignature();
    void OnCompleteRefresh();
    void OnStartRefresh();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_ModList_ForDisplay_WBP_Option_ModMenu_K2Node_ComponentBoundEvent_4_OnCancel__DelegateSignature();
    void ExecuteUbergraph_WBP_ModList_ForDisplay(int32 EntryPoint);
}; // Size: 0x558

#endif
