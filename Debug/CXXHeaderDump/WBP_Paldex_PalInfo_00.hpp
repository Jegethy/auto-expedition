#ifndef UE4SS_SDK_WBP_Paldex_PalInfo_00_HPP
#define UE4SS_SDK_WBP_Paldex_PalInfo_00_HPP

class UWBP_Paldex_PalInfo_00_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UCanvasPanel* Canvas_PartnerSkill;                                          // 0x0280 (size: 0x8)
    class UImage* FoodAmountBase;                                                     // 0x0288 (size: 0x8)
    class UHorizontalBox* HorizontalBox_CaptureNum;                                   // 0x0290 (size: 0x8)
    class UOverlay* Overlay_NoDropItem;                                               // 0x0298 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_PartnerSkillDesc;                          // 0x02A0 (size: 0x8)
    class UScrollBox* ScrollBox;                                                      // 0x02A8 (size: 0x8)
    class UCanvasPanel* SkillInfo;                                                    // 0x02B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_CaptureNumValue;                                   // 0x02B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PartnerSkillName;                                  // 0x02C0 (size: 0x8)
    class UUniformGridPanel* UniformGrid_Suitability;                                 // 0x02C8 (size: 0x8)
    class UWBP_MainMenu_Pal_FoodAmount_C* WBP_MainMenu_Pal_FoodAmount;                // 0x02D0 (size: 0x8)
    class UWBP_Paldex_DropItem_C* WBP_Paldex_DropItem;                                // 0x02D8 (size: 0x8)
    class UWBP_Paldex_DropItem_C* WBP_Paldex_DropItem_1;                              // 0x02E0 (size: 0x8)
    class UWBP_Paldex_DropItem_C* WBP_Paldex_DropItem_2;                              // 0x02E8 (size: 0x8)
    class UWBP_Paldex_DropItem_C* WBP_Paldex_DropItem_3;                              // 0x02F0 (size: 0x8)
    class UWBP_Paldex_DropItem_C* WBP_Paldex_DropItem_4;                              // 0x02F8 (size: 0x8)
    class UWBP_Paldex_Task_C* WBP_Paldex_Task;                                        // 0x0300 (size: 0x8)
    TArray<class UWBP_Paldex_DropItem_C*> DropItemWidgetArray;                        // 0x0308 (size: 0x10)
    double New Offset;                                                                // 0x0318 (size: 0x8)

    void ChangePalInfoScrollOffset(double Offset);
    void ShouldDisplay(FName CharacterID, bool& bDisplay);
    void SetupCaptureBonusInfo(FName CharacterID);
    void HideDropItems();
    void Setup_Captured(FPalUIPaldex_DisplayInfo DisplayInfo);
    void Setup_Encounted(FPalUIPaldex_DisplayInfo DisplayInfo);
    void Setup_NotEncounted(FPalUIPaldex_DisplayInfo DisplayInfo);
    void Setup(FPalUIPaldex_DisplayInfo DisplayInfo);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void Destruct();
    void ExecuteUbergraph_WBP_Paldex_PalInfo_00(int32 EntryPoint);
}; // Size: 0x320

#endif
