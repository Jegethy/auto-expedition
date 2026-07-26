#ifndef UE4SS_SDK_WBP_Arena_RuleSetting_PalListButton_HPP
#define UE4SS_SDK_WBP_Arena_RuleSetting_PalListButton_HPP

class UWBP_Arena_RuleSetting_PalListButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_AllowToBan;                                           // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0288 (size: 0x8)
    class UCanvasPanel* CanvasPanel_PalIcon;                                          // 0x0290 (size: 0x8)
    class UImage* Image_Unknown;                                                      // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalName;                                           // 0x02A0 (size: 0x8)
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;                  // 0x02A8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02B0 (size: 0x8)
    FWBP_Arena_RuleSetting_PalListButton_COnButtonClicked OnButtonClicked;            // 0x02B8 (size: 0x10)
    void OnButtonClicked(FName CharacterID);
    FName Character Id;                                                               // 0x02C8 (size: 0x8)
    bool CurrentHidding;                                                              // 0x02D0 (size: 0x1)

    void SetHide(bool ShouldHide);
    void Setup(FName CharacterID);
    void AnmEvent_Focus();
    void AnmEvent_NoFocus();
    void AnmEvent_Enable();
    void AnmEvent_Ban();
    void Construct();
    void BndEvt__WBP_Arena_RuleSetting_PalListButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_RuleSetting_PalListButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_RuleSetting_PalListButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Arena_RuleSetting_PalListButton(int32 EntryPoint);
    void OnButtonClicked__DelegateSignature(FName CharacterID);
}; // Size: 0x2D1

#endif
