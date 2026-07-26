#ifndef UE4SS_SDK_WBP_Paldex_ForDisplay_HPP
#define UE4SS_SDK_WBP_Paldex_ForDisplay_HPP

class UWBP_Paldex_ForDisplay_C : public UPalUIPaldex
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_DebugBonusTableIndex;                              // 0x04F0 (size: 0x8)
    class UWBP_Paldex_C* WBP_Paldex;                                                  // 0x04F8 (size: 0x8)
    FPalDataTableRowName_UIInputAction ToModelInputAction;                            // 0x0500 (size: 0x8)
    FPalDataTableRowName_UIInputAction ToDistributionInputAction;                     // 0x0508 (size: 0x8)
    FPalUIActionBindData ToModelInputHandle;                                          // 0x0510 (size: 0x4)
    FPalUIActionBindData ToDistributionInputHandle;                                   // 0x0514 (size: 0x4)
    bool isDisplayDistribution;                                                       // 0x0518 (size: 0x1)
    FName NowDisplayCharacterID;                                                      // 0x051C (size: 0x8)
    double mapControllWeight_Gamepad;                                                 // 0x0528 (size: 0x8)
    double mapControllWeight_Mouse;                                                   // 0x0530 (size: 0x8)
    FRotator captureCameraRotator;                                                    // 0x0538 (size: 0x18)
    double modelRotationControllWeight_Gamepad;                                       // 0x0550 (size: 0x8)
    FPalDataTableRowName_UIInputAction ChangeDistributionTimeAction;                  // 0x0558 (size: 0x8)
    FPalUIActionBindData ChangeDistributionTimeActionHandle;                          // 0x0560 (size: 0x4)
    TEnumAsByte<E_PaldexDistributionTimeType::Type> nowDisplayDistributionTimeType;   // 0x0564 (size: 0x1)
    double distributionZoomWeight_Mouse;                                              // 0x0568 (size: 0x8)
    FPalDataTableRowName_UIInputAction MapZoomAction;                                 // 0x0570 (size: 0x8)
    FPalUIActionBindData ChangeDistributionZoomActionHandle;                          // 0x0578 (size: 0x4)
    FWBP_Paldex_ForDisplay_COnAllNewFlagCleared OnAllNewFlagCleared;                  // 0x0580 (size: 0x10)
    void OnAllNewFlagCleared();
    FPalDataTableRowName_UIInputAction RandomCryAction;                               // 0x0590 (size: 0x8)
    FPalUIActionBindData RandomCryActionHandle;                                       // 0x0598 (size: 0x4)
    FName TmpDelayScrollTargetCharacetr;                                              // 0x059C (size: 0x8)
    FPalDataTableRowName_UIInputAction ChangeMapAction;                               // 0x05A4 (size: 0x8)
    FPalUIActionBindData ChangeMapActionHandle;                                       // 0x05AC (size: 0x4)
    bool bInitializedMap;                                                             // 0x05B0 (size: 0x1)
    FPalDataTableRowName_UIInputAction FinteringAction;                               // 0x05B4 (size: 0x8)

    void FilteringInternal(bool bIgnoreFocus);
    void OnClosedFilteringSettings(class UPalHUDDispatchParameterBase* Param);
    void OpenFilteringWindow();
    void OnInputAction_FIltering();
    void OnInputAction_ChangeMap();
    void SetEnableRandomCryAction(bool IsEnableFlag);
    void PlayRandomCry();
    void UpdateNewFlag(FName CharacterID);
    void OnChangeDistributionInput();
    void OnChangeModelInput();
    void Change Map Zoom Rate();
    void SwitchDistributionTime(TEnumAsByte<E_PaldexDistributionTimeType::Type> timeType);
    void ChangeDistributionTime();
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void ToDistributionDisplayMode();
    void ToModelDisplayMode();
    class UWidget* BP_GetDesiredFocusTarget();
    void Setup();
    void Construct();
    void BndEvt__WBP_Paldex_ForDisplay_WBP_Paldex_K2Node_ComponentBoundEvent_1_OnClickedModelTab__DelegateSignature();
    void BndEvt__WBP_Paldex_ForDisplay_WBP_Paldex_K2Node_ComponentBoundEvent_2_OnClickedDistributionTab__DelegateSignature();
    void BndEvt__WBP_Paldex_ForDisplay_WBP_Paldex_K2Node_ComponentBoundEvent_3_OnClickedAnyPalPanel__DelegateSignature(FName CharacterID);
    void DelayScrollToCharacterID(FName CharacterID);
    void BndEvt__WBP_Paldex_ForDisplay_WBP_Paldex_K2Node_ComponentBoundEvent_0_OnClickedFilteringButton__DelegateSignature();
    void ExecuteUbergraph_WBP_Paldex_ForDisplay(int32 EntryPoint);
    void OnAllNewFlagCleared__DelegateSignature();
}; // Size: 0x5BC

#endif
