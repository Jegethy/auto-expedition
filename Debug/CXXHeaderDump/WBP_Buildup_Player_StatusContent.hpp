#ifndef UE4SS_SDK_WBP_Buildup_Player_StatusContent_HPP
#define UE4SS_SDK_WBP_Buildup_Player_StatusContent_HPP

class UWBP_Buildup_Player_StatusContent_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_RankUp;                                               // 0x0288 (size: 0x8)
    class UCanvasPanel* Canvas_Button_Minus;                                          // 0x0290 (size: 0x8)
    class UCanvasPanel* Canvas_Button_Plus;                                           // 0x0298 (size: 0x8)
    class UCanvasPanel* Canvas_RequireNum;                                            // 0x02A0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x02A8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Gauge;                                        // 0x02B0 (size: 0x8)
    class UImage* IconItem;                                                           // 0x02B8 (size: 0x8)
    class UImage* IconStatus;                                                         // 0x02C0 (size: 0x8)
    class UOverlay* Overlay_Frame;                                                    // 0x02C8 (size: 0x8)
    class UImage* StatusArrow;                                                        // 0x02D0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_BuildupStoneNum;                                   // 0x02D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Max;                                               // 0x02E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StatusNeme;                                        // 0x02E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StatusNumAfter;                                    // 0x02F0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StatusNumBefore;                                   // 0x02F8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Fill;                     // 0x0300 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Minus;                    // 0x0308 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Plus;                     // 0x0310 (size: 0x8)
    FWBP_Buildup_Player_StatusContent_COnHoveredButton_General OnHoveredButton_General; // 0x0318 (size: 0x10)
    void OnHoveredButton_General(class UWBP_Buildup_Player_StatusContent_C* Widget);
    FWBP_Buildup_Player_StatusContent_COnUnhovered_General OnUnhovered_General;       // 0x0328 (size: 0x10)
    void OnUnhovered_General(class UWBP_Buildup_Player_StatusContent_C* Widget);
    EPalRelicType MyRelicType;                                                        // 0x0338 (size: 0x1)
    TArray<class UWBP_Buildup_Gauge_C*> GaugeBarWidgets;                              // 0x0340 (size: 0x10)
    int32 CurrentRank;                                                                // 0x0350 (size: 0x4)
    int32 CurrentSimulateAddRank;                                                     // 0x0354 (size: 0x4)
    FWBP_Buildup_Player_StatusContent_COnSimulateChanged OnSimulateChanged;           // 0x0358 (size: 0x10)
    void OnSimulateChanged(EPalRelicType RelicType, int32 OriginalRank, int32 CurrentSimulationRank);
    bool bIsMaxRankFlag;                                                              // 0x0368 (size: 0x1)
    class UAkAudioEvent* ClickSound;                                                  // 0x0370 (size: 0x8)
    class UAkAudioEvent* ErrorSound;                                                  // 0x0378 (size: 0x8)
    bool AcceptInput;                                                                 // 0x0380 (size: 0x1)

    void SetAcceptInput(bool NewAcceptInput);
    void CanSimulateRankupToNext(bool& bCanRankup);
    void UpdateSimulationButton();
    void BuildEffectValueText(int32 Rank, FText& Text);
    void IsMaxRank(bool& bIsMaxRank);
    void GetSImulatedRank(int32& ToRank);
    void IsSimulating(bool& bIsSimulating);
    void GetBindedRelicType(EPalRelicType& RelicType);
    void UpdateSimulate();
    void DisplayCurrentRank();
    void SetupRankGauge();
    void ResetSimulation();
    void SimulationMinus();
    void SimlationPlus();
    void SetRelicType(EPalRelicType RelicType);
    void AnmEvent_Rankup();
    void AnmEvent_Focus();
    void AnmEvent_Normal();
    void BndEvt__WBP_Buildup_Player_StatusContent_WBP_PalInvisibleButton_Fill_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Buildup_Player_StatusContent_WBP_PalInvisibleButton_Fill_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Buildup_Player_StatusContent_WBP_PalInvisibleButton_Minus_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Buildup_Player_StatusContent_WBP_PalInvisibleButton_Plus_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Buildup_Player_StatusContent_WBP_PalInvisibleButton_Minus_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Buildup_Player_StatusContent_WBP_PalInvisibleButton_Minus_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Buildup_Player_StatusContent_WBP_PalInvisibleButton_Plus_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Buildup_Player_StatusContent_WBP_PalInvisibleButton_Plus_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Buildup_Player_StatusContent(int32 EntryPoint);
    void OnSimulateChanged__DelegateSignature(EPalRelicType RelicType, int32 OriginalRank, int32 CurrentSimulationRank);
    void OnUnhovered_General__DelegateSignature(class UWBP_Buildup_Player_StatusContent_C* Widget);
    void OnHoveredButton_General__DelegateSignature(class UWBP_Buildup_Player_StatusContent_C* Widget);
}; // Size: 0x381

#endif
