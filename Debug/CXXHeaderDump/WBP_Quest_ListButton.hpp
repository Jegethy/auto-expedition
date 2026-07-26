#ifndef UE4SS_SDK_WBP_Quest_ListButton_HPP
#define UE4SS_SDK_WBP_Quest_ListButton_HPP

class UWBP_Quest_ListButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Completed;                                            // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Default;                                              // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0290 (size: 0x8)
    class UCanvasPanel* Canvas_Tracking;                                              // 0x0298 (size: 0x8)
    class UImage* Image;                                                              // 0x02A0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_4;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_5;                                                            // 0x02C8 (size: 0x8)
    class UImage* Image_125;                                                          // 0x02D0 (size: 0x8)
    class UImage* Image_Base_Focus;                                                   // 0x02D8 (size: 0x8)
    class UImage* Image_CompleteCheck;                                                // 0x02E0 (size: 0x8)
    class UImage* Image_Frame;                                                        // 0x02E8 (size: 0x8)
    class UImage* Image_Icon_GuildQuest;                                              // 0x02F0 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_QuestTitle;                                // 0x02F8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Distance;                                          // 0x0300 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0308 (size: 0x8)
    TSoftObjectPtr<UPalQuestData> SoftQuestData;                                      // 0x0310 (size: 0x30)
    FWBP_Quest_ListButton_COnClicked OnClicked;                                       // 0x0340 (size: 0x10)
    void OnClicked(class UWBP_Quest_ListButton_C* Widget);
    FWBP_Quest_ListButton_COnHovered OnHovered;                                       // 0x0350 (size: 0x10)
    void OnHovered(class UWBP_Quest_ListButton_C* Widget);
    FWBP_Quest_ListButton_COnUnhovered OnUnhovered;                                   // 0x0360 (size: 0x10)
    void OnUnhovered(class UWBP_Quest_ListButton_C* Widget);

    void SetVisibility_TrackingDetail(ESlateVisibility InVisibility);
    void GetQuestData(class UPalQuestData*& QuestData);
    void Setup(class UPalQuestData* QuestData);
    void AnmEvent_Hover();
    void AnmEvent_Unhover();
    void AnmEvent_Completed();
    void AnmEvent_Ordered();
    void Destruct();
    void BndEvt__WBP_Quest_ListButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Quest_ListButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Quest_ListButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Quest_ListButton(int32 EntryPoint);
    void OnUnhovered__DelegateSignature(class UWBP_Quest_ListButton_C* Widget);
    void OnHovered__DelegateSignature(class UWBP_Quest_ListButton_C* Widget);
    void OnClicked__DelegateSignature(class UWBP_Quest_ListButton_C* Widget);
}; // Size: 0x370

#endif
