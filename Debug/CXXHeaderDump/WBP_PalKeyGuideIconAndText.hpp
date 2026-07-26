#ifndef UE4SS_SDK_WBP_PalKeyGuideIconAndText_HPP
#define UE4SS_SDK_WBP_PalKeyGuideIconAndText_HPP

class UWBP_PalKeyGuideIconAndText_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_75;                                   // 0x0458 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x0460 (size: 0x8)
    FPalDataTableRowName_UIInputAction BindingActionName;                             // 0x0468 (size: 0x8)

    void OnInitialized();
    void ExecuteUbergraph_WBP_PalKeyGuideIconAndText(int32 EntryPoint);
}; // Size: 0x470

#endif
