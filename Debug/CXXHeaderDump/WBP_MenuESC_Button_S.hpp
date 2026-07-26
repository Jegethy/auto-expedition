#ifndef UE4SS_SDK_WBP_MenuESC_Button_S_HPP
#define UE4SS_SDK_WBP_MenuESC_Button_S_HPP

class UWBP_MenuESC_Button_S_C : public UWBP_MenuESC_Button_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Anm_Focus;                                                // 0x02E8 (size: 0x8)
    class UWidgetAnimation* Anm_Normal;                                               // 0x02F0 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x02F8 (size: 0x8)
    class UNamedSlot* NamedSlot_101;                                                  // 0x0300 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Main;                                              // 0x0308 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0310 (size: 0x8)

    void AnmEvent_Normal();
    void AnmEvent_Focus();
    void AnmEvent_Reset();
    void Construct();
    void BndEvt__WBP_MenuESC_Button_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MenuESC_Button_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MenuESC_Button_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void ExecuteUbergraph_WBP_MenuESC_Button_S(int32 EntryPoint);
}; // Size: 0x318

#endif
