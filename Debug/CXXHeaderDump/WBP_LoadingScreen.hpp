#ifndef UE4SS_SDK_WBP_LoadingScreen_HPP
#define UE4SS_SDK_WBP_LoadingScreen_HPP

class UWBP_LoadingScreen_C : public UPalLoadingScreenWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_Tips;                           // 0x0458 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0460 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Tips;                                             // 0x0468 (size: 0x8)
    class UImage* Image_50;                                                           // 0x0470 (size: 0x8)
    class UWBP_Common_LoadingIcon_C* WBP_Common_LoadingIcon;                          // 0x0478 (size: 0x8)
    class UWBP_PalFlipbookWidget_C* WBP_PalFlipbookWidget;                            // 0x0480 (size: 0x8)
    int32 MaxTipCount;                                                                // 0x0488 (size: 0x4)
    TArray<class UPaperFlipbook*> FlipbookArray;                                      // 0x0490 (size: 0x10)

    void GetIconIndex(int32& IconIndex);
    void GetTipsNumber(int32& TipsNumber);
    void SetBgColor(FLinearColor Color);
    void Construct();
    void ToggleVisibility(bool Visiable);
    void Destruct();
    void ExecuteUbergraph_WBP_LoadingScreen(int32 EntryPoint);
}; // Size: 0x4A0

#endif
