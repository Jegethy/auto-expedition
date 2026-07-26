#ifndef UE4SS_SDK_WBP_CharacterMake_HPP
#define UE4SS_SDK_WBP_CharacterMake_HPP

class UWBP_CharacterMake_C : public UPalUICharacterMakeBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UWBP_CharaCre_C* WBP_CharaCre;                                              // 0x0488 (size: 0x8)
    class UWBP_CharaCre_BG_C* WBP_CharaCre_BG;                                        // 0x0490 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x0498 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_1;                              // 0x04A0 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_2;                              // 0x04A8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_3;                              // 0x04B0 (size: 0x8)
    class UWBP_PalPlayerInframeRender_C* WBP_PalPlayerInframeRender;                  // 0x04B8 (size: 0x8)
    FPalDataTableRowName_UIInputAction MouseZoomInInputAction;                        // 0x04C0 (size: 0x8)
    FPalDataTableRowName_UIInputAction MouseZoomOutInputAction;                       // 0x04C8 (size: 0x8)
    FPalPlayerDataCharacterMakeInfo MakeInfo;                                         // 0x04D0 (size: 0x208)
    TEnumAsByte<E_UICharacterMakeCategory::Type> NowDisplayCategory;                  // 0x06D8 (size: 0x1)
    FPalDataTableRowName_UIInputAction DecideInputAction;                             // 0x06DC (size: 0x8)
    FPalDataTableRowName_UIInputAction RandomizeInputAction;                          // 0x06E4 (size: 0x8)
    FPalDataTableRowName_UIInputAction PrevCategoryInputAction;                       // 0x06EC (size: 0x8)
    FPalDataTableRowName_UIInputAction NextCategoryInputAction;                       // 0x06F4 (size: 0x8)
    TEnumAsByte<E_UICharacterMakeCategory::Type> LastActivatedCategory;               // 0x06FC (size: 0x1)
    double SVMax;                                                                     // 0x0700 (size: 0x8)
    class UPalHUDDispatchParameter_CharacterMake* DispaltchParameter;                 // 0x0708 (size: 0x8)
    FText CachedPlayerName;                                                           // 0x0710 (size: 0x18)
    double RotationSpeed_Pad;                                                         // 0x0728 (size: 0x8)
    double RotationSpeed_MouseDrag;                                                   // 0x0730 (size: 0x8)
    double ZoomSpeed_Pad;                                                             // 0x0738 (size: 0x8)
    double ZoomRate_WheelTrigger;                                                     // 0x0740 (size: 0x8)
    double CachedAnalogValueX;                                                        // 0x0748 (size: 0x8)
    double CachedAnalogValueY;                                                        // 0x0750 (size: 0x8)
    FVector CameraRelativeLocation;                                                   // 0x0758 (size: 0x18)
    bool IsMLBDown;                                                                   // 0x0770 (size: 0x1)
    double MaxZoomCameraOffset_BodySetting;                                           // 0x0778 (size: 0x8)
    double MaxZoomCameraOffset_HeadSetting;                                           // 0x0780 (size: 0x8)
    FDataTableRowHandle CompleteCheckMsgID;                                           // 0x0788 (size: 0x10)
    bool IsRTriggerDown;                                                              // 0x0798 (size: 0x1)
    bool IsLTriggerDown;                                                              // 0x0799 (size: 0x1)
    double CameraUpDownSpeed_ForPad;                                                  // 0x07A0 (size: 0x8)
    class UPalHUDDispatchParameter_FadeWidget* FadeOutParameter;                      // 0x07A8 (size: 0x8)
    FVector DefaultHeadCameraLocation;                                                // 0x07B0 (size: 0x18)
    FVector DefaultBodyCameraLocation;                                                // 0x07C8 (size: 0x18)
    FPalDataTableRowName_UIInputAction ToggleEquipDisplayInputAction;                 // 0x07E0 (size: 0x8)
    FPalDataTableRowName_UIInputAction PlaySampleVoiceInInputAction;                  // 0x07E8 (size: 0x8)
    FPalUIActionBindData PlaySampleVoiceActionHandle;                                 // 0x07F0 (size: 0x4)
    bool IsCachingMakeData;                                                           // 0x07F4 (size: 0x1)
    class UBP_PalPlayerDataCharacterMake_C* CharacterMakeData;                        // 0x07F8 (size: 0x8)
    FName flagName;                                                                   // 0x0800 (size: 0x8)
    bool NowDisplayEquip;                                                             // 0x0808 (size: 0x1)
    bool bCompletedMake;                                                              // 0x0809 (size: 0x1)

    void OnTriggerToggleEquipDisplay();
    void OnTriggerCompleteMake();
    void OnTriggerPlaySampleVoice();
    void GetRandomVoiceID(int32& VoiceID);
    void GetNickname(FString& Name);
    void ApplyPreset(FName PresetName);
    void GetRandomPartsName_Internal(class UDataTable* DataTable, FName& PartsName);
    void GetRandomHair(FName& HairName);
    void GetRandomHead(FName& HeadName);
    void GetRandomEye(FName& EyeName);
    void GetRandomBody(FName& BodyName);
    void GetAddCameraOffsetUpDown_ForPad(double& Offset);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void GetRestoreFocusTarget(class UWidget*& Target);
    void PostCompleteNewMake();
    void ProcessCompleteMake();
    void OnClosedCompleteCheckDialog(bool bResult);
    void OpenCompleteCheckDialog();
    void OnCancelAction();
    void CalcEyeColor(FLinearColor SelectedHSV, FLinearColor& OutHSV);
    void GetMaxZoomOffset(double& MaxOffset);
    void UpdateCameraLocationByWheel(bool IsZoomIn);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Update Camera Location(double DeltaTime);
    void UpdateCharacterRotation(double DeltaTime);
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void OnCloseNameEditWindow(class UPalHUDDispatchParameterBase* Param);
    void InitializeDisplayCharacter();
    void OnTriggerCancel();
    void Get Character Make Data Instance(class UBP_PalPlayerDataCharacterMake_C*& MakeDataInstance);
    void GetRandomColor(FLinearColor& Color);
    void OnAplliedHeadMesh(FLinearColor BrowMeshBaseColor, FLinearColor EyeMeshBaseColor);
    void OnAppliedHairMesh(FLinearColor HairMeshBaseColor);
    void OnAppliedBodyMesh(FLinearColor BodyMeshBasColor);
    void OnNextCategoryInput();
    void OnPrevCategoryInput();
    void OnChangeCategory_Internal(TEnumAsByte<E_UICharacterMakeCategory::Type> CategoryType);
    void RandomizeMakeInfo();
    class UWidget* BP_GetDesiredFocusTarget();
    void Request Display(bool ShouldDelay);
    void OnTriggerZoomOut_Mouse();
    void OnTriggerZoomIn_MOuse();
    void RegisterStaticInputAction();
    void OpenNameEditWindow(FText DefaultName);
    void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_1_OnLeftRotationButtonClicked__DelegateSignature();
    void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_2_OnRightRotationButtonClicked__DelegateSignature();
    void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_3_OnChangedSkinColor__DelegateSignature(FLinearColor Color);
    void OnInitialized();
    void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_4_OnChangedTorsoSize__DelegateSignature(double Size);
    void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_5_OnChangedLegSize__DelegateSignature(double Size);
    void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_6_OnChangedArmSize__DelegateSignature(double Size);
    void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_7_OnChangedEyeColor__DelegateSignature(FLinearColor Color);
    void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_8_OnChangedBrowColor__DelegateSignature(FLinearColor Color);
    void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_9_OnChangedHairColor__DelegateSignature(FLinearColor Color);
    void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_10_OnSelectedBodyMesh__DelegateSignature(FName MeshPresetRowName);
    void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_12_OnSelecteddHeadMesh__DelegateSignature(FName MeshPresetRowName);
    void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_13_OnSelectedHairMesh__DelegateSignature(FName MeshPresetRowName);
    void OnEndLoadingFadeOut();
    void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_11_OnClickedCategoryButton__DelegateSignature(TEnumAsByte<E_UICharacterMakeCategory::Type> CategoryType);
    void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_0_OnNotifyOpenSelectColorWindow__DelegateSignature();
    void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_14_OnNotifyCloseSelectColorWIndow__DelegateSignature();
    void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_15_OnClickedEditNameButton__DelegateSignature();
    void OnSetup();
    void DelayOpenEditNameWindow();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_16_OnSelectedEyeMaterial__DelegateSignature(FName EyeMaterialName);
    void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_17_OnClickedCompleteButton__DelegateSignature();
    void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_18_OnSelectedPreset__DelegateSignature(FName PresetName);
    void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_19_OnChangedVoiceID__DelegateSignature(int32 VoiceID);
    void BndEvt__WBP_CharacterMake_WBP_CharaCre_K2Node_ComponentBoundEvent_20_OnClickedInGameCompleteButton__DelegateSignature();
    void Destruct();
    void DelayDisplay();
    void ExecuteUbergraph_WBP_CharacterMake(int32 EntryPoint);
}; // Size: 0x80A

#endif
