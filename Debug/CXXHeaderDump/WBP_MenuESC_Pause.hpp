#ifndef UE4SS_SDK_WBP_MenuESC_Pause_HPP
#define UE4SS_SDK_WBP_MenuESC_Pause_HPP

class UWBP_MenuESC_Pause_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UImage* Image_102;                                                          // 0x0480 (size: 0x8)
    class UImage* Image_Line;                                                         // 0x0488 (size: 0x8)
    class UImage* Image_Line_1;                                                       // 0x0490 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x0498 (size: 0x8)

    void Destruct();
    void ExecuteUbergraph_WBP_MenuESC_Pause(int32 EntryPoint);
}; // Size: 0x4A0

#endif
