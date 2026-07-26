#ifndef UE4SS_SDK_WBP_CommonWarning_HPP
#define UE4SS_SDK_WBP_CommonWarning_HPP

class UWBP_CommonWarning_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x0458 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0460 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock;                                // 0x0468 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0470 (size: 0x8)
    bool Displaying;                                                                  // 0x0478 (size: 0x1)
    TArray<FName> Crime Ids;                                                          // 0x0480 (size: 0x10)
    EPalUICommonWarningType Display Type;                                             // 0x0490 (size: 0x1)
    FWBP_CommonWarning_COnWarningClear OnWarningClear;                                // 0x0498 (size: 0x10)
    void OnWarningClear(EPalUICommonWarningType WarningType);

    void GetDisplayType(EPalUICommonWarningType& Display Type);
    void Finished_DAD0908E4A3D9DC986076BBB9D0BAB98();
    void SetWarning(FPalUICommonWarningDisplayData WarningData);
    void ClearWarning();
    void ExecuteUbergraph_WBP_CommonWarning(int32 EntryPoint);
    void OnWarningClear__DelegateSignature(EPalUICommonWarningType WarningType);
}; // Size: 0x4A8

#endif
