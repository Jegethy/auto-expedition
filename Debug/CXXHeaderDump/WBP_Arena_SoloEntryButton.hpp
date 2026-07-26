#ifndef UE4SS_SDK_WBP_Arena_SoloEntryButton_HPP
#define UE4SS_SDK_WBP_Arena_SoloEntryButton_HPP

class UWBP_Arena_SoloEntryButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Normal;                                               // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Reward;                                 // 0x0290 (size: 0x8)
    class UCanvasPanel* Canvas_Lock;                                                  // 0x0298 (size: 0x8)
    class UCanvasPanel* Canvas_Reward;                                                // 0x02A0 (size: 0x8)
    class UImage* Image_RankIcon;                                                     // 0x02A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Rank;                                              // 0x02B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RankLevelText;                                     // 0x02B8 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton;        // 0x02C0 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_1;      // 0x02C8 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_2;      // 0x02D0 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_3;      // 0x02D8 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_4;      // 0x02E0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02E8 (size: 0x8)
    EPalArenaRank ArenaRank;                                                          // 0x02F0 (size: 0x1)
    FWBP_Arena_SoloEntryButton_COnArenaSoloButtonClicked OnArenaSoloButtonClicked;    // 0x02F8 (size: 0x10)
    void OnArenaSoloButtonClicked(EPalArenaRank ArenaRank);
    TArray<class UWBP_PalInGameMenuItemSlotButton_C*> RewardItemSlots;                // 0x0308 (size: 0x10)
    FWBP_Arena_SoloEntryButton_COnArenaSoloButtonHovered OnArenaSoloButtonHovered;    // 0x0318 (size: 0x10)
    void OnArenaSoloButtonHovered(class UWBP_Arena_SoloEntryButton_C* Button);
    FWBP_Arena_SoloEntryButton_COnArenaSoloButtonUnhovered OnArenaSoloButtonUnhovered; // 0x0328 (size: 0x10)
    void OnArenaSoloButtonUnhovered(class UWBP_Arena_SoloEntryButton_C* Button);
    bool CurrentLock;                                                                 // 0x0338 (size: 0x1)

    void SetLock(bool IsLock);
    void Setup(EPalArenaRank Rank);
    void AnmEvent_Focus();
    void AnmEvent_Normal();
    void BndEvt__WBP_Arena_SoloEntryButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_SoloEntryButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Construct();
    void BndEvt__WBP_Arena_SoloEntryButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void ToggleFocusDisplay(bool IsFocus);
    void ExecuteUbergraph_WBP_Arena_SoloEntryButton(int32 EntryPoint);
    void OnArenaSoloButtonUnhovered__DelegateSignature(class UWBP_Arena_SoloEntryButton_C* Button);
    void OnArenaSoloButtonHovered__DelegateSignature(class UWBP_Arena_SoloEntryButton_C* Button);
    void OnArenaSoloButtonClicked__DelegateSignature(EPalArenaRank ArenaRank);
}; // Size: 0x339

#endif
