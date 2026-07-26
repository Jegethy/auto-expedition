#ifndef UE4SS_SDK_WBP_PalActionBarContent_HPP
#define UE4SS_SDK_WBP_PalActionBarContent_HPP

class UWBP_PalActionBarContent_C : public UPalCommonBoundActionButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1510 (size: 0x8)
    class UWidgetAnimation* Anm_Unhovered;                                            // 0x1518 (size: 0x8)
    class UWidgetAnimation* Anm_Hovered;                                              // 0x1520 (size: 0x8)
    class UHorizontalBox* HorizontalBox_32;                                           // 0x1528 (size: 0x8)
    class UImage* Image_68;                                                           // 0x1530 (size: 0x8)

    void Construct();
    void OnUpdateInputAction();
    void HoveredEvent(class UCommonButtonBase* Button);
    void UnhoveredEvent(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_PalActionBarContent(int32 EntryPoint);
}; // Size: 0x1538

#endif
