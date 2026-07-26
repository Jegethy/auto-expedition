#ifndef UE4SS_SDK_WBP_CommonRadialMenuBase_HPP
#define UE4SS_SDK_WBP_CommonRadialMenuBase_HPP

class UWBP_CommonRadialMenuBase_C : public UPalUIRadialMenuWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0498 (size: 0x8)
    class UWidgetAnimation* CursorLoop;                                               // 0x04A0 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x04A8 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur;                                            // 0x04B0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Inner;                                            // 0x04B8 (size: 0x8)
    class UImage* Image_Cursor;                                                       // 0x04C0 (size: 0x8)
    class UImage* Image_radialBase;                                                   // 0x04C8 (size: 0x8)
    class UWBP_RadialMenu_base_C* WBP_RadialMenu_base;                                // 0x04D0 (size: 0x8)
    class UImage* selectedMenuImage;                                                  // 0x04D8 (size: 0x8)
    class UImage* selectedMenuInnerImage;                                             // 0x04E0 (size: 0x8)
    FWBP_CommonRadialMenuBase_COnSelectedIndex_forBP OnSelectedIndex_forBP;           // 0x04E8 (size: 0x10)
    void OnSelectedIndex_forBP(int32 NewIndex, int32 LastIndex);
    double menuOffSetLength;                                                          // 0x04F8 (size: 0x8)
    FWBP_CommonRadialMenuBase_COnDecideIndex_forBP OnDecideIndex_forBP;               // 0x0500 (size: 0x10)
    void OnDecideIndex_forBP(int32 Index);
    double additionalWidgetOffsetLength;                                              // 0x0510 (size: 0x8)
    bool isEnableCheck;                                                               // 0x0518 (size: 0x1)
    class UImage* selectedMenuLeftBorderImage;                                        // 0x0520 (size: 0x8)
    class UImage* selectedMenuRightBorderImage;                                       // 0x0528 (size: 0x8)
    bool isDIsplayOnly;                                                               // 0x0530 (size: 0x1)
    class UMaterialInterface* SelectedPlateMaterial;                                  // 0x0538 (size: 0x8)
    class UMaterialInterface* SelectedBorderMaterial;                                 // 0x0540 (size: 0x8)
    class UMaterialInterface* BackGroundPlateMaterial;                                // 0x0548 (size: 0x8)
    bool isUseLocalControllerInput;                                                   // 0x0550 (size: 0x1)
    double mouseDetectDelta;                                                          // 0x0558 (size: 0x8)
    class UWidget* CenterWidget;                                                      // 0x0560 (size: 0x8)
    FPalUIActionBindData DecideActionHandle;                                          // 0x0568 (size: 0x4)
    FPalUIActionBindData DummyPressedActionHandle;                                    // 0x056C (size: 0x4)
    class UPalUserWidget* InputParentWidget;                                          // 0x0570 (size: 0x8)
    TMap<int32, UWidget*> AdditionalWidget;                                           // 0x0578 (size: 0x50)
    FVector2D CenterOffset;                                                           // 0x05C8 (size: 0x10)
    double MenuScale;                                                                 // 0x05D8 (size: 0x8)
    class UAkAudioEvent* HoveredSound;                                                // 0x05E0 (size: 0x8)
    class UAkAudioEvent* ClickedSound;                                                // 0x05E8 (size: 0x8)

    void OnChangedInputMethod(ECommonInputType bNewInputType);
    void OnPressed_Dummy();
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void GetCenterPosition(FVector2D& Position);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnDecided();
    void RecalcMenuNum(int32 newMenuNum);
    void ClearCenterWidget();
    void Set Center Widget(class UWidget* Widget, FVector2D CanvasSize, FVector2D Offset);
    void Close();
    void Open(class UPalUserWidget* ParentWidget, FPalDataTableRowName_UIInputAction DecideAction);
    void ClearAdditionalWidgets();
    void SetSelectedImageVisibility(bool IsVisible);
    void SetArrowVisibility(bool IsVisible);
    void CalcAdditionalWidgetPosition(int32 Index, FVector2D& Offset);
    void Set Additional Widget(int32 Index, class UUserWidget* AddWidget, class UCanvasPanelSlot*& Canvas);
    void CheckMouse_LocalController();
    void CalcOffsetPosition(int32 Index, FVector2D& Offset);
    void SetSelectedImageAngle(double inAngle);
    void CreateBgPlateImage();
    void Calc Image Angle(int32 Index, double& OutAngle);
    void CreateSelectedMenuImage();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BuildRadialMenuWidget();
    void OnInitialized();
    void OnChangedIndex(int32 NewIndex, int32 prevIndex);
    void Construct();
    void Destruct();
    void PreConstruct(bool IsDesignTime);
    void SetMouseCursorPositionCenter();
    void ExecuteUbergraph_WBP_CommonRadialMenuBase(int32 EntryPoint);
    void OnDecideIndex_forBP__DelegateSignature(int32 Index);
    void OnSelectedIndex_forBP__DelegateSignature(int32 NewIndex, int32 LastIndex);
}; // Size: 0x5F0

#endif
