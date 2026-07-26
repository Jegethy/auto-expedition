#ifndef UE4SS_SDK_WBP_Option_HelpGuide_HPP
#define UE4SS_SDK_WBP_Option_HelpGuide_HPP

class UWBP_Option_HelpGuide_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0480 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_NoteCount;                              // 0x0488 (size: 0x8)
    class UWBP_NoData_C* WBP_NoData;                                                  // 0x0490 (size: 0x8)
    class UWBP_Option_NoteContent_C* WBP_Option_NoteContent;                          // 0x0498 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList;                        // 0x04A0 (size: 0x8)
    FName CurrentNoteTitle;                                                           // 0x04A8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* FocusTarget;                                     // 0x04B0 (size: 0x8)
    bool InGameMenu;                                                                  // 0x04B8 (size: 0x1)

    class UWidget* BP_GetDesiredFocusTarget();
    void Change Note Content(FName NoteTitle);
    void Setup(FName NoteTitle);
    void Finished_80D7C1A8449D6AAAECA77A96E24A7B39();
    void OnSetup();
    void ClosePanel();
    void Destruct();
    void ExecuteUbergraph_WBP_Option_HelpGuide(int32 EntryPoint);
}; // Size: 0x4B9

#endif
