#ifndef UE4SS_SDK_BP_QuestBlock_DeliveryItem_Base_HPP
#define UE4SS_SDK_BP_QuestBlock_DeliveryItem_Base_HPP

class UBP_QuestBlock_DeliveryItem_Base_C : public UPalQuestBlock_DeliveryItem
{
    FDataTableRowHandle ObjectiveText;                                                // 0x0178 (size: 0x10)

    void GetDescriptionText(FText& OutText);
}; // Size: 0x188

#endif
