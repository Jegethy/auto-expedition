#ifndef UE4SS_SDK_WBP_PalBuilding_HPP
#define UE4SS_SDK_WBP_PalBuilding_HPP

class UWBP_PalBuilding_C : public UPalUIBuilding
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0468 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0470 (size: 0x8)
    class UImage* Base_Flash;                                                         // 0x0478 (size: 0x8)
    class UImage* Image;                                                              // 0x0480 (size: 0x8)
    class UImage* Image_181;                                                          // 0x0488 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0490 (size: 0x8)
    class UOverlay* Overlay_Reticle;                                                  // 0x0498 (size: 0x8)
    class UWBP_IngameConstruction_C* WBP_IngameConstruction;                          // 0x04A0 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x04A8 (size: 0x8)
    class UBP_PalUIBuildingModel_C* Model;                                            // 0x04B0 (size: 0x8)
    TMap<class EPalMapObjectOperationResult, class FDataTableRowHandle> FailedMessageMap; // 0x04B8 (size: 0x50)
    FDataTableRowHandle FailedMessageOther;                                           // 0x0508 (size: 0x10)
    class UPalBuilderComponent* BuilderComponent;                                     // 0x0518 (size: 0x8)
    EPalMapObjectOperationResult lastWarningType;                                     // 0x0520 (size: 0x1)
    bool isExitMaterial;                                                              // 0x0521 (size: 0x1)
    FPalDataTableRowName_UIInputAction CancelBuildingActionInput;                     // 0x0524 (size: 0x8)
    FPalDataTableRowName_UIInputAction ForceCloseBuildingActionInput;                 // 0x052C (size: 0x8)
    FPalDataTableRowName_UIInputAction ForceCloseBuildingActionInput02;               // 0x0534 (size: 0x8)
    FPalDataTableRowName_UIInputAction BuildObjectActionInput;                        // 0x053C (size: 0x8)
    FPalDataTableRowName_UIInputAction BuildObjectContinuousActionInput;              // 0x0544 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelBuildingActionInput_ForRadialMenu;       // 0x054C (size: 0x8)
    FPalDataTableRowName_UIInputAction BuildRotateRightActionInput;                   // 0x0554 (size: 0x8)
    FPalDataTableRowName_UIInputAction BuildRotateLeftActionInput;                    // 0x055C (size: 0x8)
    FPalDataTableRowName_UIInputAction BuildChangeMode;                               // 0x0564 (size: 0x8)
    bool NewVar;                                                                      // 0x056C (size: 0x1)
    FTimerHandle UpdateDisplayTimer;                                                  // 0x0570 (size: 0x8)
    FPalDataTableRowName_UIInputAction BuildChangeSnapMode;                           // 0x0578 (size: 0x8)
    FPalDataTableRowName_UIInputAction BuildChangeReplaceMode;                        // 0x0580 (size: 0x8)
    FPalDataTableRowName_UIInputAction ChangeModeInputAction;                         // 0x0588 (size: 0x8)
    bool bCompletedDelayInputActionSetup;                                             // 0x0590 (size: 0x1)
    FTimerHandle DelayInputActionSetupTimerHandle;                                    // 0x0598 (size: 0x8)

    void DelaySetupInputAction();
    void ChangeMode();
    void OnEsc();
    void ToggleChangeReplaceMode();
    void ChangeSnapModeOff();
    void ChangeSnapModeOn();
    void ChangeModeOff();
    void ChangeModeOn();
    void UpdateOutsideBaseCampWarning();
    void OnLeaveBaseCamp();
    void OnEnterBaseCamp(class UPalBaseCampModel* Model);
    void UnregisterInsideBaseCampEvent();
    void RegisterInsideBaseCampEvent();
    void RotateLeft();
    void RotateRight();
    void Get Build Operation Result(EPalMapObjectOperationResult& Result);
    void EmptyFunction();
    void GetWarningText(EPalMapObjectOperationResult Result, FText& Text);
    void BuildObjectContinuous();
    void BuildObject();
    void Finish Building();
    void ReturnToMainMenu();
    void SetupInputAction();
    void ResetUI();
    void SetupUI();
    void DisposeModel();
    void Setup Model();
    void AnmEvent_In();
    void OnSetup();
    void Destruct();
    void UpdateDisplay();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void DelayInputActionSetupEvent();
    void ExecuteUbergraph_WBP_PalBuilding(int32 EntryPoint);
}; // Size: 0x5A0

#endif
