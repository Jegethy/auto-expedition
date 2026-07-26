#ifndef UE4SS_SDK_WBP_Arena_SoloEntry_HPP
#define UE4SS_SDK_WBP_Arena_SoloEntry_HPP

class UWBP_Arena_SoloEntry_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0480 (size: 0x8)
    class UWBP_Arena_SoloEntryButton_C* WBP_Arena_SoloEntryButton;                    // 0x0488 (size: 0x8)
    class UWBP_Arena_SoloEntryButton_C* WBP_Arena_SoloEntryButton_1;                  // 0x0490 (size: 0x8)
    class UWBP_Arena_SoloEntryButton_C* WBP_Arena_SoloEntryButton_2;                  // 0x0498 (size: 0x8)
    class UWBP_Arena_SoloEntryButton_C* WBP_Arena_SoloEntryButton_3;                  // 0x04A0 (size: 0x8)
    class UWBP_Arena_SoloEntryButton_C* WBP_Arena_SoloEntryButton_4;                  // 0x04A8 (size: 0x8)
    class UWBP_Arena_SoloEntryButton_C* WBP_Arena_SoloEntryButton_5;                  // 0x04B0 (size: 0x8)
    class UWBP_Arena_SoloEntryButton_C* WBP_Arena_SoloEntryButton_6;                  // 0x04B8 (size: 0x8)
    TArray<class UWBP_Arena_SoloEntryButton_C*> EntryButtons;                         // 0x04C0 (size: 0x10)
    EPalArenaRank CurrentSelectRank;                                                  // 0x04D0 (size: 0x1)
    class UWBP_Arena_SoloEntryButton_C* LastHoveredEntry;                             // 0x04D8 (size: 0x8)

    void OnEntryHovered(class UWBP_Arena_SoloEntryButton_C* Button);
    void OnEntryUnhovered(class UWBP_Arena_SoloEntryButton_C* Button);
    void Setup();
    class UWidget* BP_GetDesiredFocusTarget();
    void Finished_6E03AF144B8AC540362D31A1A74FC2B5();
    void Finished_A8F632BC4656B439BE29FC9AA565281B();
    void OnInitialized();
    void Construct();
    void OnSetup();
    void OnSelectSoloEntry(EPalArenaRank ArenaRank);
    void CancelAction();
    void OnConfirmSolo(bool IsYes);
    void ExecuteUbergraph_WBP_Arena_SoloEntry(int32 EntryPoint);
}; // Size: 0x4E0

#endif
