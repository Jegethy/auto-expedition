#ifndef UE4SS_SDK_BP_MainQuestBlock_CollectKeySpheres_HasItem_test_HPP
#define UE4SS_SDK_BP_MainQuestBlock_CollectKeySpheres_HasItem_test_HPP

class UBP_MainQuestBlock_CollectKeySpheres_HasItem_test_C : public UPalQuestBlock_HasItem
{
    int32 RequireCount;                                                               // 0x0178 (size: 0x4)

    void GetDescriptionText(FText& OutText);
    void GetProgressText(FText& OutText);
}; // Size: 0x17C

#endif
