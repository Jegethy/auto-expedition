#ifndef UE4SS_SDK_BP_PalQuestBlock_Base_HPP
#define UE4SS_SDK_BP_PalQuestBlock_Base_HPP

class UBP_PalQuestBlock_Base_C : public UPalQuestBlock
{
    FDataTableRowHandle DescriptionText;                                              // 0x0120 (size: 0x10)

    void GetDescriptionText(FText& OutText);
}; // Size: 0x130

#endif
