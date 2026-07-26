#ifndef UE4SS_SDK_WBP_OptionSettings_HPP
#define UE4SS_SDK_WBP_OptionSettings_HPP

class UWBP_OptionSettings_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWidgetAnimation* Anm_List_OutToIn;                                         // 0x0480 (size: 0x8)
    class UWidgetAnimation* Anm_CloseToOpen;                                          // 0x0488 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Default;                                // 0x0490 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Settings;                                         // 0x0498 (size: 0x8)
    class UWBP_OptionSettings_MenuButton_C* WBP_OptionSettings_MenuButton_Game;       // 0x04A0 (size: 0x8)
    class UWBP_OptionSettings_MenuButton_C* WBP_OptionSettings_MenuButton_Graphic;    // 0x04A8 (size: 0x8)
    class UWBP_OptionSettings_MenuButton_C* WBP_OptionSettings_MenuButton_Key;        // 0x04B0 (size: 0x8)
    class UWBP_OptionSettings_MenuButton_C* WBP_OptionSettings_MenuButton_Other;      // 0x04B8 (size: 0x8)
    class UWBP_OptionSettings_MenuButton_S_C* WBP_OptionSettings_MenuButton_S_EULA;   // 0x04C0 (size: 0x8)
    class UWBP_OptionSettings_MenuButton_S_C* WBP_OptionSettings_MenuButton_S_Form;   // 0x04C8 (size: 0x8)
    class UWBP_OptionSettings_MenuButton_S_C* WBP_OptionSettings_MenuButton_S_Mod;    // 0x04D0 (size: 0x8)
    class UWBP_OptionSettings_MenuButton_C* WBP_OptionSettings_MenuButton_Sound;      // 0x04D8 (size: 0x8)
    class UWBP_OptionSettings_Tab_C* WBP_OptionSettings_Tab;                          // 0x04E0 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList;                        // 0x04E8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_Back;                           // 0x04F0 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_Default;                        // 0x04F8 (size: 0x8)
    bool Switching;                                                                   // 0x0500 (size: 0x1)
    FName DefaultActionName;                                                          // 0x0504 (size: 0x8)
    FName PreTabActionName;                                                           // 0x050C (size: 0x8)
    FName NextTabActionName;                                                          // 0x0514 (size: 0x8)
    class UWBP_Graphic_Settings_C* GraphicSettings;                                   // 0x0520 (size: 0x8)
    class UWBP_Sound_Settings_C* AudioSettings;                                       // 0x0528 (size: 0x8)
    class UWBP_Key_Settings_C* KeySettings;                                           // 0x0530 (size: 0x8)
    class UWBP_Control_Settings_C* GameSettings;                                      // 0x0538 (size: 0x8)
    class UWBP_Other_Settings_C* OtherSettings;                                       // 0x0540 (size: 0x8)
    FDataTableRowHandle SetDefaultMsgID;                                              // 0x0548 (size: 0x10)
    FDataTableRowHandle CloseMsgID;                                                   // 0x0558 (size: 0x10)
    TArray<FDataTableRowHandle> ControlTabMsgIDs;                                     // 0x0568 (size: 0x10)
    FPalUIActionBindData BackActionBinding;                                           // 0x0578 (size: 0x4)
    FPalUIActionBindData DefaultActionBinding;                                        // 0x057C (size: 0x4)
    FPalUIActionBindData PreTabActionBinding;                                         // 0x0580 (size: 0x4)
    FPalUIActionBindData NextTabActionBinding;                                        // 0x0584 (size: 0x4)
    class UWidget* LastFocus;                                                         // 0x0588 (size: 0x8)
    FDataTableRowHandle ConflictMsgId;                                                // 0x0590 (size: 0x10)
    FDataTableRowHandle ConflictMsgIdPS5;                                             // 0x05A0 (size: 0x10)

    void ResetScroll();
    void TryRedirectToDiscordLink();
    void IsOpenFromTitle(bool& bFromTitle);
    void OnClosedModSettings(class UPalHUDDispatchParameterBase* Param);
    void Set Tab Action(bool Bind);
    class UWidget* BP_GetDesiredFocusTarget();
    void Finished_2536FBE94511E5E94401869A3ECF77EC();
    void Finished_412D6FCC467DE29951851EB38295E8FE();
    void Finished_EE961C0249D44ADFCC582DBCE988D50D();
    void Finished_3DF735A247AFD17B1935A8AD119ED44F();
    void Finished_657FDFA04D1EEBEC31C7FAA8DADA417B();
    void Finished_A36E9B0F4ACC421F93D76BA170A1BA11();
    void Finished_05846F744E202D6A15C4A8ABCE740327();
    void Finished_24865DB74E2CDF7AF1AD4D9DBEE2B394();
    void Finished_2034482C493806B667AA82AE6C6A732D();
    void Finished_47188B3742112F703AC219B6DFD31698();
    void Finished_E609EC2649DD5C39B8991FA76989D962();
    void ClosePanel();
    void Construct();
    void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Graphic_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BackAction();
    void SetDefaultAction();
    void SetDefault(bool Confirmed);
    void ApplySettings(bool Confirmed);
    void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Sound_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Control_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void PreTab();
    void NextTab();
    void SwitchTabTo(int32 Index);
    void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Other_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_Key_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void EmptyEvent(bool bResult);
    void OpenPanel();
    void OnSetup();
    void Destruct();
    void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_S_Mod_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
    void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_S_EULA_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
    void BndEvt__WBP_OptionSettings_WBP_OptionSettings_MenuButton_S_Form_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_OptionSettings(int32 EntryPoint);
}; // Size: 0x5B0

#endif
