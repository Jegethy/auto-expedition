#ifndef UE4SS_SDK_WBP_IngameConstruction_HPP
#define UE4SS_SDK_WBP_IngameConstruction_HPP

class UWBP_IngameConstruction_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Caution;                                              // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_1;                                    // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_39;                                   // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_100;                                  // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_CautionTitle;                           // 0x02A0 (size: 0x8)
    class UCanvasPanel* Canvas_Limit;                                                 // 0x02A8 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Caution;                                          // 0x02B0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Warning;                                          // 0x02B8 (size: 0x8)
    class UImage* Image;                                                              // 0x02C0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02C8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02D0 (size: 0x8)
    class UImage* Image_Limit_Base;                                                   // 0x02D8 (size: 0x8)
    class UImage* Image_LimitCautionIcon;                                             // 0x02E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Limit;                                             // 0x02E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LimitNum;                                          // 0x02F0 (size: 0x8)
    class UVerticalBox* VerticalBox_1;                                                // 0x02F8 (size: 0x8)
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_5;      // 0x0300 (size: 0x8)
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_6;      // 0x0308 (size: 0x8)
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_7;      // 0x0310 (size: 0x8)
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_BuildObject_ForGamepad; // 0x0318 (size: 0x8)
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_BuildObjectContinuous_ForGamepad; // 0x0320 (size: 0x8)
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_BuildObjectContinuous_ForMouse; // 0x0328 (size: 0x8)
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_Cancel; // 0x0330 (size: 0x8)
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_End;    // 0x0338 (size: 0x8)
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_Rotate; // 0x0340 (size: 0x8)
    class UWBP_IngameConstruction_Num_C* WBP_IngameConstruction_Num_0;                // 0x0348 (size: 0x8)
    class UWBP_IngameConstruction_Num_C* WBP_IngameConstruction_Num_1;                // 0x0350 (size: 0x8)
    class UWBP_IngameConstruction_Num_C* WBP_IngameConstruction_Num_2;                // 0x0358 (size: 0x8)
    class UWBP_IngameConstruction_Num_C* WBP_IngameConstruction_Num_3;                // 0x0360 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;                            // 0x0368 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon_1;                          // 0x0370 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon_2;                          // 0x0378 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon_3;                          // 0x0380 (size: 0x8)
    TArray<class UWBP_IngameConstruction_Num_C*> ItemNums;                            // 0x0388 (size: 0x10)
    FDataTableRowHandle keyGuideMsgHandle_Reserve;                                    // 0x0398 (size: 0x10)
    FDataTableRowHandle keyGuideMsgHandle_ReserveContinue;                            // 0x03A8 (size: 0x10)
    FDataTableRowHandle keyGuideMsgHandle_Cancel;                                     // 0x03B8 (size: 0x10)
    FDataTableRowHandle keyGuideMsgHandle_Close;                                      // 0x03C8 (size: 0x10)
    TArray<class UWBP_PalCommonItemIcon_C*> ItemIconArray;                            // 0x03D8 (size: 0x10)
    FDataTableRowHandle keyGuideMsgHandle_RotateRight;                                // 0x03E8 (size: 0x10)
    FDataTableRowHandle keyGuideMsgHandle_RotateLeft;                                 // 0x03F8 (size: 0x10)
    class UPalUIBuildingModel* CachedModel;                                           // 0x0408 (size: 0x8)

    void GetBuildingWarningType(class UPalUIBuildingModel* Model, EPalBuildingNumWarningType& NewParam);
    void UpdateBuildingLimit(class UPalUIBuildingModel* Model);
    void UpdateDisplayContent(class UPalUIBuildingModel* Model);
    void SetVisibilityOutSideBaseCampWarning(ESlateVisibility NewVisibility);
    void SetupKeyGuide(class UPalUIBuildingModel* Model);
    void SetEnableWarning(bool IsEnable);
    void SetMaterial(int32 Index, FName StaticItemId, int32 ItemCount);
    void Setup(FPalBuildObjectData inBuildObjectData);
    void SetWarningText(FText InText);
    void ResetAllUI(class UPalUIBuildingModel* Model);
    void SetBuildObjectName(FText InName);
    void Construct();
    void OnInitialized();
    void OnChangedInputMethod(ECommonInputType bNewInputType);
    void ExecuteUbergraph_WBP_IngameConstruction(int32 EntryPoint);
}; // Size: 0x410

#endif
