#ifndef UE4SS_SDK_WBP_Research_Buff_HPP
#define UE4SS_SDK_WBP_Research_Buff_HPP

class UWBP_Research_Buff_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RearchEffect;                                      // 0x0280 (size: 0x8)
    class UWBP_ResearchEffectIcon_C* WBP_ResearchEffectIcon;                          // 0x0288 (size: 0x8)

    void Setup(EPalWorkSuitability MainType, EPalLabCategorySubType SubType, FText Effect);
    void ExecuteUbergraph_WBP_Research_Buff(int32 EntryPoint);
}; // Size: 0x290

#endif
