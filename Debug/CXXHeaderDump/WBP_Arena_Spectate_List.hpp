#ifndef UE4SS_SDK_WBP_Arena_Spectate_List_HPP
#define UE4SS_SDK_WBP_Arena_Spectate_List_HPP

class UWBP_Arena_Spectate_List_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anim_NormalToFocus;                                       // 0x0280 (size: 0x8)
    class UImage* Image_RankIcon_P1;                                                  // 0x0288 (size: 0x8)
    class UImage* Image_RankIcon_P2;                                                  // 0x0290 (size: 0x8)
    class UOverlay* Overlay_Match;                                                    // 0x0298 (size: 0x8)
    class UOverlay* Overlay_Prepare;                                                  // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Condition_TimeNum;                                 // 0x02A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_GuildName_P1;                                      // 0x02B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_GuildName_P2;                                      // 0x02B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PlayerName_P1;                                     // 0x02C0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PlayerName_P2;                                     // 0x02C8 (size: 0x8)
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon;                                    // 0x02D0 (size: 0x8)
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_1;                                  // 0x02D8 (size: 0x8)
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_2;                                  // 0x02E0 (size: 0x8)
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_3;                                  // 0x02E8 (size: 0x8)
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_4;                                  // 0x02F0 (size: 0x8)
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_10;                                 // 0x02F8 (size: 0x8)
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_11;                                 // 0x0300 (size: 0x8)
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_12;                                 // 0x0308 (size: 0x8)
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_13;                                 // 0x0310 (size: 0x8)
    class UWBP_Arena_PalIcon_C* WBP_Arena_PalIcon_14;                                 // 0x0318 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0320 (size: 0x8)
    TArray<class UWBP_Arena_PalIcon_C*> Player1Otomos;                                // 0x0328 (size: 0x10)
    TArray<class UWBP_Arena_PalIcon_C*> Player2Otomos;                                // 0x0338 (size: 0x10)
    FWBP_Arena_Spectate_List_COnSpecClicked OnSpecClicked;                            // 0x0348 (size: 0x10)
    void OnSpecClicked(class UWBP_Arena_Spectate_List_C* ListUI);
    FWBP_Arena_Spectate_List_COnSpecHovered OnSpecHovered;                            // 0x0358 (size: 0x10)
    void OnSpecHovered(class UWBP_Arena_Spectate_List_C* ListUI);
    FWBP_Arena_Spectate_List_COnSpecUnhovered OnSpecUnhovered;                        // 0x0368 (size: 0x10)
    void OnSpecUnhovered(class UWBP_Arena_Spectate_List_C* ListUI);
    FGameDateTime Start Time;                                                         // 0x0378 (size: 0x8)
    FTimerHandle TimeUpdateTimer;                                                     // 0x0380 (size: 0x8)
    int32 Time Limit;                                                                 // 0x0388 (size: 0x4)

    void UpdateTimer();
    void Setup(FPalArenaSpectateRoomInfo RoomInfo);
    void AnmEvent_Focus();
    void AnmEvent_Normal();
    void OnInitialized();
    void BndEvt__WBP_Arena_Spectate_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_Spectate_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_Spectate_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_Arena_Spectate_List(int32 EntryPoint);
    void OnSpecUnhovered__DelegateSignature(class UWBP_Arena_Spectate_List_C* ListUI);
    void OnSpecHovered__DelegateSignature(class UWBP_Arena_Spectate_List_C* ListUI);
    void OnSpecClicked__DelegateSignature(class UWBP_Arena_Spectate_List_C* ListUI);
}; // Size: 0x38C

#endif
