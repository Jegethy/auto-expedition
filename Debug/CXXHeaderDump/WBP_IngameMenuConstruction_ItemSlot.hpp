#ifndef UE4SS_SDK_WBP_IngameMenuConstruction_ItemSlot_HPP
#define UE4SS_SDK_WBP_IngameMenuConstruction_ItemSlot_HPP

class UWBP_IngameMenuConstruction_ItemSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_OnToOff_WithoutText;                                  // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_LtoS;                                                 // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_OnToOff;                                              // 0x0290 (size: 0x8)
    class UCanvasPanel* CanvasPanel_2;                                                // 0x0298 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Lock;                                             // 0x02A0 (size: 0x8)
    class UImage* Icon;                                                               // 0x02A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_BuildObjectName;                                   // 0x02B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Label;                                             // 0x02B8 (size: 0x8)
    class UWBP_MainMenu_NewDot_C* WBP_MainMenu_NewDot;                                // 0x02C0 (size: 0x8)
    class UWBP_PalCommonNewMark_0_C* WBP_PalCommonNewMark_0;                          // 0x02C8 (size: 0x8)
    FPalBuildObjectData BuildObjectData;                                              // 0x02D0 (size: 0x98)
    FDataTableRowHandle NotEnoughMaterialMsgID;                                       // 0x0368 (size: 0x10)
    FDataTableRowHandle NoBlueprintlMsgID;                                            // 0x0378 (size: 0x10)

    void SetNewIconVisibility(bool Visable);
    FVector2D GetCanvasSize();
    void Setup(FPalBuildObjectData BuildObjectData);
    void AnmEvent_CannotBuild_NotEnoughMaterials();
    void AnmEvent_CannotBuild_NoBlueprint();
    void AnmEvent_Small();
    void AnmEvent_CannotBuild_NoText();
    void Construct();
    void DisableTextForDeck();
    void ExecuteUbergraph_WBP_IngameMenuConstruction_ItemSlot(int32 EntryPoint);
}; // Size: 0x388

#endif
