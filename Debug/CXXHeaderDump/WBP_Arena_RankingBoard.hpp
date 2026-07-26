#ifndef UE4SS_SDK_WBP_Arena_RankingBoard_HPP
#define UE4SS_SDK_WBP_Arena_RankingBoard_HPP

class UWBP_Arena_RankingBoard_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0480 (size: 0x8)
    class UScrollBox* ScrollBox_0;                                                    // 0x0488 (size: 0x8)
    class UWBP_Arena_RankingBoard_List_C* WBP_Arena_RankingBoard_List_Player;         // 0x0490 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0498 (size: 0x8)
    int32 LastHoveredIndex;                                                           // 0x04A0 (size: 0x4)

    void OnLocalPlayerInfoReplicated(FPalArenaWorldRankingRecord RankingInfo);
    void OnListHovered(class UWidget* Widget);
    class UWidget* Do Custom Navigation_Left(EUINavigation Navigation);
    class UWidget* DoCustomNavigation_Right(EUINavigation Navigation);
    class UWidget* BP_GetDesiredFocusTarget();
    void Setup();
    void Finished_0CE00FEB491F3446724290B53E54505B();
    void BndEvt__WBP_Arena_RankingBoard_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void OnSetup();
    void Construct();
    void CloseAnm();
    void ExecuteUbergraph_WBP_Arena_RankingBoard(int32 EntryPoint);
}; // Size: 0x4A4

#endif
