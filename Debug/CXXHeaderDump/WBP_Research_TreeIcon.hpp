#ifndef UE4SS_SDK_WBP_Research_TreeIcon_HPP
#define UE4SS_SDK_WBP_Research_TreeIcon_HPP

class UWBP_Research_TreeIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToSelected;                                     // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Progressing;                                          // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToDisable;                                      // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_Lock;                                                 // 0x0298 (size: 0x8)
    class UWidgetAnimation* Anm_Unlock;                                               // 0x02A0 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x02A8 (size: 0x8)
    class UCanvasPanel* Canvas_Icon_L;                                                // 0x02B0 (size: 0x8)
    class UCanvasPanel* Canvas_Icon_S;                                                // 0x02B8 (size: 0x8)
    class UImage* Image_Progress_Rotate_L;                                            // 0x02C0 (size: 0x8)
    class UImage* Image_Progress_Rotate_S;                                            // 0x02C8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02D0 (size: 0x8)
    class UWBP_ResearchEffectIcon_C* WBP_ResearchEffectIcon;                          // 0x02D8 (size: 0x8)
    FName Research Id;                                                                // 0x02E0 (size: 0x8)
    FWBP_Research_TreeIcon_COnResearchSelect OnResearchSelect;                        // 0x02E8 (size: 0x10)
    void OnResearchSelect(FName ResearchId);
    FWBP_Research_TreeIcon_COnResearchHovered OnResearchHovered;                      // 0x02F8 (size: 0x10)
    void OnResearchHovered(FName ResearchId);
    FWBP_Research_TreeIcon_COnResearchUnhovered OnResearchUnhovered;                  // 0x0308 (size: 0x10)
    void OnResearchUnhovered();
    TEnumAsByte<TreeNodeDisplayType::Type> Display Type;                              // 0x0318 (size: 0x1)
    bool Is Pined;                                                                    // 0x0319 (size: 0x1)

    void AnmEvent_Focus();
    void AnmEvent_NoFocus();
    void AnmEvent_Lock();
    void AnmEvent_Unlock();
    void AnmEvent_DIsable();
    void AnmEvent_Progressing();
    void Setup(FPalUIGuildLabResearchInfo ResearchInfo);
    void BndEvt__WBP_Research_TreeIcon_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Research_TreeIcon_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Research_TreeIcon_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Construct();
    void SetDisplayType(TEnumAsByte<TreeNodeDisplayType::Type> DisplayType);
    void SwitchPin(bool IsPined);
    void ExecuteUbergraph_WBP_Research_TreeIcon(int32 EntryPoint);
    void OnResearchUnhovered__DelegateSignature();
    void OnResearchHovered__DelegateSignature(FName ResearchId);
    void OnResearchSelect__DelegateSignature(FName ResearchId);
}; // Size: 0x31A

#endif
