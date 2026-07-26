#ifndef UE4SS_SDK_WBP_Altar_SelectStage_Button_HPP
#define UE4SS_SDK_WBP_Altar_SelectStage_Button_HPP

class UWBP_Altar_SelectStage_Button_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Selected;                                             // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Default;                                              // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0290 (size: 0x8)
    class UImage* Frame_Focus_Flare;                                                  // 0x0298 (size: 0x8)
    class UImage* Image;                                                              // 0x02A0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_61;                                                           // 0x02C0 (size: 0x8)
    class UImage* Image_Button_Base;                                                  // 0x02C8 (size: 0x8)
    class UImage* Image_Button_Base_Selected;                                         // 0x02D0 (size: 0x8)
    class UImage* Image_Button_Base_Selected_1;                                       // 0x02D8 (size: 0x8)
    class UImage* Image_Button_Dot;                                                   // 0x02E0 (size: 0x8)
    class UImage* Image_Button_Dot_1;                                                 // 0x02E8 (size: 0x8)
    class UImage* Image_Button_Dot_2;                                                 // 0x02F0 (size: 0x8)
    class UImage* Image_Button_Dot_3;                                                 // 0x02F8 (size: 0x8)
    class UImage* Image_Button_Frame;                                                 // 0x0300 (size: 0x8)
    class UImage* Image_Button_Frame_1;                                               // 0x0308 (size: 0x8)
    class UImage* Image_Pic;                                                          // 0x0310 (size: 0x8)
    class UOverlay* Overlay_Focus;                                                    // 0x0318 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_StageInfo;                                 // 0x0320 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StageName;                                         // 0x0328 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0330 (size: 0x8)
    FWBP_Altar_SelectStage_Button_COnClickedButton OnClickedButton;                   // 0x0338 (size: 0x10)
    void OnClickedButton(class UWBP_Altar_SelectStage_Button_C* SelfSlot);
    bool Selected;                                                                    // 0x0348 (size: 0x1)
    EPalRaidBossBattleType BattleType;                                                // 0x0349 (size: 0x1)

    void Setup();
    void SetupVisual(EPalRaidBossBattleType InBattleType);
    void SetUnselect(bool bForce);
    void SetSelected();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_Altar_SelectStage_Button_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Altar_SelectStage_Button_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Altar_SelectStage_Button_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Altar_SelectStage_Button(int32 EntryPoint);
    void OnClickedButton__DelegateSignature(class UWBP_Altar_SelectStage_Button_C* SelfSlot);
}; // Size: 0x34A

#endif
