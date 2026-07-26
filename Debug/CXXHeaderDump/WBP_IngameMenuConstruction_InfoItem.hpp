#ifndef UE4SS_SDK_WBP_IngameMenuConstruction_InfoItem_HPP
#define UE4SS_SDK_WBP_IngameMenuConstruction_InfoItem_HPP

class UWBP_IngameMenuConstruction_InfoItem_C : public UUserWidget
{
    class UBP_PalTextBlock_C* BP_PalTextBlock_C;                                      // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_2;                                    // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_71;                                   // 0x0288 (size: 0x8)
    class UImage* Icon;                                                               // 0x0290 (size: 0x8)
    class UImage* Image_Base_Gray;                                                    // 0x0298 (size: 0x8)
    class UImage* Image_Base_Red;                                                     // 0x02A0 (size: 0x8)

    void Setup(FName ID, int32 NeedNum, int32 HasNum);
}; // Size: 0x2A8

#endif
