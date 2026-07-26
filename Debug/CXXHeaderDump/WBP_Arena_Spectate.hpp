#ifndef UE4SS_SDK_WBP_Arena_Spectate_HPP
#define UE4SS_SDK_WBP_Arena_Spectate_HPP

class UWBP_Arena_Spectate_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UScrollBox* ScrollBox_0;                                                    // 0x0480 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0488 (size: 0x8)
    class UWBP_NoData_C* WBP_NoData;                                                  // 0x0490 (size: 0x8)
    class UWBP_PalKeyGuideIconAndText_C* WBP_PalKeyGuideIconAndText;                  // 0x0498 (size: 0x8)
    class UWBP_PalKeyGuideIconAndText_C* WBP_PalKeyGuideIconAndText_1;                // 0x04A0 (size: 0x8)
    class APalArenaEntrance* Entrance;                                                // 0x04A8 (size: 0x8)
    TArray<FPalArenaSpectateRoomInfo> CachedInfo;                                     // 0x04B0 (size: 0x10)
    FPalUIActionBindData RuleActionInput;                                             // 0x04C0 (size: 0x4)
    FPalUIActionBindData SpecActionInput;                                             // 0x04C4 (size: 0x4)
    int32 LastHoveredIndex;                                                           // 0x04C8 (size: 0x4)

    void ConfirmSpec(bool IsYes);
    void StartSpecAction();
    void ViewRuleAction();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnSpecButtonUnhovered(class UWBP_Arena_Spectate_List_C* Button);
    void OnSpecButtonHovered(class UWBP_Arena_Spectate_List_C* Button);
    void OnSpecButtonClicked(class UWBP_Arena_Spectate_List_C* Button);
    void CancelAction();
    void Setup();
    void BndEvt__WBP_Arena_Spectate_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void OnSetup();
    void OnInitialized();
    void ExecuteUbergraph_WBP_Arena_Spectate(int32 EntryPoint);
}; // Size: 0x4CC

#endif
