#ifndef UE4SS_SDK_WBP_Arena_TopMenuButton_HPP
#define UE4SS_SDK_WBP_Arena_TopMenuButton_HPP

class UWBP_Arena_TopMenuButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_FocusLoop;                                            // 0x0288 (size: 0x8)
    class UCanvasPanel* Canvas_Lock;                                                  // 0x0290 (size: 0x8)
    class UImage* Image_Add;                                                          // 0x0298 (size: 0x8)
    class UImage* Image_Add_1;                                                        // 0x02A0 (size: 0x8)
    class UImage* Image_Button;                                                       // 0x02A8 (size: 0x8)
    class UImage* Image_Button_Add;                                                   // 0x02B0 (size: 0x8)
    class UPalRetainerBox* PalRetainerBox_117;                                        // 0x02B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ButtonName;                                        // 0x02C0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02C8 (size: 0x8)
    FWBP_Arena_TopMenuButton_COnArenaButtonClicked OnArenaButtonClicked;              // 0x02D0 (size: 0x10)
    void OnArenaButtonClicked();
    bool isFocused;                                                                   // 0x02E0 (size: 0x1)
    FWBP_Arena_TopMenuButton_COnArenaButtonHovered OnArenaButtonHovered;              // 0x02E8 (size: 0x10)
    void OnArenaButtonHovered();
    FWBP_Arena_TopMenuButton_COnArenaButtonUnhovered OnArenaButtonUnhovered;          // 0x02F8 (size: 0x10)
    void OnArenaButtonUnhovered();
    double AnmTime;                                                                   // 0x0308 (size: 0x8)
    bool Is Lock;                                                                     // 0x0310 (size: 0x1)

    void Setup(int32 Type);
    void SetLock(bool IsLock);
    void Finished_F552AADE467C2B4C78B4C5AEAA55800C();
    void AnmEvent_Focus();
    void AnmEvent_Normal();
    void AnmEvent_NormalImmediate();
    void Construct();
    void BndEvt__WBP_Arena_TopMenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_TopMenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_TopMenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Arena_TopMenuButton(int32 EntryPoint);
    void OnArenaButtonUnhovered__DelegateSignature();
    void OnArenaButtonHovered__DelegateSignature();
    void OnArenaButtonClicked__DelegateSignature();
}; // Size: 0x311

#endif
