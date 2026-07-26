#ifndef UE4SS_SDK_WBP_Quest_Objective_HPP
#define UE4SS_SDK_WBP_Quest_Objective_HPP

class UWBP_Quest_Objective_C : public UUserWidget
{
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_2;                                    // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_3;                                    // 0x0280 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_Objective;                                 // 0x0288 (size: 0x8)
    class USizeBox* SizeBox_Clear;                                                    // 0x0290 (size: 0x8)
    class USizeBox* SizeBox_Default;                                                  // 0x0298 (size: 0x8)

    void Setup(FText ProgressDesc, FText Progress, bool bCompleted);
}; // Size: 0x2A0

#endif
