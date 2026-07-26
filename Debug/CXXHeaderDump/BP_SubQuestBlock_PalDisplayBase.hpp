#ifndef UE4SS_SDK_BP_SubQuestBlock_PalDisplayBase_HPP
#define UE4SS_SDK_BP_SubQuestBlock_PalDisplayBase_HPP

class UBP_SubQuestBlock_PalDisplayBase_C : public UPalQuestBlock
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0120 (size: 0x8)
    EPalPalDisplayCategory DisplayCategory;                                           // 0x0128 (size: 0x1)
    FTimerHandle NewVar;                                                              // 0x0130 (size: 0x8)
    FName LastRequireRequestID;                                                       // 0x0138 (size: 0x8)

    void GetRecordData(class UPalPlayerRecordData*& RecordData);
    void GetDescriptionText(FText& OutText);
    void GetCurrentDisplayRequestData(FPalDisplayRequestData& RequestData);
    void IsComplete(bool& bCompleted);
    void OnSetup_ServerInternal_ForBP();
    void カスタムイベント();
    void OnComplete_ServerInternal_ForBP();
    void ExecuteUbergraph_BP_SubQuestBlock_PalDisplayBase(int32 EntryPoint);
}; // Size: 0x140

#endif
