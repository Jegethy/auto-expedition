#ifndef UE4SS_SDK_WBP_Arena_PalSelect_HPP
#define UE4SS_SDK_WBP_Arena_PalSelect_HPP

class UWBP_Arena_PalSelect_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWidgetAnimation* Anm_Out;                                                  // 0x0480 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0488 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_RivalName;                              // 0x0490 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_SelfName;                               // 0x0498 (size: 0x8)
    class UCanvasPanel* Canvas_Rival_Selected;                                        // 0x04A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_TimerNum;                                          // 0x04A8 (size: 0x8)
    class UWBP_Arena_PalDetail_C* WBP_Arena_PalDetail;                                // 0x04B0 (size: 0x8)
    class UWBP_Arena_PalSelect_PalSlot_C* WBP_Arena_PalSelect_PalSlot_Main;           // 0x04B8 (size: 0x8)
    class UWBP_Arena_PalSelect_PalSlot_C* WBP_Arena_PalSelect_PalSlot_Main_R;         // 0x04C0 (size: 0x8)
    class UWBP_Arena_PalSelect_PalSlot_C* WBP_Arena_PalSelect_PalSlot_Sub_0;          // 0x04C8 (size: 0x8)
    class UWBP_Arena_PalSelect_PalSlot_C* WBP_Arena_PalSelect_PalSlot_Sub_1;          // 0x04D0 (size: 0x8)
    class UWBP_Arena_PalSelect_PalSlot_C* WBP_Arena_PalSelect_PalSlot_Sub_0R;         // 0x04D8 (size: 0x8)
    class UWBP_Arena_PalSelect_PalSlot_C* WBP_Arena_PalSelect_PalSlot_Sub_1R;         // 0x04E0 (size: 0x8)
    class UWBP_Arena_PalSelect_Ready_C* WBP_Arena_PalSelect_Ready;                    // 0x04E8 (size: 0x8)
    class UWBP_Arena_PalSelect_Ready_C* WBP_Arena_PalSelect_Ready_1;                  // 0x04F0 (size: 0x8)
    class UWBP_CommonButton_2_C* WBP_CommonButton_Ready;                              // 0x04F8 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList;                                      // 0x0500 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_1;                                    // 0x0508 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_2;                                    // 0x0510 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_3;                                    // 0x0518 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_4;                                    // 0x0520 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_5;                                    // 0x0528 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_6;                                    // 0x0530 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_7;                                    // 0x0538 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_8;                                    // 0x0540 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_9;                                    // 0x0548 (size: 0x8)
    class UPalHUDDispatchParameter_ArenaPalSelect* As Pal HUDDispatch Parameter Arena Pal Select; // 0x0550 (size: 0x8)
    FWBP_Arena_PalSelect_COnPartySet OnPartySet;                                      // 0x0558 (size: 0x10)
    void OnPartySet(FPalArenaPlayerParty NewParty);
    TArray<class UWBP_Menu_PalList_C*> SelfPalList;                                   // 0x0568 (size: 0x10)
    TArray<class UWBP_Menu_PalList_C*> RivalPalList;                                  // 0x0578 (size: 0x10)
    class UPalArenaSequencer* Arena Sequencer;                                        // 0x0588 (size: 0x8)
    bool EnableDetailPanel;                                                           // 0x0590 (size: 0x1)
    FPalArenaPlayerParty CurrentParty;                                                // 0x0598 (size: 0x20)
    class UPalIndividualCharacterHandle* CurrentHoverHandle;                          // 0x05B8 (size: 0x8)
    FGuid ConfirmDialog;                                                              // 0x05C0 (size: 0x10)
    TArray<EPalTribeID> CurrentSelectPalTribes;                                       // 0x05D0 (size: 0x10)
    bool IsSpectator;                                                                 // 0x05E0 (size: 0x1)

    void Update Rival Party Slot(FPalArenaPlayerParty Party);
    void Cancel Spect();
    void IsRestrictedSelect(FPalArenaRule Rule, class UPalIndividualCharacterParameter* individualParam, bool& IsRestricted);
    void CancelSoloMatch();
    void ShowArenaRule();
    void ToggleDetailVisibility();
    class UWidget* BP_GetDesiredFocusTarget();
    void On Timer Updated(double Time);
    void Update Party Count UI(FPalArenaPlayerParty CurrentParty, bool IsRival);
    void Update Local Party Slot();
    void On Party Updated(EPalArenaPlayerIndex PlayerIndex, FPalArenaPlayerParty Party);
    void Toggle Select Party(class UPalIndividualCharacterHandle* CharacterHandle);
    void Display Detail(class UPalIndividualCharacterHandle* CharacterHandle);
    void CloseDetail();
    void SetupPalList(const TArray<class UPalIndividualCharacterParameter*>& PalList, bool IsRival);
    void SetupCharacterName();
    void Setup(bool IsSoloMode);
    void Finished_6CCB6F4C49947D6ED3DAE8939CE96337();
    void OnSetup();
    void BndEvt__WBP_Arena_PalSelect_WBP_CommonButton_2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnInitialized();
    void EmptyEvent();
    void ConfirmParty(bool Confirmed);
    void ClosePanel();
    void EmptyConfirm(bool IsConfirm);
    void AnmEvent_In();
    void OnUpdateSequence(class UPalArenaSequencer* Sequencer, EPalArenaSequenceType PrevType, EPalArenaSequenceType AfterType);
    void ExecuteUbergraph_WBP_Arena_PalSelect(int32 EntryPoint);
    void OnPartySet__DelegateSignature(FPalArenaPlayerParty NewParty);
}; // Size: 0x5E1

#endif
