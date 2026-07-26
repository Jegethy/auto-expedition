#ifndef UE4SS_SDK_WBP_Research_TreeLv_HPP
#define UE4SS_SDK_WBP_Research_TreeLv_HPP

class UWBP_Research_TreeLv_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Level;                                  // 0x0280 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x0288 (size: 0x8)
    class USpacer* Spacer;                                                            // 0x0290 (size: 0x8)
    class UWBP_ResearchEffectIcon_C* WBP_ResearchEffectIcon;                          // 0x0298 (size: 0x8)

    void SetLevelHeight(int32 Level, int32 BlockHeight, EPalWorkSuitability Type);
    void ExecuteUbergraph_WBP_Research_TreeLv(int32 EntryPoint);
}; // Size: 0x2A0

#endif
