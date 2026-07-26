#ifndef UE4SS_SDK_BP_SubQuest_PalDisplayBase_HPP
#define UE4SS_SDK_BP_SubQuest_PalDisplayBase_HPP

class UBP_SubQuest_PalDisplayBase_C : public UBP_PalQuestDataBase_C
{

    FPalCommonQuestRewardData GetCustomDisplayRewardData();
    void FormatQuestDescriptionText(const FText& InOriginalText, FText& OutText);
}; // Size: 0x238

#endif
