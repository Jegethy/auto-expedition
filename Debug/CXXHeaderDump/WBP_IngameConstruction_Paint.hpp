#ifndef UE4SS_SDK_WBP_IngameConstruction_Paint_HPP
#define UE4SS_SDK_WBP_IngameConstruction_Paint_HPP

class UWBP_IngameConstruction_Paint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_ColorSetChange;                                       // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Caution;                                              // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_39;                                   // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_100;                                  // 0x0298 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Warning;                                          // 0x02A0 (size: 0x8)
    class UImage* Image;                                                              // 0x02A8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02B8 (size: 0x8)
    class UVerticalBox* VerticalBox_1;                                                // 0x02C0 (size: 0x8)
    class UWBP_Common_PagingDot_C* WBP_Common_PagingDot;                              // 0x02C8 (size: 0x8)
    class UWBP_Common_PagingDot_C* WBP_Common_PagingDot_1;                            // 0x02D0 (size: 0x8)
    class UWBP_Common_PagingDot_C* WBP_Common_PagingDot_2;                            // 0x02D8 (size: 0x8)
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide;        // 0x02E0 (size: 0x8)
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_1;      // 0x02E8 (size: 0x8)
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_2;      // 0x02F0 (size: 0x8)
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_3;      // 0x02F8 (size: 0x8)
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_4;      // 0x0300 (size: 0x8)
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_5;      // 0x0308 (size: 0x8)
    class UWBP_IngameConstruction_Paint_Color_C* WBP_IngameConstruction_Paint_Color;  // 0x0310 (size: 0x8)
    class UWBP_IngameConstruction_Paint_Color_C* WBP_IngameConstruction_Paint_Color_1; // 0x0318 (size: 0x8)
    class UWBP_IngameConstruction_Paint_Color_C* WBP_IngameConstruction_Paint_Color_2; // 0x0320 (size: 0x8)
    class UWBP_IngameConstruction_Paint_Color_C* WBP_IngameConstruction_Paint_Color_3; // 0x0328 (size: 0x8)
    class UWBP_IngameConstruction_Paint_Color_C* WBP_IngameConstruction_Paint_Color_4; // 0x0330 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon_0;              // 0x0338 (size: 0x8)
    TArray<class UWBP_IngameConstruction_Num_C*> ItemNums;                            // 0x0340 (size: 0x10)
    FDataTableRowHandle keyGuideMsgHandle_PaintColor;                                 // 0x0350 (size: 0x10)
    FDataTableRowHandle keyGuideMsgHandle_RemoveColor;                                // 0x0360 (size: 0x10)
    FDataTableRowHandle keyGuideMsgHandle_Cancel;                                     // 0x0370 (size: 0x10)
    FDataTableRowHandle keyGuideMsgHandle_Close;                                      // 0x0380 (size: 0x10)
    FDataTableRowHandle keyGuideMsgHandle_PickColor;                                  // 0x0390 (size: 0x10)
    FDataTableRowHandle keyGuideMsgHandle_EditColor;                                  // 0x03A0 (size: 0x10)
    TArray<class UWBP_PalCommonItemIcon_C*> ItemIconArray;                            // 0x03B0 (size: 0x10)
    FDataTableRowHandle keyGuideMsgHandle_RotateRight;                                // 0x03C0 (size: 0x10)
    FDataTableRowHandle keyGuideMsgHandle_RotateLeft;                                 // 0x03D0 (size: 0x10)
    class UPalUIBuildingModel* CachedModel;                                           // 0x03E0 (size: 0x8)

    void FindPageDotWidget(int32 Index, class UWBP_Common_PagingDot_C*& Output);
    void GetPageDotWidgets(TArray<class UWBP_Common_PagingDot_C*>& Return Value);
    void FindSlotWidget(int32 SlotIndex, class UWBP_IngameConstruction_Paint_Color_C*& Output);
    void GetSlotWidgets(TArray<class UWBP_IngameConstruction_Paint_Color_C*>& Return Value);
    void NotifyUpdatePaletteColor(int32 SlotIndex, FFPalUIPaintPaletteInfo PaletteInfo);
    void ReflectAllSlotPaletteInfo(TArray<FFPalUIPaintPaletteInfo>& PaletteInfos);
    void NotifyUpdateSelectedSlotIndex(int32 NewSlotIndex);
    void NotifyUpdateSelectedPageIndex(int32 NewPageIndex, int32 LastPageIndex);
    void GetBuildingWarningType(class UPalUIBuildingModel* Model, EPalBuildingNumWarningType& NewParam);
    void SetupKeyGuide();
    void SetEnableWarning(bool IsEnable);
    void Setup(FPalBuildObjectData inBuildObjectData);
    void SetWarningText(FText InText);
    void ResetAllUI();
    void InitUI();
    void SetBuildObjectName(FText InName);
    void PlayAnimation_ColorSetChange();
    void Construct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_IngameConstruction_Paint(int32 EntryPoint);
}; // Size: 0x3E8

#endif
