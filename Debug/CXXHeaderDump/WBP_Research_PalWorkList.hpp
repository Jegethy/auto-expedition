#ifndef UE4SS_SDK_WBP_Research_PalWorkList_HPP
#define UE4SS_SDK_WBP_Research_PalWorkList_HPP

class UWBP_Research_PalWorkList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Unselect;                                             // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Selected;                                             // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0290 (size: 0x8)
    class UCanvasPanel* Canvas_Progress;                                              // 0x0298 (size: 0x8)
    class USizeBox* SizeBox_Progress;                                                 // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LevelNum_1;                                        // 0x02A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LevelNum_2;                                        // 0x02B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalWorkName;                                       // 0x02B8 (size: 0x8)
    class UWBP_IconPalWork_C* WBP_IconPalWork;                                        // 0x02C0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02C8 (size: 0x8)
    FWBP_Research_PalWorkList_COnResearchEntryClicked OnResearchEntryClicked;         // 0x02D0 (size: 0x10)
    void OnResearchEntryClicked(EPalWorkSuitability WorkType);
    EPalWorkSuitability Work Type;                                                    // 0x02E0 (size: 0x1)
    FWBP_Research_PalWorkList_COnResearchEntryHovered OnResearchEntryHovered;         // 0x02E8 (size: 0x10)
    void OnResearchEntryHovered(EPalWorkSuitability WorkType);
    FWBP_Research_PalWorkList_COnResearchEntryUnhovered OnResearchEntryUnhovered;     // 0x02F8 (size: 0x10)
    void OnResearchEntryUnhovered(EPalWorkSuitability WorkType);

    void AnmEvent_Focus();
    void AnmEvent_Normal();
    void AnmEvent_Selected();
    void AnmEvent_Unselected();
    void BndEvt__WBP_Research_PalWorkList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Research_PalWorkList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Setup(EPalWorkSuitability WorkType, int32 Level, int32 Total, bool Progressing);
    void BndEvt__WBP_Research_PalWorkList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Construct();
    void ExecuteUbergraph_WBP_Research_PalWorkList(int32 EntryPoint);
    void OnResearchEntryUnhovered__DelegateSignature(EPalWorkSuitability WorkType);
    void OnResearchEntryHovered__DelegateSignature(EPalWorkSuitability WorkType);
    void OnResearchEntryClicked__DelegateSignature(EPalWorkSuitability WorkType);
}; // Size: 0x308

#endif
