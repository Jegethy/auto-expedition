#ifndef UE4SS_SDK_WBP_PalDismantling_HPP
#define UE4SS_SDK_WBP_PalDismantling_HPP

class UWBP_PalDismantling_C : public UPalUIDismantling
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0468 (size: 0x8)
    class UWidgetAnimation* Anm_Demolish;                                             // 0x0470 (size: 0x8)
    class UImage* Base;                                                               // 0x0478 (size: 0x8)
    class UImage* Base_1;                                                             // 0x0480 (size: 0x8)
    class UImage* Base_2;                                                             // 0x0488 (size: 0x8)
    class UImage* Base_Flash;                                                         // 0x0490 (size: 0x8)
    class UImage* Base_L;                                                             // 0x0498 (size: 0x8)
    class UImage* Base_L_1;                                                           // 0x04A0 (size: 0x8)
    class UImage* Base_R;                                                             // 0x04A8 (size: 0x8)
    class UImage* Base_R_1;                                                           // 0x04B0 (size: 0x8)
    class UImage* Image;                                                              // 0x04B8 (size: 0x8)
    class UImage* Image_181;                                                          // 0x04C0 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x04C8 (size: 0x8)
    class UOverlay* Overlay_Reticle;                                                  // 0x04D0 (size: 0x8)
    class UWBP_IngameConstruction_Dismantling_C* WBP_IngameConstruction_Dismantling;  // 0x04D8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x04E0 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelDismantlingActionInput;                  // 0x04E8 (size: 0x8)
    FPalDataTableRowName_UIInputAction ForceCloseDismantlingActionInput;              // 0x04F0 (size: 0x8)
    FPalDataTableRowName_UIInputAction ForceCloseDismantlingActionInput02;            // 0x04F8 (size: 0x8)
    FPalDataTableRowName_UIInputAction DismantleObjectActionInput;                    // 0x0500 (size: 0x8)
    class UPalUIDismantlingModel* Model;                                              // 0x0508 (size: 0x8)
    class UPalBuilderComponent* BuilderComponent;                                     // 0x0510 (size: 0x8)
    FPalDataTableRowName_UIInputAction DismantleObjectContinuousActionInput;          // 0x0518 (size: 0x8)
    class APalBuildObject* DismantleTargetObject;                                     // 0x0520 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelDismantlingActionInput_FromRadialMenu;   // 0x0528 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelDismantlingActionInput_FromRadialMenu_0; // 0x0530 (size: 0x8)
    FPalDataTableRowName_UIInputAction ChangeModeInputAction;                         // 0x0538 (size: 0x8)

    void OnEsc();
    void ChangeMode();
    void EmptyFunction();
    void DismantleObjectSuccessed();
    void DismantleObjectFailed();
    void InitUI();
    void ResetUI();
    void UpdateUI();
    void GetWarningText(FText& WarningText);
    void DisposeModel();
    void FinishDismantling();
    void DismantleObjectContinuous();
    void DismantlingObject();
    void ReturnToMainMenu();
    void SetupInputAction();
    void Setup Model();
    void AnmEvent_In();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnSetup();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_PalDismantling(int32 EntryPoint);
}; // Size: 0x540

#endif
