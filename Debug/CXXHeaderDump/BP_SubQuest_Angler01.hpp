#ifndef UE4SS_SDK_BP_SubQuest_Angler01_HPP
#define UE4SS_SDK_BP_SubQuest_Angler01_HPP

class UBP_SubQuest_Angler01_C : public UBP_PalQuestDataBase_C
{
    FDataTableRowHandle NewVar;                                                       // 0x0238 (size: 0x10)

    void FormatQuestDescriptionText(const FText& InOriginalText, FText& OutText);
}; // Size: 0x248

#endif
