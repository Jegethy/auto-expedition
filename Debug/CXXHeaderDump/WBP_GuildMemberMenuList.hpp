#ifndef UE4SS_SDK_WBP_GuildMemberMenuList_HPP
#define UE4SS_SDK_WBP_GuildMemberMenuList_HPP

class UWBP_GuildMemberMenuList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_C_72;                           // 0x0288 (size: 0x8)
    class UImage* FocusBase;                                                          // 0x0290 (size: 0x8)
    class UImage* Frame;                                                              // 0x0298 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02A0 (size: 0x8)
    FWBP_GuildMemberMenuList_COnClicked OnClicked;                                    // 0x02A8 (size: 0x10)
    void OnClicked(class UWBP_GuildMemberMenuList_C* Button);

    void GetBindedTextString(FString& OutString);
    void SetText(FText newText);
    void BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_GuildMemberMenuList(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
}; // Size: 0x2B8

#endif
