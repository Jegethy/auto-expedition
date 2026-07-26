#ifndef UE4SS_SDK_WBP_InGame_Match_Win_HPP
#define UE4SS_SDK_WBP_InGame_Match_Win_HPP

class UWBP_InGame_Match_Win_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Win;                                                  // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Win_Name;                                          // 0x0288 (size: 0x8)

    void SetWinner(FText InText);
    void ExecuteUbergraph_WBP_InGame_Match_Win(int32 EntryPoint);
}; // Size: 0x290

#endif
