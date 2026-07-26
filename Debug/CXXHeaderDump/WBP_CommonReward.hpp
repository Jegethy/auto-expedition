#ifndef UE4SS_SDK_WBP_CommonReward_HPP
#define UE4SS_SDK_WBP_CommonReward_HPP

class UWBP_CommonReward_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetAnimation* Anm_MonoColor;                                            // 0x0458 (size: 0x8)
    class UWidgetAnimation* Anm_PurpleColor;                                          // 0x0460 (size: 0x8)
    class UWidgetAnimation* Anm_DefaultColor;                                         // 0x0468 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x0470 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0478 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_C_99;                           // 0x0480 (size: 0x8)
    class UImage* Icon;                                                               // 0x0488 (size: 0x8)
    class UImage* Image_Mutant;                                                       // 0x0490 (size: 0x8)
    class UImage* Image_Strong;                                                       // 0x0498 (size: 0x8)
    class USpacer* Spacer_62;                                                         // 0x04A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Title;                                             // 0x04A8 (size: 0x8)
    TArray<FPalUICommonRewardDisplayData> RewardInfos;                                // 0x04B0 (size: 0x10)
    bool Queuing;                                                                     // 0x04C0 (size: 0x1)
    TMap<class EPalUIRewardDisplayType, class FDataTableRowHandle> TitleMap;          // 0x04C8 (size: 0x50)

    void Finished_8B86E03B4C9B039B2D1E43872343E0D8();
    void Finished_99C931904947D8826978CE8B6DE53642();
    void ShowInfo();
    void QueueRewardInfo(FPalUICommonRewardDisplayData Info);
    void SetInfo(FPalUICommonRewardDisplayData Info);
    void ChangeColor(EPalUIRewardDisplayType DisplayType);
    void ClearQueueInfo();
    void ExecuteUbergraph_WBP_CommonReward(int32 EntryPoint);
}; // Size: 0x518

#endif
