#ifndef UE4SS_SDK_WBP_IngameMenu_Construction_Info_HPP
#define UE4SS_SDK_WBP_IngameMenu_Construction_Info_HPP

class UWBP_IngameMenu_Construction_Info_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UCanvasPanel* Canvas_PalWork;                                               // 0x0280 (size: 0x8)
    class UHorizontalBox* Horizontal_KeyGuide;                                        // 0x0288 (size: 0x8)
    class UHorizontalBox* HorizontalBox_WorkSuitabilityIcon;                          // 0x0290 (size: 0x8)
    class UImage* Image;                                                              // 0x0298 (size: 0x8)
    class UImage* Image_56;                                                           // 0x02A0 (size: 0x8)
    class UImage* Image_CautionBase;                                                  // 0x02A8 (size: 0x8)
    class UImage* Image_CautionFrame;                                                 // 0x02B0 (size: 0x8)
    class UImage* Image_Energy;                                                       // 0x02B8 (size: 0x8)
    class UOverlay* Overlay_Caution;                                                  // 0x02C0 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_Desc;                                      // 0x02C8 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_Name;                                      // 0x02D0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Caution;                                           // 0x02D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Favo;                                              // 0x02E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ManMonth_Value;                                    // 0x02E8 (size: 0x8)
    class UVerticalBox* VerticalBox_AdditionalInfo;                                   // 0x02F0 (size: 0x8)
    class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem; // 0x02F8 (size: 0x8)
    class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem_1; // 0x0300 (size: 0x8)
    class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem_2; // 0x0308 (size: 0x8)
    class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem_3; // 0x0310 (size: 0x8)
    class UWBP_MainMenu_Pal_WorkIcon_C* WBP_MainMenu_Pal_WorkIcon;                    // 0x0318 (size: 0x8)
    class UWBP_MainMenu_Pal_WorkIcon_C* WBP_MainMenu_Pal_WorkIcon_1;                  // 0x0320 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x0328 (size: 0x8)
    FTimerHandle TimerHandle_DelayDisplay;                                            // 0x0330 (size: 0x8)
    FDataTableRowHandle NotEnoughMaterialMsgID;                                       // 0x0338 (size: 0x10)
    FPalBuildObjectData Build Object Data;                                            // 0x0348 (size: 0x98)
    FDataTableRowHandle NotHaveBlueprintMsgID;                                        // 0x03E0 (size: 0x10)
    FDataTableRowHandle AddFavoriteMsgID;                                             // 0x03F0 (size: 0x10)
    FDataTableRowHandle RemoveFavoriteMsgID;                                          // 0x0400 (size: 0x10)
    TArray<FName> IgnoreAssignDetailMapObjectId;                                      // 0x0410 (size: 0x10)

    void HideAdditionalText();
    void Set Simple Additional Text(FText Text);
    void UpdateDetail();
    void LockedByBlueprint(bool& bLocked);
    bool IsExistsMaterial(FPalBuildObjectData BuildObjectData);
    void OnTimer_Display();
    void Hide();
    void DelayDisplay(double DelayTime);
    void Get Useable Material Item Num(FName ItemId, int32& Num);
    void SetMaterialInfo(class UWBP_IngameMenuConstruction_InfoItem_C* Widget, FName ID, int32 NeedNum);
    void SetBuildObjectData(FPalBuildObjectData BuildObjectData);
    void Destruct();
    void ExecuteUbergraph_WBP_IngameMenu_Construction_Info(int32 EntryPoint);
}; // Size: 0x420

#endif
