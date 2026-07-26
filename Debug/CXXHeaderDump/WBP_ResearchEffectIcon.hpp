#ifndef UE4SS_SDK_WBP_ResearchEffectIcon_HPP
#define UE4SS_SDK_WBP_ResearchEffectIcon_HPP

class UWBP_ResearchEffectIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Icon;                                                               // 0x0280 (size: 0x8)
    TMap<class EPalWorkSuitability, class TSoftObjectPtr<UTexture2D>> MainTypeIcons;  // 0x0288 (size: 0x50)
    TMap<class EPalLabCategorySubType, class TSoftObjectPtr<UTexture2D>> SubTypeIcons; // 0x02D8 (size: 0x50)

    void SetupIcon(EPalWorkSuitability WorkType, EPalLabCategorySubType SubType);
    void ExecuteUbergraph_WBP_ResearchEffectIcon(int32 EntryPoint);
}; // Size: 0x328

#endif
