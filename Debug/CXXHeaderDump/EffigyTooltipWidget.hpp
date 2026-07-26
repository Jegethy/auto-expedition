#ifndef UE4SS_SDK_EffigyTooltipWidget_HPP
#define UE4SS_SDK_EffigyTooltipWidget_HPP

class UEffigyTooltipWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* SubtitleTextBlock;                                      // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* TitleTextBlock;                                         // 0x0288 (size: 0x8)
    class UWidget* Anchor Icon;                                                       // 0x0290 (size: 0x8)
    class UWidget* Map Panel;                                                         // 0x0298 (size: 0x8)
    bool Enabled;                                                                     // 0x02A0 (size: 0x1)

    void UpdatePosition();
    void SetEnabled(bool bNewEnabled);
    void SetTooltipContent(FText Title, FText Subtitle);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_EffigyTooltipWidget(int32 EntryPoint);
}; // Size: 0x2A1

#endif
