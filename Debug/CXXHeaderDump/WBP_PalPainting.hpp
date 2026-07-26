#ifndef UE4SS_SDK_WBP_PalPainting_HPP
#define UE4SS_SDK_WBP_PalPainting_HPP

class UWBP_PalPainting_C : public UPalUserWidgetStackableUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0468 (size: 0x8)
    class UWidgetAnimation* Anm_Paint;                                                // 0x0470 (size: 0x8)
    class UImage* Base_1;                                                             // 0x0478 (size: 0x8)
    class UImage* Base_2;                                                             // 0x0480 (size: 0x8)
    class UImage* Base_3;                                                             // 0x0488 (size: 0x8)
    class UImage* Base_Flash;                                                         // 0x0490 (size: 0x8)
    class UImage* Base_L_1;                                                           // 0x0498 (size: 0x8)
    class UImage* Base_R_1;                                                           // 0x04A0 (size: 0x8)
    class UImage* Base_R_2;                                                           // 0x04A8 (size: 0x8)
    class UImage* Base_R_3;                                                           // 0x04B0 (size: 0x8)
    class UImage* Image;                                                              // 0x04B8 (size: 0x8)
    class UImage* Image_181;                                                          // 0x04C0 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x04C8 (size: 0x8)
    class UOverlay* Overlay_Reticle;                                                  // 0x04D0 (size: 0x8)
    class UWBP_IngameConstruction_Paint_C* WBP_IngameConstruction_Paint;              // 0x04D8 (size: 0x8)
    class UWBP_IngameConstruction_Paint_ColorPicker_C* WBP_IngameConstruction_Paint_ColorPicker_80; // 0x04E0 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x04E8 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelActionInput;                             // 0x04F0 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelActionInput_02;                          // 0x04F8 (size: 0x8)
    FPalDataTableRowName_UIInputAction ForceCloseActionInput;                         // 0x0500 (size: 0x8)
    FPalDataTableRowName_UIInputAction ForceCloseActionInput02;                       // 0x0508 (size: 0x8)
    FPalDataTableRowName_UIInputAction PaintObjectActionInput;                        // 0x0510 (size: 0x8)
    class UPalUIPaintModel* UIModel;                                                  // 0x0518 (size: 0x8)
    class UPalBuilderComponent* BuilderComponent;                                     // 0x0520 (size: 0x8)
    class APalBuildObject* TargetObject;                                              // 0x0528 (size: 0x8)
    FPalDataTableRowName_UIInputAction RemoveColorActionInput;                        // 0x0530 (size: 0x8)
    FPalDataTableRowName_UIInputAction EditColorActionInput;                          // 0x0538 (size: 0x8)
    FPalDataTableRowName_UIInputAction PickColorActionInput;                          // 0x0540 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelPaintingActionInput_FromRadialMenu;      // 0x0548 (size: 0x8)
    FPalDataTableRowName_UIInputAction CancelPaintingActionInput_FromRadialMenu_0;    // 0x0550 (size: 0x8)
    FPalDataTableRowName_UIInputAction MoveselectPickColorRightActionInput;           // 0x0558 (size: 0x8)
    FPalDataTableRowName_UIInputAction MoveselectPickColorLeftActionInput;            // 0x0560 (size: 0x8)
    FPalDataTableRowName_UIInputAction MoveselectPickColorUpActionInput;              // 0x0568 (size: 0x8)
    FPalDataTableRowName_UIInputAction MoveselectPickColorDownActionInput;            // 0x0570 (size: 0x8)
    int32 SlotNumInPage;                                                              // 0x0578 (size: 0x4)
    int32 PageNum;                                                                    // 0x057C (size: 0x4)
    FPalDataTableRowName_UIInputAction ChangeModeInputAction;                         // 0x0580 (size: 0x8)

    void OnEsc();
    void ChangeMode();
    void GetCurentSlotPaletteInfos(TArray<FFPalUIPaintPaletteInfo>& Return Value);
    void OnUpdatePaletteColor(class UPalUIPaintModel* Model, int32 PaletteIndex);
    void OnUpdateSelectedPaletteIndex(class UPalUIPaintModel* Model, int32 LastPaletteIndex);
    void CalcPageStartEndIndex(int32 Index, int32& StartIndex, int32& EndIndex);
    void SlotNum(int32& Return Value);
    void ToPageSlotIndex(int32 PaletteIndex, int32& pageIndex, int32& SlotIndex);
    void ToPaletteIndex(int32 pageIndex, int32 SlotIndex, int32& PaletteIndex);
    void EmptyFunction();
    void MoveSelectPaintColor_Right();
    void MoveSelectPaintColor_Left();
    void MoveSelectPaintColor_Down();
    void MoveSelectPaintColor_Up();
    void OpenEditPaletteColor();
    void PickColor();
    void RemoveColorStop();
    void RemoveColorStart();
    void PaintingObjectStop();
    void PaintingObjectStart();
    void ResetUI();
    void UpdateUI();
    void InitUI();
    void GetWarningText(FText& WarningText);
    void DisposeModel();
    void FinishPainting();
    void ReturnToMainMenu();
    void SetupInputAction();
    void Setup Model();
    void AnmEvent_In();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnSetup();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_PalPainting(int32 EntryPoint);
}; // Size: 0x588

#endif
