#ifndef UE4SS_SDK_WBP_Title_WorldSetting_Caution_HPP
#define UE4SS_SDK_WBP_Title_WorldSetting_Caution_HPP

class UWBP_Title_WorldSetting_Caution_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UHorizontalBox* Horizontal_BaseCampMaxNum;                                  // 0x0480 (size: 0x8)
    class UHorizontalBox* Horizontal_BaseCampWorkerMaxNum;                            // 0x0488 (size: 0x8)
    class UHorizontalBox* Horizontal_MaxBuildingNum;                                  // 0x0490 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0498 (size: 0x8)
    class UImage* Image_3;                                                            // 0x04A0 (size: 0x8)
    class UImage* Image_4;                                                            // 0x04A8 (size: 0x8)
    class UImage* Image_5;                                                            // 0x04B0 (size: 0x8)
    class UImage* Image_6;                                                            // 0x04B8 (size: 0x8)
    class UImage* Image_96;                                                           // 0x04C0 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_Title;                                     // 0x04C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Bottom;                                            // 0x04D0 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton_NO;                                   // 0x04D8 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton_YES;                                  // 0x04E0 (size: 0x8)
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;                                // 0x04E8 (size: 0x8)

    class UWidget* BP_GetDesiredFocusTarget();
    void Setup();
    void BndEvt__WBP_Title_WorldSetting_Caution_WBP_CommonButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_Title_WorldSetting_Caution_WBP_CommonButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void OnSetup();
    void ExecuteUbergraph_WBP_Title_WorldSetting_Caution(int32 EntryPoint);
}; // Size: 0x4F0

#endif
