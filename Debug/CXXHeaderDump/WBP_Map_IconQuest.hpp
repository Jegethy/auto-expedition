#ifndef UE4SS_SDK_WBP_Map_IconQuest_HPP
#define UE4SS_SDK_WBP_Map_IconQuest_HPP

class UWBP_Map_IconQuest_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0538 (size: 0x8)
    class UCanvasPanel* Canvas_Inner;                                                 // 0x0540 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Range;                                            // 0x0548 (size: 0x8)
    class UImage* Icon;                                                               // 0x0550 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x0558 (size: 0x8)
    class UWBP_Map_TargetArea_C* WBP_TargetArea;                                      // 0x0560 (size: 0x8)
    float TargetAreaRange;                                                            // 0x0568 (size: 0x4)

    void SetupForceVisibility(bool& bChangedVisibility);
    void SetAreaRangeWidgetScale(double InScale);
    void Setup_Internal(class UPalLocationPoint* LocationPoint);
    void GetQuestId(FName& QuestId);
    void GetInvisibleButton(class UWidget*& Button);
    void BndEvt__WBP_Map_IconCustom_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconCustom_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconCustom_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void SetTexture(class UTexture2D* Texture);
    void OnInitialized();
    void OnMainVisibilityChanged(ESlateVisibility InVisibility);
    void ExecuteUbergraph_WBP_Map_IconQuest(int32 EntryPoint);
}; // Size: 0x56C

#endif
