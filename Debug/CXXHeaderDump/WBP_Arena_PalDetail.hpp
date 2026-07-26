#ifndef UE4SS_SDK_WBP_Arena_PalDetail_HPP
#define UE4SS_SDK_WBP_Arena_PalDetail_HPP

class UWBP_Arena_PalDetail_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;        // 0x0280 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x0288 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_WBP_Arena_PalDetail(int32 EntryPoint);
}; // Size: 0x290

#endif
