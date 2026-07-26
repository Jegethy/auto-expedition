#ifndef UE4SS_SDK_WBP_Arena_PalSelect_Ready_HPP
#define UE4SS_SDK_WBP_Arena_PalSelect_Ready_HPP

class UWBP_Arena_PalSelect_Ready_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Select;                                               // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Ready;                                                // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_PalCount;                               // 0x0290 (size: 0x8)

    void SetPalCount(int32 Current, int32 Max);
    void Ready();
    void ExecuteUbergraph_WBP_Arena_PalSelect_Ready(int32 EntryPoint);
}; // Size: 0x298

#endif
