#ifndef UE4SS_SDK_CollectableWidget_HPP
#define UE4SS_SDK_CollectableWidget_HPP

class UCollectableWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* IconImage;                                                          // 0x0280 (size: 0x8)
    FText TooltipTitle;                                                               // 0x0288 (size: 0x18)
    FText TooltipSubtitle;                                                            // 0x02A0 (size: 0x18)
    class UEffigyTooltipWidget_C* TooltipWidgetRef;                                   // 0x02B8 (size: 0x8)

    void Construct();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void Destruct();
    void ExecuteUbergraph_CollectableWidget(int32 EntryPoint);
}; // Size: 0x2C0

#endif
