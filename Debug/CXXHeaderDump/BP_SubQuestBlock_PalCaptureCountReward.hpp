#ifndef UE4SS_SDK_BP_SubQuestBlock_PalCaptureCountReward_HPP
#define UE4SS_SDK_BP_SubQuestBlock_PalCaptureCountReward_HPP

class UBP_SubQuestBlock_PalCaptureCountReward_C : public UPalQuestBlock
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0120 (size: 0x8)
    FTimerHandle NewVar;                                                              // 0x0128 (size: 0x8)
    int32 OldCaptureCount;                                                            // 0x0130 (size: 0x4)
    FName OldRequestid;                                                               // 0x0134 (size: 0x8)

    void GetRecordData(class UPalPlayerRecordData*& RecordData);
    void GetCurrentObjecttiveData(FPalRecordCountRewardData& RewardData);
    void GetProgressText(FText& OutText);
    void IsCompleted(bool& bCompleted);
    void GetDescriptionText(FText& OutText);
    void OnSetup_ServerInternal_ForBP();
    void OnComplete_ServerInternal_ForBP();
    void カスタムイベント();
    void ExecuteUbergraph_BP_SubQuestBlock_PalCaptureCountReward(int32 EntryPoint);
}; // Size: 0x13C

#endif
